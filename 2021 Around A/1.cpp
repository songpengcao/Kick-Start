#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int solution(string s, int k)
{
    int result = 0;
    int l = s.size();
    for (int i = 0; i < (l / 2); i ++)
    {
        if (s[i] != s[l - 1 - i])
        {
            result += 1;
        }
    }
    return abs(result - k);
}

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i ++)
    {
        int n, k;
        cin >> n >> k;
        
        string s;
        cin >> s;
        
        int result = solution(s, k);
        printf("Case #%d: %d\n", i, result);
    }
    return 0;
}