#include<iostream>
using namespace std;
int main()
{
    int n,t=1;
    float i;
    cout<<"enter the num:";
    cin>>n;
    for(i=0.5;i<=n;i++)
    {
        cout<<i++<<", "<<t++<<", ";
        t+=3;
    }
}
