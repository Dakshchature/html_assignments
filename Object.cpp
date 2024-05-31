#include<iostream>
using namespace std;
class Marks
{
public:
//constructor

Marks() {

cout << "Inside Constructor"<<endl;
cout << "C++ Object created"<<endl;
}
~Marks() {
  cout << "Inside Constructor"<<endl;
  cout << "C++ Object created"<<endl;  
}
};
int main()
{
    Marks m1;
    Marks m2;
    return 0;
}