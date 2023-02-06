#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif


#include <Windows.h>
#include <iostream>

using namespace std;

#define COMPrison(_exp) std::cout << ((_exp) ? ("Satisfied") : ("Not Satisfied")) << std::endl;

class Human {
public:
	int age = 23;
};

int main() {
	unsigned char a = 255;
	char b = -1;

	COMPrison(a == b)
		COMPrison(a == ((unsigned char)b))
		COMPrison(a == (static_cast<unsigned char>(b)))

		std::cout << std::endl;

	Human x;
	Human y;

	COMPrison(x.age==y.age)
	COMPrison(&x==&y)
	COMPrison(x==y)

	return 0;
}