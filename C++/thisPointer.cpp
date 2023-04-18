#include<iostream>
using namespace std;

class akshay
{
    private :
        int ak;
    public:
        void setValue(int ak)
        {
           this-> ak=ak;
        }
        int getValue()
        {
            return ak;
        }
};

int main()
{
    akshay a;
    a.setValue(10);
    cout<<a.getValue();

}