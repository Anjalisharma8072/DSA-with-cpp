#include <iostream>
#include <stack>
#include <string>
using namespace std;

int prio(char ch)
{
    if (ch == '*' || ch == '/')
        return 2;
    else
        return 1;
}

string solve(string val1, string val2, char ch)
{
    string s = "";
    s += val1;
    s += val2;
    s.push_back(ch);
    return s;
}

int main()
{
    string s = "8/(4-2)*3";
    stack<string> val;
    stack<char> op;

    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
            val.push(to_string(s[i] - 48));
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
                while (op.size() != 0 && op.top() != '(')
                {
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.pop();
            }
            else if (prio(op.top()) < prio(s[i]))
                op.push(s[i]);
            else
            {
                while (op.size() != 0 && (prio(op.top()) >= prio(s[i])))
                {
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while (op.size() != 0)
    {
        char ch = op.top();
        op.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = solve(val1, val2, ch);
        val.push(ans);
    }

    int a = (9 + 2) * 2 / 11;
    cout << "answer: " << val.top() << endl;
}