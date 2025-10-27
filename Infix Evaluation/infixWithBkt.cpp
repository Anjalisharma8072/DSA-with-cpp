#include <iostream>
#include <stack>
using namespace std;

int prio(char ch)
{
    if (ch == '*' || ch == '/')
        return 2;
    else
        return 1;
}

int solve(int val1, int val2, int ch)
{
    if (ch == '/')
        return val1 / val2;
    else if (ch == '*')
        return val1 * val2;

    else if (ch == '+')
        return val1 + val2;

    else
        return val1 - val2;
}

int main()
{
    string s = "(9+2)*2/11";
    stack<int> val;
    stack<char> op;

    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
            val.push(s[i] - 48);
        else
        {
            if (op.size() == 0)
                op.push(s[i]);
            else if (s[i] == '(')
                op.push(s[i]);
            else if (op.top() == '(')
                op.push(s[i]);
            else if (s[i] == ')')
            {
                while (op.top() != '(')
                {
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.pop();
            }
            else if (prio(op.top()) < prio(s[i]))
                op.push(s[i]);
            else
            {
                while (prio(op.top()) >= prio(s[i]))
                {
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                    op.pop();
                }
                op.push(s[i]);
            }
        }
    }
    while (op.size() != 0)
    {
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1, val2, ch);
        val.push(ans);
    }

    int a = (9 + 2) * 2 / 11;
    cout << "answer: " << val.top() << endl;
    cout << "verification answer: " << a << endl;
}