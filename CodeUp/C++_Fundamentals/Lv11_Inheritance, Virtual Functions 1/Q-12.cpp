#include <iostream>
using namespace std;

class Book {
protected:
    string mTitle = "";
    string mAuthor = "";
public:
    Book(string title, string author) : mTitle(title), mAuthor(author) {}
    virtual void Display() = 0;
    virtual ~Book() {}
};

class EBook : public Book {
    double mFileSize = 0;
public:
    EBook(string title, string author, double fileSize)
            : Book(title, author), mFileSize(fileSize) {}
    void Display() override {
        cout << mTitle << " by " << mAuthor << ", " << mFileSize << "MB" << endl;
    }
};

class PaperBook : public Book {
    int mPages = 0;
public:
    PaperBook(string title, string author, int pages)
            : Book(title, author), mPages(pages) {}
    void Display() override {
        cout << mTitle << " by " << mAuthor << ", " << mPages << "p" << endl;
    }
};

int main()
{
    EBook eb("Clean Code", "Robert Martin", 5.2);
    PaperBook pb("Refactoring", "Martin Fowler", 450);
    Book* books[] = { &eb, &pb };
    for (int i = 0; i < 2; ++i)
        books[i]->Display();

    return 0;
}