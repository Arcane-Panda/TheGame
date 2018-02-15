#ifndef CREATURE_HPP
#define CREATURE_HPP

class Creature : public Object {
	private:
		int healthLevel;
		unsigned healthMax;
		unsigned damage;
		vector<Item> inventory;
	public:
		Creature(string _name, unsigned _id, int _healthLevel, unsigned _healthMax, unsigned _damage)
		: Object(_name, _id), healthLevel(_healthLevel), healthMax(_healthMax), damage(_damage);
		void setHealth(int _healthLevel, unsigned _healthMax); 
		int getHealthLevel(); 
		unsigned getHealthMax(); 
		void setDamage(unsigned _damage); 
		unsigned getDamage();
		void attack(Creature& victim);
		void enrage(float healthBuff, float damageBuff);
		void equip(Item newItem); 
		void unequip(Item newItem); 
};

#endif
