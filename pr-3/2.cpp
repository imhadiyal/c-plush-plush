#include <iostream>
using namespace std;

class Number
{
protected:
    int n;

public:
    void Set()
    {
        cout << "Enter any number : ";
        cin >> n;
    }
};

class Square : public Number
{
public:
    void SquareNumber()
    {
        cout << "Square : " << (n * n) << endl;
    }
};

class Cube : public Number
{
public:
    void CubeNumber()
    {
        cout << "Cube : " << (n * n * n) << endl;
    }
};

int main()
{
    Square s1;
    Cube c2;

    s1.Set();
    s1.SquareNumber();
    cout << " -----:  Cube:-----  " << endl;
    c2.Set();
    c2.CubeNumber();
}
