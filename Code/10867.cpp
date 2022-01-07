// BOJ 10867. 중복 빼고 정렬하기
// https://www.acmicpc.net/problem/10867

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    set<int> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    for (auto& e : s)
        cout << e << " ";
    return 0;
}