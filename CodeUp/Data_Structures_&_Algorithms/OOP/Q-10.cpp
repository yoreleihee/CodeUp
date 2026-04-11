#include <iostream>
using namespace std;

class Movie {
    char* pTitle;
    int mDuration;
    char* pGenre;
    int mAgeRating;
    char* pDirector;

public:
    Movie(char* title, int duration, char* genre, int ageRating, char* director) {
        pTitle = title;
        mDuration = duration;
        pGenre = genre;
        mAgeRating = ageRating;
        pDirector = director;
    }
    void PrintInfo() {
        cout << "[Movie]" << endl;
        cout << "Title: " << pTitle << endl;
        cout << "Duration: " << mDuration << "min" << endl;
        cout << "Genre: " << pGenre << endl;
        cout << "Rated: " << mAgeRating << "+" << endl;
        cout << "Directed by: " << pDirector;
    }
};
int main() {
    Movie movie((char*)"Interstellar", 169, (char*)"Sci-Fi", 12, (char*)"Nolan");
    movie.PrintInfo();
    return 0;
}
