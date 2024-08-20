#include <iostream>
using namespace std;
class sample 
    {
        public:
              int x;
};
int main ()
{           sample s;       
       int sample ::*p; 
       s.*p=10;     
       cout<<s.*p;
       
}