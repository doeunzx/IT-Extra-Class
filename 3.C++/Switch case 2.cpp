
#include<iostream>
using namespace std;

int main() {
    int option, withdrawoption;
    float balance = 100.00;
    double depositAmount;


    do {
        cout << "Enter Your Choice: ";
        cin >> option;
        
        switch (option) {
            case 1:
                cout << "Withdraw Money" << endl;
                cout << "1. $20" << endl;
                cout << "2. $50" << endl;
                cout << "3. $100" << endl;
                cout << "Enter Amount to withdraw: ";
                cin >> withdrawoption;
                
                switch (withdrawoption){
                    case 1:
                        cout << "Dispensing $20" << endl;
                        balance = balance - 20;
                        break;
                    case 2:
                        cout << "Dispensing $50" << endl;
                        balance = balance - 50;
                        break;
                    case 3:
                        cout << "Dispensing $100" << endl;
                        balance = balance - 100;
                        break;
                    default:
                        cout << "Invalid withdraw option" << endl;
                        break;
                }
                break;
                
            case 2:
                cout << "Deposit Money" << endl;
                cout << "Enter amount to deposit: $";
                cin >> depositAmount;
                balance = depositAmount + balance;
                cout << "Depositing $" << depositAmount << endl;
                break;
                
            case 3:
                cout << "Check Balance: $" << balance << endl;
                break;
                
            case 4:
                cout << "Quitting ATM..." << endl;
                break;
                
            default:
                cout << "Invalid Option..." << endl;
                break;
        }
    } while (option != 4);

    return 0;
}
