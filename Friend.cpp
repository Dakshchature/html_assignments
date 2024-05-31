#include<iostream>
using namespace std:
class sample
{
int x,y;
public;
sample(int a, int b);
friend int sum(sample s);
};
sample::sample(int a, int b)
{
x=a;y=b;
}
int sum(sample s)
{
int sum;
sum=s.x+s.y;
return 0;
};
void main()
{
sample obj(2,3);
int res=sum(obj);
cout<<"sum="<<res<<endl;
}
