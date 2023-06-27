#include<iostream>
using namespace std;
class batsman{
    int bcode;
    char bname[20];
    int innings,notout,runs;
    float batavg;
    float calcavg(){
        
        return runs/(innings-notout);
    }
    public:
    void readdata()
    {
        cout<<"enetr num:";
        cin>>bcode;
        cout<<"enter the name:";
        cin>>bname;
        cout<<"enter the innings:";
        cin>>innings;
        cout<<"notout:";
        cin>>notout;
        cout<<"player innings runs:";
        cin>>runs;
        batavg=calcavg();
    }
    void displaydata()
    {
        cout<<" num:"<<bcode<<endl;
         cout<<"name :"<<bname<<endl;
          cout<<" innings :"<< innings<<endl;
           cout<<"notout:"<<notout<<endl;
             cout<<"innings runs:"<<runs<<endl;
             cout<<"batavg:"<<batavg<<endl;

              
    }
};
int main()
{
    batsman p;
    p.readdata();
    p.displaydata();
}