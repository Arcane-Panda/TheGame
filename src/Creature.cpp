#include <iostream>

using namespace std;

class Creature
{
    Creature::Creature(string _name, unsigned _id, int _healthLevel, unsigned _healthMax, unsigned _damage)
		: Object(_name, _id), healthLevel(_healthLevel), healthMax(_healthMax), damage(_damage)
		{}

		void Creature::setHealth(int _healthLevel, unsigned _healthMax) {
			healthLevel = _healthLevel;
			healthMax = _healthMax;
		}

		int getHealthLevel() {
			return healthLevel;
		}

		unsigned getHealthMax() {
			return healthMax;
		}

		void setDamage(unsigned _damage) {
			damage = _damage;
		}

		unsigned getDamage() {
			return damage;
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
			healthMax += newItem.getHealthBonus();
			damage += newItem.getDamageBonus();
		}

		void unequip(Item newItem) {
			inventory.erase(remove(inventory.begin(), inventory.end(), newItem), inventory.end());
			healthMax -= newItem.getHealthBonus();
			damage -= newItem.getDamageBonus();
		}
}
