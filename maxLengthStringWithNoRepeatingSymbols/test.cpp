#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<int, int> el;

	el[1] = 444;
	el[4] = 121;
	el[3] = 0;
	
	for (auto i : el)
		cout << i.first << " " << i.second << endl;
}
