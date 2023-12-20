#include <iostream>
#include <string>
using namespace std;

class A
{

protected:
    int id;
    char name[20];
    string role;
    double salary;
    string experince;
    char comp_name[20];
    char address[20];
    string email;
    string contact;

public:
    void setterA()
    {
        cout << "enter your id : ";
        cin >> id;
        fflush(stdin);
        cout << "enter your name : ";
        gets(name);
        cout << "enter your role : ";
        cin >> role;
    }
};

class B : public A
{
public:
    void setterB()
    {
        cout << "enter your salary : ";
        cin >> salary;
        cout << "enter your experince :";
        cin >> experince;
    }
};

class C : public B
{
public:
    void setterC()
    {
        fflush(stdin);
        cout << "enter your comp_name :";
        gets(comp_name);
        cout << "enter your comp_name :";
        gets(address);
    }

    void getterC()
    {
        cout << endl
             << "Name\t:\t" << name << endl
             << "Role\t:\t" << role << endl
             << "Salary\t:\t" << salary << endl;
    }
};

class D : public C
{
public:
    void setterD()
    {
        cout << "Enter your email :";
        cin >> comp_name;
        cout << "Enter your Contec :";
        cin >> contact;
    }

    void getterD()
    {
        cout << "Id\t:\t" << id << endl
             << "Role\t:\t" << role << endl
             << "Salary\t:\t" << salary << endl
             << "Experince\t:" << experince << endl
             << "Comp_name\t:" << comp_name << endl
             << "Address\t:\t" << address << endl
             << "Email\t:\t" << email << endl
             << "Contact\t:\t" << contact << endl;
    }
};

int main()
{
    D obj;

    obj.setterA();
    obj.setterB();
    obj.setterC();
    obj.setterD();

    obj.getterC();
    obj.getterD();
    return 0;
}