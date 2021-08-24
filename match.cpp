#include<iostream>
#include<string>
using namespace std;

int main(){
	string str, n1, n2;
//	int num1, num2;
	
	cout<<"Enter a number to find find the number of matchsticks required to represent it. ";
	cin>>str;
	
	n1 = str[0];
	n2 = str[1];
	
	int num1 = stoi(n1);
	int num2 = stoi(n2);
	
	cout<<num1 + num2;
	
	return 0;
}
