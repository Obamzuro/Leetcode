#include <iostream>
#include <iomanip>
#include <string>
#include <map>

using namespace std;

int main()
{
	string start = "adbfgfdqwe";
//	map<int, int> el;
	int max = 0;

	cout << start << endl;
	for (auto i : start)
		cout << '|' << setw(3)  <<  i << " |";
	cout << endl;
	auto localMin = start.size();
	auto localInd = 0;
	auto localStart = 0;

	for (int i = 0; i < start.size(); ++i)
	{
		cout << "====================" << endl;
		if (i == localMin)
		{
			max = max < localMin - localStart ? localMin - localStart : max;
			cout << "i == LOCALMIN\nmax = " << max << " localMIN = " << localMin << endl; 
			localStart = i = localInd;
			++localStart;
			localMin = start.size();
			continue;
		}
		auto next = start.find_first_of(start[i], i+1);
//		el[i] = next;
		if (next < localMin)
		{
			localMin = next;
			localInd = i;
		}

		cout << "i: " << i << " letter: " << start[i] << " next: " << next << endl;
		cout << "localMin: " << localMin << " localInd: " << localInd;
		cout << " localStart: " << localStart << endl;
		char asf;
		cin >> asf;
	}
	max = max < localMin - localStart? localMin - localStart: max;

	cout << "-------------------------" << endl;
	cout << "-------------------------" << endl;
	cout << "MAX: " << max << endl;
}
