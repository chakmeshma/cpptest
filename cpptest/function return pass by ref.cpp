#include <iostream>

using namespace std;

class Human {
public:
	int a = 1;
};

Human& getHuman() {
	Human newHuman;

	std::cout << &newHuman << std::endl;

	return newHuman;
}

int main(void) {

	Human& b = getHuman();

	std::cout << &b << std::endl;

	return 0;
}
