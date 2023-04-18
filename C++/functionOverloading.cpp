#include<iostream>
using namespace std;

class akshay
{
    public:
        int abslu(int a)
        {
            return a<0?-a:a;
        }
        double abslu(double a)
        {
            return a<0?-a:a;
        }
};

int main()
{
    akshay ak;
    cout<<ak.abslu(9)<<endl;
    cout<<ak.abslu(-9.8);
    return 0;
}