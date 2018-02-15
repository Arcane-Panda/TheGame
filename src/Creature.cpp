#include <iostream>
#include "Creature.hpp"

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

		int Creature::getHealthLevel() {
			return healthLevel;
		}

		unsigned Creature::getHealthMax() {
			return healthMax;
		}

		void Creature::setDamage(unsigned _damage) {
			damage = _damage;
		}

		unsigned Creature::getDamage() {
			return damage;
		}

		void Creature::attack(Creature& victim) {
			victim.healthLevel -= damage;
		}

		void Creature::enrage(float healthBuff, float damageBuff) {
			healthLevel *= healthBuff;
			healthMax *= healthBuff;
			damage *= damageBuff;
		}

		void Creature::equip(Item newItem) {
			inventory.push_back(newItem);
			healthMax += newItem.getHealthBonus();
			damage += newItem.getDamageBonus();
		}

		void Creature::unequip(Item newItem) {
			inventory.erase(remove(inventory.begin(), inventory.end(), newItem), inventory.end());
			healthMax -= newItem.getHealthBonus();
			damage -= newItem.getDamageBonus();
		}
}
