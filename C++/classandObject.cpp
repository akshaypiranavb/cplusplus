#include<iostream>
using namespace std;

class akshay //class name
{
public:
    int akshay; //properties
    int piranav;
    int akshaypiranav() //method
    {
        return akshay*piranav;
    }
};

int main()
{
    akshay ak;//object
    ak.akshay=10;
    ak.piranav=20;
    cout<<"THE VALUE IS : "<<ak.akshaypiranav();
    return 0;
}
