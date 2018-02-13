#ifndef ITEM_HPP
#define ITEM_HPP

class Item {
	private:
		std::string name;
		unsigned hpBonus;
		unsigned damageBonus;
		unsigned id;
	public:
		Item(std::string _name, unsigned _hpBonus, unsigned _damageBonus, unsigned _id)
		: name(_name), hpBonus(_hpBonus), damageBonus(_damageBonus), id(_id)
		{}

		unsigned hpBonusValue() {return hpBonus;}
		unsigned damageBonusValue() {return damageBonus;}

		bool operator==(const Item &item) {return item.id == id;}
};

#endif