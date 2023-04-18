#include<iostream>
using namespace std;

void callbyReference(int &);

int main()
{
    int a=5;
    callbyReference(a);
    cout<<a;
}

void callbyReference(int &a)
{
    a=a*a;
}