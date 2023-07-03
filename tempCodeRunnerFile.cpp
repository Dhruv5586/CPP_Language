#include<iostream>
using namespace std;
class test{
public:
void setdata(int a)
{
    cout<<"cube volume a:";
    cin>>a;
}
};
int main()
{
    test t;
    t.setdata();
    cout <<"volume:"<<a*a*a<<endl;
}