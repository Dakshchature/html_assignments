#include <iostream>
using namespace std;

class item
{
int code;
float price;
public:
void getdata(int a, float b)
{
code = a;
price = b;
}
void show()
{
cout << "price: " << price << endl;
}
};

int main()
{
int size = 2;
item *p = new item[size];
item *d = p;
int x, i;
float y;
for (i = 0; i < size; i++)
{
cout << "Enter item code and price for item " << i + 1 << ": ";
cin >> x >> y;
p->getdata(x, y);
p++;
}
p = d;
for (i = 0; i < size; i++)
{
cout << "Item " << i + 1 << " is: ";
d->show();
d++;
}
return 0;
}