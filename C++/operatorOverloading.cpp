#include<iostream>
using namespace std;

class Increment
{
    private:
        int integer;
    public:
        Increment(int integerValue)
        {
            integer=integerValue;
        }

        void operator++()
        {
            integer++;
        }

        void operator++(int)
        {
            ++integer;
        }
        int Display()
        {
            return integer;
        }
};
int main()
{
    Increment in(12);
    ++in;
    in++;
    cout<<in.Display();
}