#include <iostream>
using namespace std;

class IRenderable {
public:
    virtual void Render() = 0;
    virtual ~IRenderable() {}
};

class IUpdatable {
public:
    virtual void Update() = 0;
    virtual ~IUpdatable() {}
};

class GameObject : public IRenderable, public IUpdatable {
protected:
    string mName = "";
public:
    GameObject(string name) : mName(name) {}
};

class Player : public GameObject {
public:
    Player(string name) : GameObject(name) {}
    void Render() override { cout << mName << " 렌더링" << endl; }
    void Update() override { cout << mName << " 업데이트" << endl; }
};

class Enemy : public GameObject {
public:
    Enemy(string name) : GameObject(name) {}
    void Render() override { cout << mName << " 렌더링" << endl; }
    void Update() override { cout << mName << " 업데이트" << endl; }
};

int main()
{
    Player p("Hero"); Enemy e("Goblin");
    IRenderable* renderables[] = { &p, &e };
    IUpdatable* updatables[] = { &p, &e };
    for (int i = 0; i < 2; ++i) {
        updatables[i]->Update();
        renderables[i]->Render();
    }

    return 0;
}