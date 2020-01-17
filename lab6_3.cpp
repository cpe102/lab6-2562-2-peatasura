#include<iostream>
using namespace std;

char before(char x){
	
//Write your function definition here
	char yoy;
	if (x=='A')
	{
		cout << 'Z';
	}

	else if(int(x)>65&&int(x)<=90)
	{
		yoy=x-1;
		return yoy;
	}
	else
	{
		return '0';
	}
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
