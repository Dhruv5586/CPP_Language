#include<iostream>
using namespace std;
class volume{
    public:
    int vol(int a){
        cout<<"cube volume:"<<a*a*a<<endl;
    }
    int vol(int a,int b,int c)
    {
        cout<<"rectangle volume:"<<a*b*c<<endl;
    }
    double vol(double a,double b)
    {
        cout<<"pyramid volume:"<<(0.33)*(a*a)*b<<endl;
    }
    double vol(double a)
    {
        cout<<"sphere volume:"<<(1.33)*3.14*(a*a*a)<<endl;
    }
     double vol(int a,int b,double c)
    {                                         
        cout<<"elliposid volume:"<<(1.33)*3.14*a*b*c<<endl;
    }
};
int main()
{
    volume x;
    x.vol(10),x.vol(10,20,30),x.vol(5.5,6.5),x.vol(8.8),x.vol(10,20,5.5);
}