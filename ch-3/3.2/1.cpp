#include <iostream>
#include <string.h>
using namespace std;
class Hotels
{
public:
    int id;
    string name;
    int type;
    int rating;
    string location;
    int releaseyear;
    int numberOfstaff;
    int roomQuantity;

    void sethotel()
    {

        cout << "enter your id: ";
        cin >> this->id;
        fflush(stdin);
        cout << "enter your name: ";
        cin >> this->name;
        fflush(stdin);
        cout << "1.hotel" << endl;
        cout << "2.motel" << endl;
        cout << "Enter your choice:";
        cin >> this->type;
        cout << "1. 1Star" << endl;
        cout << "2. 2Star" << endl;
        cout << "3. 3Star" << endl;
        cout << "4. 4Star" << endl;
        cout << "5. 5Star" << endl;
        cout << "6. 6Star" << endl;
        cout << "7. 7Star" << endl;
        cout << "Enter your choice: ";
        cin >> this->rating;
        cout << "enter a location: ";
        cin >> location;
        cout << "enter a Releaseyear: ";
        cin >> releaseyear;
        cout << "enter a numberOfstaf: ";
        cin >> numberOfstaff;
        cout << "enter a roomQuantity: ";
        cin >> roomQuantity;
    }
    void gethotel()
    {
        cout << endl
             << "hotal ID: " << id << endl;
        cout << "hotal Name: " << name << endl;
        switch (this->type)
        {
        case 1:
            cout << "hotal\t";
            break;
        case 2:
            cout << "motel\t";
            break;
        }
        switch (this->rating)
        {
        case 1:
            cout << "1Star";
            break;
        case 2:
            cout << "2Star";
            break;
        case 3:
            cout << "3Star";
            break;
        case 4:
            cout << "4Star";
            break;
        case 5:
            cout << "5Star";
            break;
        case 6:
            cout << "6Star";
            break;
        case 7:
            cout << "7Star";
            break;
        }
        cout << endl
             << "hotal location: " << location << endl;
        cout << "hotal releaseyear: " << releaseyear << endl;
        cout << "hotal numberOfstaff: " << numberOfstaff << endl;
        cout << "hotal roomQuantity: " << roomQuantity << endl;
    }
};
int main()
{
    Hotels h1, h2, h3;
    cout << endl
         << "---------------: first hotel  :---------------" << endl;
    h1.sethotel();
    cout << endl
         << "---------------: second hotel :---------------" << endl;
    h2.sethotel();
    cout << endl
         << "---------------: first hotel Result :---------------" << endl;
    h1.gethotel();
    cout << endl
         << "---------------: second hotel Result :---------------" << endl;
    h2.gethotel();
    return 0;
}
