#include <iostream>
using namespace std;

class A
{
public:
	void print()
	{
		cout << "Hello Darshan" << endl;
	}
};

class B : public A
{
public:
	void print()
	{
		cout << "i m hadiyal " << endl;
	}
};

int main()
{
	B o1;

	o1.print();

	return 0;
}