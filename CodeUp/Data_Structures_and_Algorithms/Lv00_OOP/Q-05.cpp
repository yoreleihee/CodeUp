#include <iostream>
using namespace std;

class Student {
    char* pName;
    int mId;
    int mMathScore;
    int mEnglishScore;
    int mScienceScore;
public:
    Student(char* name, int id, int mathScore, int englishScore, int scienceScore) {
        pName = name;
        mId = id;
        mMathScore = mathScore;
        mEnglishScore = englishScore;
        mScienceScore = scienceScore;
    }

    float AverageScore() {
        return (mMathScore + mEnglishScore + mScienceScore) / 3;
    }
    void PrintInfo() {
        cout << "Name: " << pName << "(ID: " << mId << ")" << endl;
        cout << "Math: " << mMathScore << ", English: " << mEnglishScore << ", Science: " << mScienceScore << endl;
        cout << "Average Score: " << AverageScore() << endl;
    }
};
int main() {
    Student john((char*)"John", 20231234, 85, 78, 92);
    Student minho((char*)"Minho", 20231235, 85, 88, 92);
    Student gahong((char*)"Gahong", 20231236, 95, 78, 92);

    john.PrintInfo();
    cout << endl;
    minho.PrintInfo();
    cout << endl;
    gahong.PrintInfo();
    return 0;
}
