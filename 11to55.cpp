#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=11;i<=51;i+=5)
    {
        for(j=11;j<=51;j+=10,i+=1)
        {
            cout<<" "<<i;
        }
        cout<<"\n";
    }
}