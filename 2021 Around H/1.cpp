#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int solution(string s, string f)
{
    int fff[26] = {0};
    int result = 0;
    for (auto c : f)
    {
        int now = c - 'a';
        fff[now] = 1;
    }
 
    // int c_cost, c_num, c_cost_now;
    int c_num, c_cost;
    
    for (auto c : s)
    {
        c_num = c - 'a';
        c_cost = 26;
        for (int now = 0; now < 26; now ++)
        {
            if (fff[now] == 1)
            {
                int now_cost = min(abs(now - c_num), 26 - abs(now - c_num));
                c_cost = min(c_cost, now_cost);
            }
        }
        result += c_cost;
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    
    string s, f;
    
    int result;
    
    for (int i = 1; i <= t; i ++)
    {
        cin >> s;
        cin >> f;
        cout << "Case #" << i << ": " << solution(s, f) << endl;
    }
    
    return 0;
}