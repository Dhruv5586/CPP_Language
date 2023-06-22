#include<iostream>
using namespace std;
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
        cout<<"\nenter a["<<i<<"]: "<<i;
        cin>>a[i];
    
    for(i=0;i<5;i++){
        cout<<"\na["<<a[i]<<"]: "<<i;
    }

}