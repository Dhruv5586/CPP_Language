#include<iostream>
using namespace std;
class base
{
    protected:
    int n;
    public:
    void set()
    {
    cout<<" enter the n:";
    cin>>n;
}
};
class d1 : public base
{
    public:
    void get()
{
    cout<<"squre:"<<n*n<<endl;
}
};
class d2 : public base
{
   public:
   void out()
   {
    cout<<"cube:"<<n*n*n<<endl;
   }
};
int main()
{
    d1 a;
    a.set();
    a.get();
    d2 b;
    b.set();
    b.out();
}
