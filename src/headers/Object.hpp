#ifndef OBJECT_HPP
#define OBJECT_HPP

class Object {
	protected:
		string name;
		unsigned id;
	public:
		Object(string _name, unsigned _id)
		: name(_name), id(_id)
		{}

		void setName(string _name) {
			name = _name;
		}

		string getName() {
			return name;
		}

		void setId(unsigned _id) {
			id = _id;
		}

		unsigned getId() {
			return id;
		}
};

#endif