#include<iostream>
using namespace std;
class fact
{
    protected:
    int n;
    public:
    void set()
    {
       cout<<"enter the value:";
       cin>>n;
    }
};
class derived : public fact
{
    public:
    void get()
    {
        int i,x=1;
        for(i=1;i<=n;i++){
        x=x*i;
        }
        cout<<""<<x;
    }
};
int main()
{
    derived d;
    d.set();
    d.get();
}
