#include<iostream>
using namespace std;
class result
{
int maths,sci,eng,total;
double per;
public:
void set()
{
    cout<<"enter the maths marks:";
    cin>>maths;
    cout<<"enter the sci marks:";
    cin>>sci;
    cout<<"enter the eng marks:";
    cin>>eng;
}
void cal()
{
    total=maths+sci+eng;
    per=(double)total/3;
}

     void display()
 {
    cout<<maths<<"\t"<<sci<<"\t"<<eng<<"\t"<<total<<"\t"<<per<<"\t";
 }         
};
int main(){
int i;
result a[5];
for(i=0;i<2;i++)
{
    cout<<"no."<<i+1<<endl;
    a[i].set();

}
for(i=0;i<2;i++)
{
    a[i].cal();
    
}
 cout<<"maths\tsci\teng\ttotal\tper";
for(i=0;i<2;i++)
{
    cout<<"\n";
    a[i].display();
    
}
}

