#include <iostream>

using namespace std;

class Animal{
	char name[10];
};
	
class Dog: public Animal {
public:
	void voice() {
		cout << name << "Barks.";
	}
};

class Lion: public Animal {
public:
	void voice() {
		cout << name << "Roars."
	}
};

int main() {
	Dog Lucy("Lucy");
	Lion King("King");
	return 0;
}
