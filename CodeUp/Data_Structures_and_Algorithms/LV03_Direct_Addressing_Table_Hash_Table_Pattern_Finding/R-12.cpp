#include <iostream>
using namespace std;

class Time {
private:
    int mHour;
    int mMinute;
    int mSecond;

public:
    Time(int h, int m, int s)
            : mHour(h), mMinute(m), mSecond(s) {}

    Time operator+(const Time& other) {
        return Time(
                mHour + other.mHour,
                mMinute + other.mMinute,
                mSecond + other.mSecond
        );
    }

    void Print() {
        cout << mHour << ":" << mMinute << ":" << mSecond << endl;
    }
};

int main() {
    Time time1(4, 50, 40);
    Time time2(3, 40, 30);
    Time time3 = time1 + time2;

    time1.Print();
    time2.Print();
    time3.Print();

    return 0;
}
