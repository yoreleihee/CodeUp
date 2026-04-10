#include <iostream>
using namespace std;

class Warrior{
    int mHp;
    int mAttackpoint;

public:
    Warrior(int hp, int attackpoint){
        mHp = hp;
        mAttackpoint = attackpoint;
    }
    void PrintInfo(){
        cout << "Warrior : HP (" << mHp <<") Att (" << mAttackpoint << ")" << endl;
    }
};

class Magicion{
    int mHp;
    int mAttackpoint;

public:
    Magicion(int hp, int attackpoint){
        mHp = hp;
        mAttackpoint = attackpoint;
    }
    void PrintInfo(){
        cout << "Magicion : HP (" << mHp <<") Att(" << mAttackpoint << ")" << endl;
    }
};

class Archer{
    int mHp;
    int mAttackpoint;

public:
    Archer(int hp, int attackpoint){
        mHp = hp;
        mAttackpoint = attackpoint;
    }
    void PrintInfo(){
        cout << "Archer : HP (" << mHp <<") Att (" << mAttackpoint << ")" << endl;
    }
};

class Party{
    Warrior* mWarrior;
    Magicion* mMagicion;
    Archer* mArcher;

public:
    Party(Warrior* warrior, Magicion* magicion, Archer* archer){
        mWarrior = warrior;
        mMagicion = magicion;
        mArcher = archer;
    }

    void PrintPartyInfo(){
        mWarrior->PrintInfo();
        mArcher->PrintInfo();
        mMagicion->PrintInfo();
    }
};
int main() {
    Warrior warrior(100, 20);
    Archer archer(100, 30);
    Magicion magicion(100, 10);

    Party party(&warrior, &magicion, &archer);

    party.PrintPartyInfo();

    return 0;
}
