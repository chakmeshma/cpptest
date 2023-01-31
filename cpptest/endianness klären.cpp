#include <string>
#include <iostream>
#include <vector>

using namespace std;



inline std::string chek(unsigned char* data, unsigned int size) {
	std::vector<std::string> allBitSequences;


	for (unsigned int byte = 0; byte < size; byte++) {
		std::string bitSequence("");

		for (int bit = 0; bit < 8; bit++) {
			unsigned char a = (data[byte] >> bit);
			bitSequence.insert(0, 1, a % 2 ? '1' : '0');
		}

		allBitSequences.push_back(bitSequence);
	}

	std::string result("");

	unsigned int sss = allBitSequences.size();

	for (int zz = sss - 1; zz >= 0; zz--) {
		result.append(allBitSequences[zz]);
		if (zz > 0)result.append("\n");
	}

	return result;
}


//int main() {
//	unsigned short a = 0b1111111100000000;
//
//	unsigned short a1 = (reinterpret_cast<unsigned char*>(&a))[0];
//	unsigned short a2 = (reinterpret_cast<unsigned char*>(&a))[1];
//
//	std::cout << a << std::endl;
//
//	std::cout << a1 << std::endl;
//	std::cout << a2 << std::endl;
//}

int main() {
	unsigned short a = 256;
	unsigned short b = 0b0000000100000000;
	unsigned short c = 0x0100;

	cout << chek((unsigned char*)&a, 2);
	cout << endl;
	cout << endl;
	cout << chek((unsigned char*)&b, 2);
	cout << endl;
	cout << endl;
	cout << chek((unsigned char*)&c, 2);

	return 0;
}