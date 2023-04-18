#include<iostream>
using namespace std;

class akshay
{
    private:
        int a;
        int b;
    public:
        akshay(int c,int d)
        {
            a=c;
            b=d;
        }
        ~akshay()
        {
            cout<<"OBJECT SCOPE WAS DONE SO THIS ONE CALLED";
        }
        int calculate()
        {
            return a*b;
        }
};

int main()
{
    akshay ak(10,20);
    cout<<ak.calculate()<<endl;
}