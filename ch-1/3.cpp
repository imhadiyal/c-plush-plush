#include <iostream>
using namespace std;
int main()
{
    char name[50];
    cout << ("enter your name:");
    cin >> name;
    for (int i = 0; i < 7; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] -= 32;
        }
        else
        {
            name[i] += 32;
        }
    }
    cout << ("Name:" , name);

    return 0;
}