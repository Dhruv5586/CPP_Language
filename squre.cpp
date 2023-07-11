#include<iostream>
using namespace std;
class squre
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
class derived : public squre
{
    public:
    void get()
    {
        int i;
        for(i=1;i<=n;i++){
        cout<<""<<i*i<<endl;
        }
    }
};
int main()
{
    derived d;
    d.set();
    d.get();
}

