#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> akshay{1,2,3,4,5,6,7,8};
    auto ak=akshay.begin();//iterators used for cointainers like vector,array but exceptional like string
    while(ak!=akshay.end())
    {
        cout<<*ak<<" ";//here it is similar to the pointer but here we dont used & like c
        ak++;
    }
}