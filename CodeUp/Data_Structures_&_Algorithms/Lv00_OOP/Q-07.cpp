#include <iostream>
using namespace std;

class Timer {
    int mTotalSeconds;
    bool mStarted = false;
    int mElapsed;
    char* pName;

public:
    Timer(int totalSeconds, char* name) {
        mTotalSeconds = totalSeconds;
        pName = name;
    }

    void Start() {
        mStarted = true;
    }

    void Elapsed(int elapsed) {
        mElapsed = elapsed;
    }

    void PrintInfo() {
        cout << "Timer " << "\"" << pName << "\"" << (mStarted ? "started." : "not yet.") << endl;
        cout << "Elapsed: " << mElapsed << "s / Total: " << mTotalSeconds << "s";
    }
};
int main() {
 
    Timer timer(300, (char*)"Cooking");
    timer.Start();
    timer.Elapsed(90);
    timer.PrintInfo();
    return 0;
}
