//Brandan McGee
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
        vector<string> list; // vector dataType
        int numItems = 0;
        char input;
        string newItem;
        


        do
        {
                cout << "\n==GROCERY LIST MANAGER==";
                cout << "\nEnter your choice: ";
                cout << "\n (A)dd an item";
                if (list.size() >  0)
                {
                    cout << "\n (D)elete last item";
                }
                cout << "\n (Q)uit";
                cout << "\nYour choice (A/Q): ";
                cin >> input;
                if (input == 'A' || input == 'a')
                {
                        cout << "What is the item?" << endl;
                        cin >> newItem;
                        list.push_back(newItem);
                }
                if (input == 'D' || input == 'd')
                {
                    newItem = list.back();
                    list.pop_back();
                    cout << newItem  << " was deleted from the list.\n";
                }
                
        } while (input != 'Q'  && input != 'q');
        if (list.size() > 0)
        {
            cout << "==ITEMS TO BUY==" << endl;
            for ( int i = 0; i < list.size(); i++)
            {
                cout << i+1 << " " << list[i] << endl;
            }
        }
        else
        {
            cout << "No items to buy!" << endl;
        } 
        return 0;
}
