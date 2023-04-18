#include<iostream>
#include<vector>
using namespace std;
class stack
{
    private:
        vector <int> v;
    public:
        void push(int i)
        {
            v.push_back(i);
        }
        int top()
        {
            return v[v.size()-1];
        }
        int pop()
        {
            int topp=top();
            v.pop_back();
            return topp;
        }
};
int main()
{
    stack s;
    s.push(10);
    s.push(10);
    cout<<s.pop()<<endl;
    cout<<s.top();
    return 0;
}