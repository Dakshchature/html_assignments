#include<iostream>
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
int main()
{
Base b;
Derived d;
Base *ptr;
cout<<"ptr points to Base";
ptr=&b;
ptr->display();
//calls Base
ptr->show(); //calls Base
cout<<"ptr points to derived";
ptr=&d;
ptr->display(); //calls Base 
ptr-> show();//classDerived
}