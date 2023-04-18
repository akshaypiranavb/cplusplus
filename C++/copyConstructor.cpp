#include<iostream>
using namespace std;

class Display
{
    private:
        int integer;
    public:
        Display(int integer)
        {
            this-> integer=integer;
            cout<<integer<<endl;
        }
        Display(Display &c)
        {
            this->integer=c.integer;
            cout<<integer;
        }
};

int main()
{
    Display d(10);
    Display d1=d;
    
}