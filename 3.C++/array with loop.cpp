#include <iostream>
#include <string>
using namespace std;
int main(){
    
    cout<<"This results for array..."<<endl;
    string colors[10]= {"black","blue","red","green","yellow","pink","purple","gray","red", "white"};
    cout<<colors[0]<<" "<<colors[1]<<" "<<colors[2]<<" "<<colors[3]<<" "<<colors[4]<<" "<<colors[5]<<" "<<colors[6]<<" "<<colors[7]
    <<" "<<colors[8]<<" "<<colors[9];
    cout<<endl;
    cout<<"This is for loops..."<<endl;
    for ( int i = 0; i < 10; i++)
    {
        cout<<colors[i]<<" ";
    }
    cout<<endl;
    cout<<"This results for-each loop..."<<endl;
    for( string m : colors){
     cout<<m<<" ";
}
    cout<<endl;
    cout<<"This results for do while loops..."<<endl;
    int e = 0; 
    do{ 
    cout << colors[e] << " "; 
    e++;
    }while( e<10);

    return 0;
}
