#include<iostream>
using namespace std;
class test{
    private:
    int maths,sci,eng,total;
    float per;
    public:
    test()
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
    test z;
    z.cal();
    z.display();
}