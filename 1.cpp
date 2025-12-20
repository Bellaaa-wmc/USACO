#include <iostream>
using namespace std;
int main()
{
   auto add = [](int a, int b)
   {
    return a+b;
};
int c= add(3, 5);
cout<<c<<endl;
}
