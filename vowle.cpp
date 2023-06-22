#include<iostream>
using namespace std;
int main()
{
    char ch,law,upr;
    cout<<"enter your ch:";
    cin>>ch;
    law=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    upr=(ch==ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    if(law||upr)
    {
        cout<<"this is vowel:"<<ch;
    }
    else
    {
        cout<<"this is consotant:"<<ch;
    }
}
