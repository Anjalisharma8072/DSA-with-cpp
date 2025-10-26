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
    if (ch == '+')
        return val1 + val2;
    else if (ch == '-')
        return val1 - val2;
    else if (ch == '*')
        return val1 * val2;
    else
        return val1 / val2;
}

int main()
{
    string s = "9-6/3*2";

    stack<int> val;
    stack<char> op;
    int ans;

    for (size_t i = 0; i < s.length(); i++)
    {
        // if it is number
        if (s[i] >= 48 && s[i] <= 57)
        {
            // cout << ("000000000000000000000000");
            val.push(s[i] - 48);
        }
        else
        {
            // if it is operator then some work is done
            if (op.size() == 0 || prio(op.top()) < prio(s[i]))
            {
                // cout << ("111111111111111111111");
                op.push(s[i]);
            }
            else
            {
                while (prio(op.top()) >= prio(s[i]))
                {
                    // cout << ("2222222222222222222");
                    int ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while (op.size() != 0)
    {
        // cout << ("33333333333333333333");
        int ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1, val2, ch);
        val.push(ans);
    }
    cout << "answer: " << val.top() << endl;
    int a = 9 - 6 / 3 * 2;
    cout << "verification answer: " << a;
}