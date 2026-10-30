class Solution {
public:
    string toLowerCase(string s) {
        for(auto &i : s){
            if(int(i)>=65 && int(i)<=90){
                i = char(int(i)+32);
            }
        }
        return s;
    }
};