//Dialog of the first example is given below.
#include<iostream>
#include<string>
using namespace std;
int main()
{
string name,movie,g,day,porn;
int a,b,id;
cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
cout << "?????:My name is ";
getline(cin,name) ;
//?????: Luke Skywalker 
cout << "Fahsai: Wow!!! Luke Skywalker that is a really cool name.\n";
cout << "Fahsai: I think you are Engineering student. What is your student ID?\n";
cout << name << ": ";
cin >> id;
//g = id[0]+id[1];
b = id/10000000-12;
cout << "Fahsai: I think you may be GEAR" << b << ".  I have a free movie tickets for you.\n";
cout << "Fahsai: Let's go to cinema together!!!\n";
cout <<"Fahsai: What movie do you want to watch?\n";
cout << name <<":";
cin.ignore();
getline(cin,movie);//Luke Skywalker: Star Wars VII
cout << "Fahsai: So....which day are you free to go with me?\n";
cout << name << ":";//Luke Skywalker: Next Monday
getline(cin,day);

cout <<"Fahsai: "<< day <<"....that is OK!!! I'm looking forward to watch" << movie << " with you.\n";
cout << name<<":" << porn;//Luke Skywalker: May the Force be with you krub
getline(cin,porn);
cout << name << ": 555+ see you Next Monday. Bye Bye \\(^ ^)/ \n";//Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/ 

}