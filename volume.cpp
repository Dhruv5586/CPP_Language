#include<iostream>
using namespace std;
class volume
{
    public:
    volume(int a,int b,int c)
    {
        cout<<"rectangle volume:"<<a*b*c<<endl;
    }
    volume(int a,double b,int c)
    {
        cout<<"rectangular pyramid volume:"<<(1.33)*3.14*a*b*c<<endl;
    }
    volume(int a,int b,double c)
    {
        cout<<"elliposid volume:"<<(1.33)*3.14*a*b*c<<endl;
    }
    volume(int a)
    {
        cout<<"cube volume:"<<a*a*a<<endl;
    }
    volume(double a)
    {
        cout<<"sphere volume:"<<(1.33)*3.14*(a*a*a)<<endl;
    }
    volume(double a,double b)
    {
        cout<<"  pyramid volume:"<<(0.33)*(a*a)*b<<endl;
    }
};
int main()
{
    volume a(4,3,5),b(5,3.4,5),c(3,6,5.5),d(3),e(3.5),f(3,4),g(3.4,5.6),h(3,4.5),i(5.6,5);
}