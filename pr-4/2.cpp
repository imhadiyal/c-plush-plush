
#include <iostream>
using namespace std;

class A
{
public:
    int km, m;
};

class B : public A
{
public:
    void set()
    {
        cout << "enter kilometer : ";
        cin >> km;
        cout << "enter meter : ";
        cin >> m;
    }

    B operator+(B b2)
    {
        B tmp;
        tmp.km = 0;
        tmp.m = 0;

        tmp.km = this->km + b2.km;
        tmp.m = this->m + b2.m;

        while (tmp.m >= 1000)
        {
            tmp.m -= 1000;
            tmp.km++;
        }

        return tmp;
    }
};

int main()
{
    B b1, b2, b3;

    cout << "Input-1" << endl;
    b1.set();
    cout << "Input-2" << endl;
    b2.set();

    b3 = b1 + b2;
    cout << endl
         << "Total kilometer: " << b3.km << endl
         << "Total meter: " << b3.m;

    return 0;
}