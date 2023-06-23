#include<iostream>
using namespace std;
int main()
{
    int a,b,ch;

cout<<"enter a and b:";
cin>>a>>b;
cout<<"1.addition:";
cout<<"\n2.substaction:";
cout<<"\n3.multiplication:";
cout<<"\n4.division:";
cout<<"\n\n enter the your choice:";
cin>>ch;
switch(ch)
{
    case 1:
    cout<<"addition a and b:"<<a+b;
    break;
     case 2:
    cout<<"substaction a and b:"<<a-b;
    break;
     case 3:
    cout<<"multiplication a and b:"<<a*b;
    break;
     case 4:
    cout<<"division a and b:"<<a/b;
    break;
    default:
    cout<<"wrong input";
    break;
}    
}
