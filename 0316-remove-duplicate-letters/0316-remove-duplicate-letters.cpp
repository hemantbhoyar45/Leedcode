class Solution {
public:
    string removeDuplicateLetters(string s) {

        int n = s.length();

        unordered_map<char,int> freq;
        unordered_map<char,bool> visited;


        for(int i = 0; i < n; i++){
            char ch = s[i];
            freq[ch]++;
        }


        stack<char> st;


        for(int i = 0; i < n; i++){

            char ch = s[i];

            freq[ch]--;


            if(visited[ch] == true)
                continue;


            while(!st.empty() && 
                  st.top() > ch && 
                  freq[st.top()] > 0){

                visited[st.top()] = false;
                st.pop();
            }


            st.push(ch);
            visited[ch] = true;
        }


        string ans = "";

        while(!st.empty()){

            ans = ans + st.top();
            st.pop();
        }


        reverse(ans.begin(), ans.end());

        return ans;
    }
};