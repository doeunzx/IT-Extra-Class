#include <iostream>
using namespace std;

int main()
{
    int month, num;

    cout << "1. Go into information..." << endl;
    cout << "2. Exit..." << endl;
    cout << "Input Your Choice: ";
    cin >> month;

    system("cls");

    	A:
        cout << "=======>Welcome to the information.<=======" << endl;
        cout << "=======>Number 1 to go in system.\n";
        cout << "=======>Number 2 for leave the system :\t";
        cin >> month;
        
		system("cls");
		
        switch (month)
        {
            case 1:
            	
                do {
                	
                	
                    cout << "Input your month born: ";
                    cin >> num;
                    
                    system("cls");
                    if (num == 1) {
                        cout << "Number 1 is January." << endl;
                        cout << "People born in the first month of the year are quite headstrong, and do not bend their will to the opinions of others." << endl;
                    }
                     if (num == 2) {
                        cout << "Number 2 is February." << endl;
                        cout << "February babies are blessed with a wealth of creativity. They like intellectual discussions, but abhor shallow people."<<endl;
                    }
                    if (num == 3) {
                        cout << "Number 3 is March." << endl;
                        cout << "Having the same amount of creativity and imagination, these people are reserved and introspective."<<endl;
                    }
                     if (num == 4) {
                        cout << "Number 4 is April." << endl;
                        cout << "People born in April love to be the cynosure of all eyes." << endl;
                    }
                    if (num == 5) {
                        cout << "Number 5 is May." << endl;
                        cout << "Most talented musicians, actors and performers are born in May." << endl;
                    }
                     if (num == 6) {
                        cout << "Number 6 is June." << endl;
                        cout << "These people are extremely sensitive and lovable." << endl;
                    }
                    if (num == 7) {
                        cout << "Number 7 is July." << endl;
                        cout << "People born in July share most of their traits with the June babies but they have a more cheerful countenance." << endl;
                    }
                    if (num == 8) {
                        cout << "Number 8 is August." << endl;
                        cout << "The ones born in August are given to community service." << endl;
                    }
                     if (num == 9) {
                        cout << "Number 9 is September." << endl;
                        cout << "Intelligent, spiritual and melancholic - these words sum up a person born in September." << endl;
                    }
                     if (num == 10) {
                        cout << "Number 10 is October." << endl;
                        cout << "People born in October are Fortune's children, and have luck on their side at all times." << endl;
                    }
                     if (num == 11) {
                        cout << "Number 11 is November." << endl;
                        cout << "The penultimate month of the year brings empathy, positivity and clairvoyance in the lives of those born in it." << endl;
                    }
                    
                    else if (num == 12)  {
                        cout << "Number 12 is December." << endl;
                        cout << "Persons born in the last month of the year have a lot of luck in finding their perfect partner and the best jobs.\n\n" << endl;
                    }
                   
                    else {
                        cout << "You have entered an invalid month.\n" << endl;
                    }
                } while (num !=12);
                cout<<"Click nummber 1 for go to the system again.\n\n"<<endl;
                
                goto A;
                break;
                
                default :
                	cout<<"You were  leave the sytem...."<<endl;
                	break;
        }

    return 0;
}
