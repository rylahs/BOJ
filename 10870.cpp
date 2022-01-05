// BOJ 10870. 피보나치 수 5
// https://www.acmicpc.net/problem/10870

#include <bits/stdc++.h>
using namespace std;
int fibo[22];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < 22; i++)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    int n; 
    cin >> n;
    cout << fibo[n] << '\n';
    


    return 0;
}