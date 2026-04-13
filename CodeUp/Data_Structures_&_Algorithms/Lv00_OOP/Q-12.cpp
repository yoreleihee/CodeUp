#include <iostream>
using namespace std;

struct Player{
    char* name;
    int id;
    char team;
    int score;
};

class ScoreBoard{
    Player *pPlayers;
    int mCount;
public:
    ScoreBoard(Player *player, int count)
    :pPlayers(player), mCount(count){}

    void PrintInfo(){
        cout << "[ScoreBoard]" << endl;
        int sum = 0;
        for (int i = 0; i < mCount; ++i)
        {
            Player player = pPlayers[i];
            cout << "- Player: " << player.name <<
                    " (Team" << player.team << ") Score: " << player.score << endl;
            sum += player.score;
        }

        cout << "Average: " << sum / mCount;
    }
};
int main() {
    Player players[2] = {
            {(char*)"Jone", 1, 'A', 80},
            {(char*)"Mary", 2, 'B', 90}
    };
    ScoreBoard scoreBoard(players, size(players));
    scoreBoard.PrintInfo();
    return 0;
}
