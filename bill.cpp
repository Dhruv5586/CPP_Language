#include<iostream>
using namespace std;
int main()
{
    int unit;
    float bill,sur_charge;
    cout<<"Enter the unit: ";
    cin>>unit;
   if(unit<=100)
   {
    bill=50+unit*0.6;
   }
   else if(unit<=300)
   {
    bill=50+60+(unit-100)*0.8;
   }
   else
   {
    bill=50+60+160+(unit-300)*0.9;
   }
   cout<<"your bill amt is:"<<bill;
   if(bill<=300)
   {
    sur_charge=bill*0.15;
    bill=bill+sur_charge;
    cout<<"\n your sur_charge is:"<<sur_charge;
    cout<<"\n your final bill amt is:"<<bill;
   }
}