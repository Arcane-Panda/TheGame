#ifndef OBJECT_HPP
#define OBJECT_HPP

class Object {
	public:
		string name;
		unsigned id;
		int x, y;

		void setName(string _name) {
			name = _name;
		}

		void setId(unsigned _id) {
			id = _id;
		}

		void setPosition(int _x, int _y) {
			x = _x;
			y = _y;
		}
};

#endif