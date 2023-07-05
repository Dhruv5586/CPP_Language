#include<iostream>
using namespace std;
class Test {
   int x, y;
public:
   void setdata() {
       cout << "Enter x number:";
       cin >>x;
       cout << "Enter y number:";
       cin >>y;
   }
   friend void max(Test t);
};
void max(Test t) {
   if (t.x > t.y) 
      {
       cout << "Largest is x:" << t.x;
   } 
   else {
       cout << "Largest is y:" << t.y;
   }
}
int main() {
   Test t;
   t.setdata();
   max(t);
}
 