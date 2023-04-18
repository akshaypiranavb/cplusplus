#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> akshay{12,3,4,5,6,4,2,1,2};
    vector <int> akshay1={12,3,4,5,6,4,2,1,2};
    vector <int> akshay2(akshay1);
    vector <int> akshay3(5,6);
    for(auto ak : akshay3)
        cout<<ak<<" ";
}