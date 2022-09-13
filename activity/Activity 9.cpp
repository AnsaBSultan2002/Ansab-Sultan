#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	string str;
	do{
		cout<<"enter text:";
		getline(cin,str);
		cout<<"you entered :"<<str<<'\n';
		
	}
	while(str!="goodbye");

}
