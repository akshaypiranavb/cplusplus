#include<iostream>
using namespace std;

class Room
{
    private:
        int integer;
    public:
        void Display()
        {
            cout<<integer;
        }
};

int main()
{
    Room *p=new Room();

    int *p1=new int(10);
    int *p2=new int[10];
    delete p1;
    delete [] p2;
    
}