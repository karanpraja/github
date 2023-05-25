#include<iostream>
using namespace std;
int main()
{//to find out whether the given character is uppper,lower or integer
char n;
cout<<"enter a character"<<endl;
cin>>n;
if(n>=65&&n<=90)
cout<<"the given character is an uppercase letter";
if(n>=97&&n<=122)
cout<<"input character is a lower case letter";
if(n>=48&&n<=57)
cout<<"input character is an integer";
}
