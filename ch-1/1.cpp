#include <iostream>
using namespace std;

int main()
{
    int a[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "enter elements [" << i << "] : ";
        cin >> a[i];
    }

    cout << "\n\nEven number from Array\n\n";
    for (int i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)
            cout << a[i] << endl;
    }

    return 0;
}