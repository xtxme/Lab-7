#include <iostream>
#include <string>
using namespace std;

int main(){
    int gear,student_ID,gearnow;
    string name,movie,Date,Conver;
    
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name. \n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID? \n";
    cout << name << ": ";
    cin >> student_ID;
    gear = student_ID/10000000;
    gearnow = gear - 12;
    cin.ignore();
    

    cout << "Fahsai: I think you may be GEAR " <<gearnow<< ". I have a free movie ticket for you. \n";
    cout << "Fahsai: Let's go to the cinema together!!! \n";
    cout << "Fahsai: What movie do you want to watch? \n";
    cout << name << ": ";
    getline (cin, movie);
    cout << "Fahsai: So....which day are you free to go with me? \n";
    cout << name << ": ";
    getline(cin, Date);
    cout << "Fahsai: "<< Date << "....that is OK!!! I'm looking forward to watching " << movie << " with you. \n";
    cout << name << ": ";
    getline(cin, Conver);
    cout << "Fahsai: 555+ see you " << Date << ". Bye Bye \\(^ ^)/";

    return 0;
    
}