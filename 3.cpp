
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	string msj = "error";
	cout << "enter a : ";
	cin >> a;
	cout << "enter b : ";
	cin >> b;

	try
	{
		if (b != 0)
			cout << a << " / " << b << " = " << a / b;
		else
			throw msj;
	}
	catch (string s)
	{
		cout << s;
	}

	return 0;
}