#include <iostream>
using namespace std;

class Message
{
private:
    string first_name = '\0';
    string Full_Name;

public:
    Message(string name)
    {
        this->first_name = name;
    }

    void Print()
    {
        cout << this->first_name << endl;
    }

    // Logic
    void Print(string sec)
    {
        this->Full_Name = this->first_name + " " + sec;
        cout << this->Full_Name;
    }
};

int main()
{
    string name, surname;
    cout << "Enter first name : ";
    cin >> name;

    Message obj(name);

    obj.Print();

    cout << "Enter your surname : ";
    cin >> surname;

    obj.Print(surname);

    return 0;
}