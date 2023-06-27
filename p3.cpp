#include<iostream>
using namespace std;
class test{
    int testcode;
    char description[30];
    int nocandidate,center;
   float calcenter()
    {
        return (nocandidate/100+1);
    }
    public:
    void schedule()
    {
        cout<<"enter the testcode:";
        cin>>testcode;
        cout<<"enter the description:";
        cin>>description;
        cout<<"enter the nocandidate:";
        cin>>nocandidate;
        center=calcenter();
    }
    void disptest()
    {
         cout<<" enter the testcode:"<<testcode<<endl;
         cout<<"enter the description :"<<description<<endl;
           cout<<"enter the nocandidateu:"<<nocandidate<<endl;
           cout<<"center:"<<center<<endl;
             
    }  
};
int main()
{
    test x;
    x.schedule();
    x.disptest();
}