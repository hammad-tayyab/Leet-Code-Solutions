class Solution {
public:
    bool isValid(string s) 
    {
       // if (s.size() % 2 != 0) return false;//as odd string length could not be valid
        stack<char> st; //initializing a stack
        for(int i = 0; i < s.size(); ++i) //size() is used to get the size of the string
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]); //push() is used to push the element to the top of the stack
            }
            else
            {
                if(st.empty()) return false; //empty() is being used to check whther the stack is empty.
                else if(s[i] == ')' && st.top() == '(') st.pop();//top() is used to get the top elment of the stack.
                else if(s[i] == ']' && st.top() == '[') st.pop();
                else if(s[i] == '}' && st.top() == '{') st.pop();
                else return false;
            }
        }
        return st.empty();
    }
};