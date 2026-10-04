#include <iostream>
#include <vector>
#include <list>

using namespace std;

string str = "ABCDEF";
int pos = 2;
string cmds = "RRLD";

int main()
{
	for (int i = 0; i < cmds.length(); ++i)
	{
		char cmd = cmds[i];

		if (cmd == 'R'){
			pos++;
			pos = min(pos, (int)(str.length()));
		} else if (cmd == 'L'){
			pos--;
			pos = max(pos, 0);
		}
		else if (cmd == 'D'){
			if (pos < str.length())
				str.erase(pos, 1);
		}
	}

	cout << pos;

	return 0;
}