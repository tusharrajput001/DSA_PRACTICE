#include <bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal)
{
    queue<char> q1, q2;

    for (int i = 0; i < s.size(); i++)
    {
        q1.push(s[i]);
    }
    for (int i = 0; i < goal.size(); i++)
    {
        q2.push(goal[i]);
    }

    int k = goal.size();

    while (k != 0)
    {
        char ch = q2.front();
        q2.pop();
        q2.push(ch);

        if (q1 == q2)
            return true;
        k--;
    }

    return false;
}

int main()
{
    bool res = rotateString("abcde", "cdeab");

    // Print the result
    if (res)
        cout << "The strings are rotations of each other." << endl;
    else
        cout << "The strings are not rotations of each other." << endl;

    return 0;
}
