#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

// chaining을 통한 중복 해시 키 처리
// 나이별 공룡의 개수를 저장

unordered_map<int, list<int>> map_dinosaurs;

int myHashFunc(int value) {
    return value % 10;
}

void add(int age) {
    int key = myHashFunc(age);
    map_dinosaurs[key].push_back(age);
}

int getCount(int age) {
    int key = myHashFunc(age);

    int result = 0;
    for (int dinosaur : map_dinosaurs[key]) {
        if (dinosaur == age) {
            ++result;
        }
    }

    return result;
}

int main() {
    add(1000000005);
    add(1000000006);
    add(1000000035);
    add(1000000002);
    add(1000000011);
    add(1000000005);
    add(1000000015);
    add(1000000025);

    int age;
    cin >> age;

    cout << getCount(age);

    return 0;
}