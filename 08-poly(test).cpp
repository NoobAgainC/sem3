#include <iostream.h>
#include <string.h>

#define MAX_NAME 28

using namespace std;

class Animal{
protected:
	char name[MAX_NAME];
public:
    void getname(const char *s) {
        strcpy(name, s);
    }
};
	
	
class Dog: public Animal {
public:
	void voice() {
		cout << name << "Barks." << endl;
	}
};

class Lion: public Animal {
public:
	void voice() {
		cout << name << "Roars." << endl;
	}
};

int main() {
	Dog Lucy;
	Lion King;
	Lucy.getname("Lucy");
	King.getname("King");
	Lucy.voice();
	King.voice();
	return 0;
}
