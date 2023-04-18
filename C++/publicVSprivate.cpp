#include<iostream>
using namespace std;

class akshay
{
    private://not mandatory if next access specifier came it automatically changes to it
        int length;
        int breadth;
    public:
        int setlengthbreadth(int l,int b)
        {
            length=l;
            breadth=b;

        }
        int getlengthbreadth()
        {
            cout<<"LENGTH IS : "<<length << endl << "BREADTH IS : "<< breadth;
        }
        int calculate()
        {
            return length*breadth;
        }
};

int main()
{
    akshay ak;
    ak.setlengthbreadth(10,20);
    ak.getlengthbreadth();
    cout<<"\nTHE VALUE IS : "<<ak.calculate();
    return 0;
}