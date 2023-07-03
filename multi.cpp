#include<iostream>
using namespace std;
class box{
int l,w,h;
public:
void setdata(int a,int b,int c)
{
    l=a;
    w=b;
    h=c;
}
int getdata()
{
    return l*w*h;
}
box operator*(box&n){
box t;
t.l=l*n.l;
t.w=w*n.w;
t.h=h*n.h;
return t;
}
};
int main()
{
    box b,a,c;
    b.setdata(5,5,5);
    cout<<"box b multi:"<<b.getdata()<<endl;
    a.setdata(8,8,8);
    cout<<"box a multi:"<<a.getdata()<<endl;
    c=a*b;
    cout<<"box c multi:"<<c.getdata()<<endl;

}