#include <iostream>
#include <string.h>
using namespace std;
class Railway
{
private:
    long int Train_number;
    
    char Train_Name[50];
    char Source[20];
    char Destination[20];
    char train_time[20];
    int choice;

public:
    void Setter()
    {
        cout <<":Enter data:" << endl
             << "Enter train Source : ";
        gets(this->Source);
        cout << "Enter train Destination : ";
        gets(this->Destination);
        cout << "Enter train time : ";
        gets(this->train_time);
    }

    void Display_Records()
    {
        cout << "Train according your time" << endl;
    lable:Rajdhani Express
        cout << endl
             << "No\tTrain" << endl
             << "--\t-----" << endl
             << "1.\t\tVande Bharat"" << endl
             << "2.\tRajdhani Express" << endl
             << "3.\tTejas Express" << endl
             << "Enter your choice.";
        cin >> this->choice;

        switch (this->choice)
        {
        case 1:
            cout << "Vande Bharat !!" << endl
                 << "Enter number of tickets that you wont to purchese : ";
            cin >> this->choice;

            if (this->choice < 3)
            {
                cout << "You can't buy " << choice << "tickets. You have to buy 3 or more tickets." << endl;

                goto lable;
            }
        }
    }
};

int main()
{
    Railway r1;
    r1.Setter();
    r1.Display_Records();
}
