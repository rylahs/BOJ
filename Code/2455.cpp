#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int person = 0;
	int input;
	int maxV = -1;

	for (int i = 0; i < 4; i++)
	{
		cin >> input;
		person -= input;
		cin >> input;
		person += input;
		maxV = max(maxV, person);
	}

	cout << maxV << "\n";

	return 0;
}