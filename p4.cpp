#include<iostream>
using namespace std;
class flight{
    int flight;
    char destination[30];
    float distance;
    float fuel;
    float calfuel()
    {
        if(distance<=1000)
        {
            fuel=500;
        }
        else if(distance<1000 && distance<=2000)
        {
            fuel=1100;
        }
        else
        {
            fuel=2200;
        }
    }
    public:
    void feedinfo()
    {
        cout<<"enetr the flight num:";
        cin>>flight;
        cout<<"enetr the destination:";
        cin>>destination;
        cout<<"enetr the distance:";
        cin>>distance;
        calfuel();

    }
    void showinfo()
    {
        cout<<" enter the  flight num:"<< flight<<endl;
         cout<<"enter the destination :"<<destination<<endl;
           cout<<"enter the distance:"<<distance<<endl;
           cout<<"fuel:"<<fuel<<endl;
    }
};
int main()
{
    flight a;
    a.feedinfo();
    a.showinfo();
}
