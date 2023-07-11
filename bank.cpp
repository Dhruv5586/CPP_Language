#include<iostream>
using namespace std;
class bank
{
    int account,amt;
    double balance;
    char name[30];
     public:
    void setdata()
    {
        cout<<"enter the name:";
        cin>>name;
        cout<<"enter the account no:";
        cin>>account;
        cout<<"enter your current balance:";
        cin>>balance;  
    }
    void showdata()
    {
        cout<<"enter the account no:"<<account<<endl;
        cout<<"enter the name:"<<name<<endl;
        cout<<"enter your current balance:"<<balance<<endl;
    }
    void deposite()
    {
        cout<<"enter your depsoite amount:";
        cin>>amt;
        balance=balance+amt;
        
    }
    void withdraw()
    {
        cout<<"enter your withdrawal amount:";
        cin>>amt;
        if(balance>=amt)
        {
            balance=balance-amt;
        }
        else
        {
            cout<<"less balance..";
        }
        cout<<"\nyour balance is:"<<balance<<endl;
    }
};
int main()
{
    bank x;
    int ch;
    do {
    cout<<"\n1.setdata\n2.showdata\n3.deposite\n4.withdrawal\n5.exit";
    cout<<"\nplease input your choice:";
    cin>>ch;
    switch (ch) 
    {
       case 1:
       cout<<"1.setdata\n";
       x.setdata();
          break;
       case 2:
       cout<<"2.account details\n";
       x.showdata();
         break;
       case 3:
       cout<<"3.deposite\n";
       x.deposite();
         break;
       case 4:
       cout<<"4.withdrawal\n";
       x.withdraw();
        break;
       case 5:
       cout<<"\nThank you..";
       cout<<"\nvisit again..";
        break;
        default:
        cout<<"\nsorry wrong option";
        break;
    }    
    }
    while (ch!=5);    
}