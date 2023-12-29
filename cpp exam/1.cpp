#include <iostream>
using namespace std;

int a(int n)
{
    if (n > 1)
        return n * a(n - 1);

    else
        return 1;
}

int main()
{
    int n;
    cout << "Enter any number : ";
    cin >> n;

    int fact = a(n);
    cout << fact;

    return 0;
}