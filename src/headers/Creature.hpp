#ifndef CREATURE_HPP
#define CREATURE_HPP

class Creature : public Object {
	public:
		int healthLevel;
		unsigned healthMax;
		unsigned damage;
		vector<Item> inventory;

		void setHealth(int _healthLevel, unsigned _healthMax) {
			healthLevel = _healthLevel;
			healthMax = _healthMax;
		}

		void setDamage(unsigned _damage) {
			damage = _damage;
		}

		void attack(Creature& victim) {
			victim.healthLevel -= damage;
		}

		void enrage(float healthBuff, float damageBuff) {
			healthLevel *= healthBuff;
			healthMax *= healthBuff;
			damage *= damageBuff;
		}

		void equip(Item newItem) {
			inventory.push_back(newItem);
			healthMax += newItem.healthBonus;
			damage += newItem.damageBonus;
		}

		void unequip(Item newItem) {
			inventory.erase(remove(inventory.begin(), inventory.end(), newItem), inventory.end());
			healthMax -= newItem.healthBonus;
			damage -= newItem.damageBonus;
		}

		void printInfo() {
			std::cout << name << " " << healthLevel << "/" << healthMax << " " << damage << std::endl;
		}
};

#endif
