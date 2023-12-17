#include <iostream>
#include <string.h>
using namespace std;
class Data
{
public:
    string name;
    int age;
};

int main()
{

    Data d1;

    d1.name = "Person 1";
    d1.age = 25;

    cout << "Name: " << d1.name << ", Age: " << d1.age << endl;

    d1.name = "Person 2";
    d1.age = 30;

    cout << "updated Name: " << d1.name << " , updated Age: " << d1.age << endl;

    return 0;
}
