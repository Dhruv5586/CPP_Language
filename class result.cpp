#include<iostream>
using namespace std;
class result{
    private:
    int maths,sci,eng,total;
    float per;
    public:
    void setdata()
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
        per=(float)total/3;
    }
    void display()
    {
        cout<<"maths\tsci\teng\ttotal\tper\n";
        cout<<maths<<"\t"<<sci<<"\t"<<eng<<"\t"<<total<<"\t"<<per<<"\t";
    }
};

int main()
{
    result z;
    z.setdata();
    z.cal();
    z.display();
}