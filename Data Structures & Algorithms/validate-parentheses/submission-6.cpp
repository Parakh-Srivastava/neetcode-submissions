class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> brackets = {{')', '('}, {'}', '{'}, {']', '['}};
        vector<char> stack;

        if (s.size() % 2 != 0) return false;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stack.push_back(c);
            } else {
                if (stack.empty() || stack.back() != brackets[c]) {
                    return false;
                }
                stack.pop_back();
            }
        }
        return stack.empty();
    }
};