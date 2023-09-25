#include <iostream>
using namespace std;
int main()
{
    int num ,option;
    cout << "1. Check the number: " << endl;
    cout << "2. Exit " << endl;

    do {
        cout<< "Option:"; cin >> option;
        
        switch (option) {

            cout << "Input an interger number "; cin >> num;
            case 1: 
                if (num > 0)
                    cout << "You Input possitive number..." << num << endl;
                else if (num < 0)
                    cout << "You Input Negative Number... " << num << endl;
                else
                    cout << "You input Zero number..." << endl;
                break;
            default: 
                cout << "Error..." << endl;
                break;
        }
    } while (option != 2);

   

    return 0;
}
