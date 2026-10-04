#include <iostream>
using namespace std;

class Book {
    char* pTitle;
    char* pAuthor;
    char* pPublisher;
    float mPrice;

public:
    Book(char* title, char* author, char* publisher, float price) {
        pTitle = title;
        pAuthor = author;
        pPublisher = publisher;
        mPrice = price;
    }
    void PrintInfo() {
        cout << "[book]" << endl;
        cout << "Title: " << "\"" << pTitle << "\"" << endl;
        cout << "Author: " << "\"" << pAuthor << "\"" << endl;
        cout << "Publisher: " << "\"" << pPublisher << "\"" << endl;
        cout << "Price: " << "$" << mPrice << endl;
    }
};
int main() {
    Book book((char*)"1984", (char*)"George Orsell", (char*)"Penguin", 15.99);
    book.PrintInfo();
    return 0;
}
