#include<iostream>

using namespace std;

template <class T>//class num kudukalam illana Typenamenum kudukalam
T method(T a,T b)
{
    return a*b;
}

int main()
{
    cout<<method(3.5,4.8);
}