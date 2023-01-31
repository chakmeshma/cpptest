#include <iostream>
#include <vector>

using namespace std;

class Human {
private:
	int age = 2;
};

string getSTR() {

	string str;

	cout << &str << endl;

	return str;
}
Human getHuman() {
	Human human;

	cout << &human << endl;

	return human;
}
vector<int> getVector() {
	vector<int> vctr;

	cout << &vctr << endl;

	return vctr;
}
void acceptVector(vector<int> vctr) {
	cout << &vctr << endl;
}
void acceptSTR(string str) {
	cout << &str << endl;
}
void acceptSTR_ref(string& str) {
	cout << &str << endl;
}
vector<Human> getVectorHuman() {
	vector<Human> vctr;

	cout << &vctr << endl;

	return vctr;
}

int main() {

	Human h = getHuman();						// human passed by value (diffptr)
	cout << &h << endl;

	/*string s = getSTR();						// string passed by ref (sameptr)
	cout << &s << endl;*/

	/*vector<int> vctr = getVector();			// vector passed by ref (sameptr)
	cout << &vctr << endl;*/

	//vector<int> vctr;							// vector passed by value (diffptr)
	////vctr.push_back(3);
	//cout << &vctr << endl;
	//acceptVector(vctr);
	////cout << vctr.size();

	//string str;								// string passed by value (diffptr)
	//cout << &str << endl;
	//acceptSTR(str);

	/*string str;								// string passed by ref (sameptr)
	cout << &str << endl;
	acceptSTR_ref(str);*/

	//vector<Human> vctr = getVectorHuman();	// vector passed by ref (sameptr)
	//cout << &vctr << endl;

	/*string str = "Majid";						// str passed by value (diffptr) because str was initialized before assigment
	cout << &str << endl;
	str = getSTR();
	cout << &str << endl;*/

	return 0;
}