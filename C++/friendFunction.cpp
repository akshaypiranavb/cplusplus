#include<iostream>
using namespace std;

class akshay
{
    private:
        int a;
    public:
        friend void setValue(akshay &ak,int value);
        int getValue()
        {
            return a;
        }
};
void setValue(akshay &ak,int value)
{
    ak.a=value;
}
int main()
{
    akshay ak;
    setValue(ak,10);
    cout<<ak.getValue();
}