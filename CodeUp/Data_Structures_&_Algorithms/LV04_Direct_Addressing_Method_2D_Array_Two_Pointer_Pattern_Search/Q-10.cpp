#include <iostream>
using namespace std;

class Date{
    int mYear;
    int mMonth;
    int mDay;

public:
    Date(int year, int month, int day)
    : mYear(year), mMonth(month), mDay(day) {}

    Date(const char* charDate){
        int date[3] = {};

        int j = 0;
        for (int i = 0; i < 3; ++i)
        {
            int k = 0;
            char temp[5] = {};
            while (charDate[j] != '/'){
                if (charDate[j] == '\0'){
                    break;
                }

                temp[k] = charDate[j];
                j++;
                k++;
            }

            date[i] = atoi(temp);
            j++;
        }

        mYear = date[0];
        mMonth = date[1];
        mDay = date[2];
    }

    void show(){
        cout << mYear << "년" << mMonth << "월" << mDay << "일";
    }

    int getYear() {return mYear;}
    int getMonth() {return mMonth;}
    int getDay() {return mDay;}
};

int main()
{
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << endl;
    cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
    return 0;
}
