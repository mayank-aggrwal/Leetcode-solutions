class Solution {
public:
    string interpret(string command) {
        
        int n = command.size(), i = 0;
        string ans = "";
        
        while(i < n) {
            if(command[i] == 'G') {
                ans += 'G';
                i++;
            }
            else {
                if(command[i + 1] == ')') {
                    ans += 'o';
                    i += 2;
                }
                else {
                    ans += "al";
                    i += 4;
                }
            }
        }
        return ans;
        
    }
};