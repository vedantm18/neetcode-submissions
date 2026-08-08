
class Solution {
public:
    bool isValid(string s) {

        if (s.size() < 1) {
            return false;
        }

        stack<char> stk;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                stk.push(s[i]);
            }

            else if (!stk.empty() && s[i] == ')' && stk.top() == '(') {
                stk.pop();
            }

            else if (!stk.empty() && s[i] == ']' && stk.top() == '[') {
                stk.pop();
            }

            else if (!stk.empty() && s[i] == '}' && stk.top() == '{') {
                stk.pop();
            }

            else if (s[i] == ']' || s[i] == '}' || s[i] == ')') {
                return false;
            }
        }

        return stk.empty();
    }
};