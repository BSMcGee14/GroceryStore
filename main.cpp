//Brandan McGee
#include<iostream>
#include<string>
using namespace std;

int main()
{
        string list[5]; //array of 5 strings
        int numItems = 0;
        char input;
        string newItem;

        do
        {
                cout << "\n==GROCERY LIST MANAGER==";
                cout << "\nEnter your choice: ";
                cout << "\n (A)dd an item";
                cout << "\n (Q)uit";
                cout << "\nYour choice (A/Q): ";
                cin >> input;
                if (input == 'A' || input == 'a')
                {
                        cout << "What is the item?" << endl;
                        cin >> newItem;
                        if (numItems > 4)
                        {
                          cout << "You'll need a bigger list!" << endl;
                        }
                        else
                        {
                          list[numItems] = newItem;
                          numItems++;
                        }
                }
        } while (input != 'Q'  && input != 'q');
        cout << "==ITEMS TO BUY==";
        cout << "\n1 " << list[0];
        cout << "\n2 " << list[1];
        cout << "\n3 " << list[2];
        cout << "\n4 " << list[3];
        cout << "\n5 " << list[4] << endl;

        return 0;
}
