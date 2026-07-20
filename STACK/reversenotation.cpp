class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
         stack<int> s;

        for(int i = 0;i < n; i++){
            string token = tokens[i];
            if(token != "+" && token != "-" && token != "*" && token != "/"){
                int val = stoi(token);
                 s.push(val);
            }
            else{
                int a = s.top();
                s.pop();

                int b = s.top();
                s.pop();

                int ans = 0;
                 if(token == "+") ans = a + b;
                 else if(token == "-") ans = b - a;
                 else if(token == "*") ans = a * b;
                 else if(token == "/") ans = b / a;

                 s.push(ans);
            }
        }
        return s.top();
    }
};