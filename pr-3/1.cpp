#include <iostream>
using namespace std;

class Shape
{
protected:
    double width;
    double height;

public:
    Shape()
    {
        cout << "enter width : ";
        cin >> width;
        cout << "enter height : ";
        cin >> height;
    }
};

class Triangle : public Shape
{
public:
    void TriaArea()
    {
        cout << "area of triangle : " << 1 / 2 * width * height;
    }
};

class Rectangle : public Shape
{
public:
    void RectArea()
    {
        cout << endl
             << "area of triangle : " << width * height << endl;
    }
};

int main()
{
    Triangle t1;
    Rectangle r2;

    t1.TriaArea();
    r2.RectArea();
    return 0;
}