#include <iostream>
#include <string>

using namespace std;

int solution(string s)
{
    int red = 0, blue = 0, yellow = 0;
    char R_group[4] = {'R', 'O', 'P', 'A'};
    char B_group[4] = {'B', 'P', 'G', 'A'};
    char Y_group[4] = {'Y', 'O', 'G', 'A'};

    // for red
    bool last_flag = false;
    for (auto a: s)
    {
        if (last_flag)
        {
            bool new_flag = false;
            for (int i = 0; i < 4; i ++)
            {
                if (a == R_group[i]) new_flag = true;
            }
            if (!new_flag)
            {
                last_flag = new_flag;
                red += 1;
            }
        }
        else
        {
            bool new_flag = false;
            for (int i = 0; i < 4; i ++)
            {
                if (a == R_group[i]) new_flag = true;
            }
            if (new_flag) last_flag = true;
        }
    }
    
    if (last_flag) red += 1;

    // for blue
    last_flag = false;
    for (auto a: s)
    {
        if (last_flag)
        {
            bool new_flag = false;
            for (int i = 0; i < 4; i ++)
            {
                if (a == B_group[i]) new_flag = true;
            }
            if (!new_flag)
            {
                last_flag = new_flag;
                blue += 1;
            }
        }
        else
        {
            bool new_flag = false;
            for (int i = 0; i < 4; i ++)
            {
                if (a == B_group[i]) new_flag = true;
            }
            if (new_flag) last_flag = true;
        }
    }
    
    if (last_flag) blue += 1;

    // for yellow
    last_flag = false;
    for (auto a: s)
    {
        if (last_flag)
        {
            bool new_flag = false;
            for (int i = 0; i < 4; i ++)
            {
                if (a == Y_group[i]) new_flag = true;
            }
            if (!new_flag)
            {
                last_flag = new_flag;
                yellow += 1;
            }
        }
        else
        {
            bool new_flag = false;
            for (int i = 0; i < 4; i ++)
            {
                if (a == Y_group[i]) new_flag = true;
            }
            if (new_flag) last_flag = true;
        }
    }
    
    if (last_flag) yellow += 1;

    return red + blue + yellow;
}

int main()
{
    int t;
    cin >> t;

    int l;
    string s;

    for (int i = 1; i <= t; i ++)
    {
        cin >> l;
        cin >> s;
        cout << "Case #" << i << ": " << solution(s) << endl;
    }

    return 0;
}