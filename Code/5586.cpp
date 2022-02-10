#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	vector<int> v(2, 0);
	string str;
	cin >> str;

	for (int i = 0; i < (int)str.size() - 2; i++)
	{
		if (str.substr(i, 3) == "JOI")
			v[0]++;
		if (str.substr(i, 3) == "IOI")
			v[1]++;
	}

	cout << v[0] << "\n" << v[1] << "\n";
	return 0;
}