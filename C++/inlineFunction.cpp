#include<iostream>
using namespace std;

int square(int a);

int main()
{
    cout<< square(5);
}
inline int square(int a)
{
    return a*a;
}
