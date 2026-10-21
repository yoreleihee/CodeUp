#include <iostream>
#include <unordered_map>
using namespace std;

// 해시 함수를 사용해서 공룡의 나이와 이름을 저장
int main() {
    unordered_map<int, string> dinosaurs = {
        {1000000005, "Sour"},
        {1000000002, "Dav"},
        {1000000003, "Nica"},
        {1000000006, "Timer"},
        {1000000015, "Pico"},
        {1000000022, "Topisl"},
        {1000000013, "Whab"},
        {1000000009, "Hap"}
    };

    int age;
    cin >> age;

    cout << dinosaurs[age];
    return 0;
}
