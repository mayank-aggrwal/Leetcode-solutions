#include<stack>
class Solution {
public:
    stack <char> s1;
    bool isValid(string s) {
        for ( int i = 0; s[i] != '\0'; i++)
        {
            if( s[i] == '(' || s[i] == '{'||s[i] == '[' )
                s1.push(s[i]);
            else
        {

            if(!s1.empty()) { 
                 if( (s[i] == ')' && s1.top() == '(') || 
                    ( s[i] == '}' && s1.top() == '{') || 
                    (s[i] == ']' && s1.top() == '[') ) {
                     s1.pop();
                 }
                else
                    return false;
                
            }
            else
                return false;
             
        }  
        }
        if (s1.size() == 0)
            return true;
        else
            return false;

    }
};
