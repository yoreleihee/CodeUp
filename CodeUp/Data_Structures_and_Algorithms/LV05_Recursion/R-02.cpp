#include <iostream>
using namespace std;

class Person {
public:
    Person() {}
    string getName() { return name; }
    string getTel() { return tel; }
    void set(string name, string tel) {
        this->name = name;
        this->tel = tel;
    }
private:
    string name;
    string tel;
};

int main() {
    Person persons[3];

    for (int i = 0; i < 3; ++i) {
        string name, tel;
        cin >> name >> tel;
        persons[i].set(name, tel);
    }

    cout << endl;
    cout << "--- 전체 목록 ---" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << persons[i].getName() << " " << persons[i].getTel() << endl;
    }

    cout << endl;
    cout << "검색할 이름 입력: ";
    string search;
    cin >> search;

    bool found = false;
    for (int i = 0; i < 3; ++i) {
        if (persons[i].getName() == search) {
            cout << "전화번호: " << persons[i].getTel() << endl;
            found = true;
        }
    }

    if (!found) cout << "검색 결과 없음" << endl;

    return 0;
}