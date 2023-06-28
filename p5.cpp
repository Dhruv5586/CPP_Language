#include<iostream>
using namespace std;
class book
{
    int bookno;
    char booktitle[20];
    float price,value;
   float total_cost(int x)
    {
        float total;
        total=price*x;
        return total;
    }
    public:
    void input()
    {
        cout<<"enter the bookno:";
        cin>>bookno;
        cout<<"enter the bookyitle:";
        cin>>booktitle;
        cout<<"enter the price:";
        cin>>price;
        
    }
    void purchase()
    {
        int n;
        cout<<"enter the copies:";
        cin>>n;
        float total;
        total=total_cost(n);
        cout<<"your total cost: "<<total;
    }
    };
    int main()
    {
        book r;
        r.input();
        r.purchase();
    }

