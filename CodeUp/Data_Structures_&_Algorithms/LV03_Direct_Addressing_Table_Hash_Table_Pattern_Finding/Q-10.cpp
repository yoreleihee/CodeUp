#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char* name;
    char* address;
    char* phone;
    int id;
    int mileage;

public:
    Person(const char* n, const char* a, const char* p, int i, int m) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);

        address = new char[strlen(a) + 1];
        strcpy(address, a);

        phone = new char[strlen(p) + 1];
        strcpy(phone, p);

        id = i;
        mileage = m;
    }

    const char* GetName() { return name; }
    const char* GetAddress() { return address; }
    const char* GetPhone() { return phone; }
    int GetId() { return id; }
    int GetMileage() { return mileage; }
};

int main() {
    char name[100], address[100], phone[100];
    int id, mileage;

    cout << "이름을 입력하세요 : ";
    cin >> name;

    cout << "주소를 입력하세요 : ";
    cin >> address;

    cout << "연락처를 입력하세요 : ";
    cin >> phone;

    cout << "ID를 입력하세요 : ";
    cin >> id;

    cout << "마일리지를 입력하세요 : ";
    cin >> mileage;

    Person p(name, address, phone, id, mileage);

    cout << "-----고객 정보-----" << endl;
    cout << "이름: " << p.GetName() << endl;
    cout << "주소: " << p.GetAddress() << endl;
    cout << "연락처: " << p.GetPhone() << endl;
    cout << "고객ID: " << p.GetId() << endl;
    cout << "마일리지: " << p.GetMileage() << endl;

    return 0;
}