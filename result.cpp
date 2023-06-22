#include<iostream>
using namespace std;
int main()
{
    int m,s,e,t;
    float p;
    cout<<"Enter m: ";
    cin>>m;
    cout<<"Enter s: ";
    cin>>s;
    cout<<"Enter e: ";
    cin>>e;
    cout<<"\nmaths\tsci\teng\ttotal\tper";
    t=m+s+e;
    p=t/3;
    cout<<"\n"<<m<<s<<e<<t<<p;

}