#include<iostream>
using namespace std;

class Sample
{
    int x, y;
public:
    Sample(int a, int b);
    friend int sum(Sample s);
};

Sample::Sample(int a, int b)
{
    x = a;
    y = b;
}

int sum(Sample s)
{
    int result;
    result = s.x + s.y;
    return result;
}

int main()
{
    Sample obj(2, 3); // Corrected variable name
    int res = sum(obj);
    cout << "Sum = " << res << endl; // Fixed output formatting
    return 0;
}