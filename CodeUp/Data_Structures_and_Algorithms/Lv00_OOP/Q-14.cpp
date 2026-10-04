#include <iostream>
using namespace std;

struct Author{
    char* name;
    char* email;
    char* filed;
};

class Article{
    char* pTitle;
    char* pDate;
    int mCharsCount;
    Author mAuthor;

public:
    Article(char* title, char* date, int charsCount, Author author)
    : pTitle(title), pDate(date), mCharsCount(charsCount), mAuthor(author){}

    void PrintInfo(){
        cout << "Article: \"" << pTitle << "\" " << "(" << mCharsCount << " chars)" << endl;
        cout << "Author: " << mAuthor.name << " | Email: " << mAuthor.email << " | " <<
        "Field: " << mAuthor.filed;
    }
};
int main() {
    Article article((char*)"Rise of AI", (char*)"2026.04.08", 1240,
            {(char*)"Alice Kim", (char*)"alice@domain.com", (char*)"Computer Science"});
    article.PrintInfo();
    return 0;
}
