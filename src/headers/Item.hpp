#ifndef ITEM_HPP
#define ITEM_HPP

class Item : public Object {
	public:
		unsigned healthBonus;
		unsigned damageBonus;
		
		void setHealthBonus(unsigned _healthBonus) {
			healthBonus = _healthBonus;
		}

		void setDamageBonus(unsigned _damageBonus) {
			damageBonus = _damageBonus;
		}

		bool operator==(const Item &i) {return i.id == id;}
};

#endif