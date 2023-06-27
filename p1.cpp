#include<iostream>
using namespace std;
class student{
    private:
    int admno;
    char sname[20];
    float maths,sci,eng,total;
    float ctotal(){
        return eng+maths+sci;
    }

    public:
    void Takedata()
    {
        cout<<"enetr the admin:";
        cin>>admno;
        cout<<"enter the name:";
        cin>>sname;
        cout<<"enter the maths marks:";
        cin>>maths;
        cout<<"enter the sci marks:";
        cin>>sci;
        cout<<"enter the eng marks:";
        cin>>eng;
        total=ctotal();
    }
    
    void display()
    {
        cout<<"admin no:"<<admno<<endl;
         cout<<"name :"<<sname<<endl;
          cout<<"maths marks :"<<maths<<endl;
           cout<<"sci marks no:"<<sci<<endl;
            cout<<"eng marks no:"<<eng<<endl;
             cout<<"total:"<<total<<endl;
              
}
};


int main()
{
    student s;
    s.Takedata();
    s.display();
}