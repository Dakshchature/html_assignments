#include<iostream.h>
using namespace std;
class Base
{
public:
void display()
{
cout<<"Display Base";
}
virtual void show()
{
cout<<"Show Base";
}
};
class Derived: public Base
{
public:
void display()
{
cout<<"Display Derived";
}
void show()
{
cout<<"show derived";
}
};
void main()
{
    Base b;
    Derived d;
    Base *ptr;
    cout<<"ptr points to Base";
    ptr=&b;
    ptr->display();
    ptr->show();
    cout<<"ptr points to Derived";
    ptr=&d;
    ptr->display();
    ptr->show();
}