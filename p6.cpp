#include<iostream>
using namespace std;
class report{
    int adno,s;
    char name[20];
    float maths,sci,eng,ba,account,total,marks,ave,averge;

float getavg()
{
    ave=0;
    ave=maths+sci+eng+ba+account;
   averge=ave/5;
}
public:
void readinfo()
{
     cout<<"enetr the admin:";
        cin>>adno;
        cout<<"enter the name:";
        cin>>name;
        cout<<"enter the maths marks:";
        cin>>maths;
        cout<<"enter the sci marks:";
        cin>>sci;
        cout<<"enter the eng marks:";
        cin>>eng;
        cout<<"enter the ba marks:";
        cin>>ba;
        cout<<"enter the account marks:";
        cin>>account;
        getavg();
}
 void display()
    {
        cout<<"admin no:"<<adno<<endl;
         cout<<"name :"<<name<<endl;
         cout<<"marks obtained:"<<endl;
          cout<<"maths marks :"<<maths<<endl;
           cout<<"sci marks no:"<<sci<<endl;
            cout<<"eng marks no:"<<eng<<endl;
            cout<<"ba marks no:"<<ba<<endl;
            cout<<"account marks no:"<<account<<endl;
             cout<<"averge:"<<averge<<endl;
              
}
};
int main()
{
    report d;
    d.readinfo();
    d.display();

}
