#include <iostream>
using namespace std;

struct Book{
    char* title;
    char* author;
    char* genre;
    int page;
};

class Library{
    Book* pBooks;
    char* pLocation;
    char* pManager;
    int mBooksCount;
public:
    Library(Book* books, char* location, char* manager, int bookCount)
    : pBooks(books), pLocation(location), pManager(manager), mBooksCount(bookCount) {}

    void PrintInfo(){
        cout << "Library: " << pLocation << " | Managers: " << pManager << endl;
        cout << "Books" << endl;
        for (int i = 0; i < mBooksCount; ++i)
        {
            Book book = pBooks[i];
            cout << "- \"" << book.title << "\"" << " by " << book.author << "(" << book.genre << ", " << book.page
            << "p)" << endl;
        }
    }
};
int main() {
    Book books[2] = {
            {(char*)"1984", (char*)"Orwell", (char*)"Dystopia", 320},
            {(char*)"Dune", (char*)"Herbert", (char*)"Sci-Fi", 500}
    };

    Library library(books, (char*)"Central Library", (char*)"Ms. Kim", size(books));
    library.PrintInfo();
    return 0;
}
