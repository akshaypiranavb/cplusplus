#include<iostream>
using namespace std;

class Room
{
    private:
        static int totalCount;
        int length;
        int breadth;
    public:
        Room(int len,int bread)
        {
            length=len;
            breadth=bread;
            totalCount++;
        }
        static int totalCountFunction()
        {
            return totalCount;
        }
};

int Room::totalCount=0;
int main()
{
    Room r1(10,20);
    Room r2(20,30);
    Room r3(88,99);
    cout<<Room::totalCountFunction();
}