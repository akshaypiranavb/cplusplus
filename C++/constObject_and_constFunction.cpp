#include<iostream>
using namespace std;

class Book
{
    private:
        string bookName;
        string authorName;

    public:
        Book(string bN,string aN)
        {
            bookName=bN;
            authorName=aN;
        }
        string getbookName() const
        {
            return bookName;
        }
};

int main()
{
    const Book book("RICH MAN","ROBERT KIYOSAKI");
    cout<<book.getbookName();
}
