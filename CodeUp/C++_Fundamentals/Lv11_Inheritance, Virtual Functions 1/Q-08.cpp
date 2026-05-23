#include <iostream>
using namespace std;

class Notification {
protected:
    string mReceiver = "";
public:
    Notification(string receiver) : mReceiver(receiver) {}
    virtual void Send() = 0;
    virtual ~Notification() {}
};

class EmailNotification : public Notification {
public:
    EmailNotification(string receiver) : Notification(receiver) {}
    void Send() override {
        cout << mReceiver << "로 이메일을 전송했습니다." << endl;
    }
};

class SMSNotification : public Notification {
public:
    SMSNotification(string receiver) : Notification(receiver) {}
    void Send() override {
        cout << mReceiver << "로 문자를 전송했습니다." << endl;
    }
};

int main()
{
    EmailNotification e("kim@example.com");
    SMSNotification s("010-1234-5678");
    Notification* notices[] = { &e, &s };
    for (int i = 0; i < 2; ++i)
        notices[i]->Send();

    return 0;
}