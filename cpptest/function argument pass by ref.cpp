#include <iostream>

using namespace std;

class Human {
public:
	int a = 1;
};

void getHuman(Human& i) {
	Human b;

	std::cout << &i << ":::" << i.a << std::endl;

	i = b;

	std::cout << &i << ":::" << i.a << std::endl;
}

int main(void) {
	Human bb;

	std::cout << &bb << ":::" << bb.a << std::endl;

	getHuman(bb);

	std::cout << &bb << ":::" << bb.a << std::endl;

	return 0;
}
