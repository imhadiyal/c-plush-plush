#include <iostream>
#include <string.h>
using namespace std;

class Bank
{
public:
	long int acc_number;
	char acc_name[20];
	string acc_type;
	string acc_branch;
	double acc_balance;

	Bank()
	{
		cout << "Enter accout number : ";
		cin >> this->acc_number;
		fflush(stdin);
		cout << "Enter account name : ";
		gets(this->acc_name);
		cout << "Entre account type : ";
		cin >> this->acc_type;
		cout << "Enter account branch : ";
		cin >> this->acc_branch;
		cout << "Enter account balance : ";
		cin >> this->acc_balance;
		cout << endl;
	}
};

int main()
{
	int user;
	cout << "Enter number of user : ";
	cin >> user;

	Bank b1[user];

	long int a_number;
	cout << "Enter account number of user : ";
	cin >> a_number;

	for (user; user >= 0; user--)
	{
		if (a_number == Bank[i].account)
		{
			cout << endl
				 << "Account number : " << Bank[i].number << endl
				 << "Account name : " << Bank[i].name << endl
				 << "Account type : " << Bank[i].type << endl
				 << "Account branch : " << Bank[i].branch << endl
				 << "Account balance : " << Bank[i].balance << endl;
		}
	}
	return 0;
}