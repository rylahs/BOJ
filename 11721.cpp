// BOJ 11721. 열 개씩 끊어 출력하기
// https://www.acmicpc.net/problem/11721

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;
    int count = 0;
    for (auto& e : str)
    {
        cout << e;
        count++;
        if (count % 10 == 0)
            cout << '\n';
    }

    return 0;
}