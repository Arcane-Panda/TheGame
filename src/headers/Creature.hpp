#ifndef CREATURE_HPP
#define CREATURE_HPP

class Creature {
	private:
		std::string name;
		int hpLevel;
		unsigned hpMax;
		unsigned damage;
		std::vector<Item> inventory;
	public:
		Creature(std::string _name, int _hpLevel, unsigned _hpMax, unsigned _damage)
		: name(_name), hpLevel(_hpLevel), hpMax(_hpMax), damage(_damage)
		{}

		void attack(Creature& victim) {
			victim.hpLevel -= damage;
		}

		void enrage(float hpBuff, float damageBuff) {
			hpLevel *= hpBuff;
			hpMax *= hpBuff;
			damage *= damageBuff;
		}

		void equip(Item newItem) {
			inventory.push_back(newItem);
			hpMax += newItem.hpBonusValue();
			damage += newItem.damageBonusValue();
		}

		void unequip(Item newItem) {
			inventory.erase(remove(inventory.begin(), inventory.end(), newItem), inventory.end());
			hpMax -= newItem.hpBonusValue();
			damage -= newItem.damageBonusValue();
		}

		void printInfo() {
			std::cout << name << " " << hpLevel << "/" << hpMax << " " << damage << std::endl;
		}
};

#endif
