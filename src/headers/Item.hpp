#ifndef ITEM_HPP
#define ITEM_HPP

class Item : public Object {
	private:
		unsigned healthBonus;
		unsigned damageBonus;
	public:
		Item(string _name, unsigned _id, unsigned _healthBonus, unsigned _damageBonus)
		: Object(_name, _id), healthBonus(_healthBonus), damageBonus(_damageBonus)
		{}

		void setHealthBonus(unsigned _healthBonus) {
			healthBonus = _healthBonus;
		}

		unsigned getHealthBonus() {
			return healthBonus;
		}

		void setDamageBonus(unsigned _damageBonus) {
			damageBonus = _damageBonus;
		}

		unsigned getDamageBonus() {
			return damageBonus;
		}

		bool operator==(const Item &item) {
			return item.id == id;
		}
};

#endif