#include<iostream>
#include<string>
using namespace std;

int main(){
    string name,movie,days,etc;
    int ID,gear;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! "<< name << " that is a really cool name." << endl;
    cout << "Fahsai: I think you are Engineering student. What is your student ID?" << endl;
    cout << name << ": ";
    cin >> ID;
    cin.ignore();
    gear = (ID/10000000)-12;
    cout << "Fahsai: I think you may be GEAR " << gear << ".  I have a free movie tickets for you." << endl;
    cout << "Fahsai: Let's go to cinema together!!!" << endl; 
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << name << ": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << name << ": ";
    getline(cin,days);
    cout << "Fahsai: " << days <<"....that is OK!!! I'm looking forward to watch " << movie << " with you." << endl;
    cout << name << ": ";
    getline(cin,etc);
    cout << "Fahsai: 555+ see you " << days << " Bye Bye \\(^ ^)/" << endl;

}