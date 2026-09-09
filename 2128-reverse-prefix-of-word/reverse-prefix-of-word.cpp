class Solution {
public:
    string reversePrefix(string word, char ch) {
       stack<char>st;

       string ans="";

       bool is_found=false;

       int n=word.size();

       int i=0;

       while(i<n){
        st.push(word[i]);
        if(word[i]==ch){
            is_found=true;
            break;
        }
        i++;
       }
       if(!is_found){
        return word;
       }

       while(!st.empty()){
        ans+=st.top();
        st.pop();
       }

       i++;
       while(i<n){
        ans+=word[i];
        i++;
       }
       
       return ans;
    }
};