#include<iostream>
using namespace std;
class book
{
    int bookno;
    char booktitle[20];
    float price;
    float n;
    total_cost();
    {
        return (price*n);
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
        cout<<"enter the n:";
        cin>>n;
        total_cost();
    }
    void purchase()
    {
        cout<<" enter the no:"<<bookno<<endl;
         cout<<"enter the title :"<<booktitle<<endl;
           cout<<"enter the price:"<<price<<endl;
           cout<<" enetr the n:"<<n<<endl;
    }
    };
    int main()
    {
        book r;
        r.input();
        r.purchase();
    }

