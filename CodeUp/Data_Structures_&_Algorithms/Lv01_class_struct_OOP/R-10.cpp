#include <iostream>
using namespace std;

class Weapon {
    char name[20];

public:
    void SetName(char *name) {
        memcpy(this->name, name, sizeof(char) * strlen(name));
    }

    char* GetName() {
        return name;
    }
};

class Player {
    Weapon weapon;
    int hp;

public:
    void SetWeapon(char *name) {
        weapon.SetName(name);
    }
    void SetHp(int hp) {
        this->hp = hp;
    }

    void PrintInfo() {
        cout << "hp : " << hp << endl;
        cout << "weapon : " << weapon.GetName() << endl;
    }
};

int main()
{
    Player warrior, archer;

    warrior.SetWeapon("sword");
    warrior.SetHp(200);

    archer.SetWeapon("bow");
    archer.SetHp(100);

    cout << "warrior" << endl;
    warrior.PrintInfo();
    cout << "archer" << endl;
    archer.PrintInfo();
    return 0;
}