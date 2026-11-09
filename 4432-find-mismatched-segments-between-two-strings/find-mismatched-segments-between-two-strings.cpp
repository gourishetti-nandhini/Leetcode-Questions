// class Solution {
// public:
//     vector<vector<string>> findMismatchedSegments(string s1, string s2) {
//         vector<vector<string>> result;
//         for (int i = 0; i < s1.size(); i++) {
//             vector<string> temp;
//             for (int j = i; j <=i; j++) {
//                 if (s1[i] != s2[j]) {
//                     char ans = s1[i];
//                     char ans1 = s1[i + 1];
//                     string final_ans = {ans, ans1};

//                     char current = s2[j];
//                     char next = s2[j + 1];
//                     string final_ans_2 = {current, next};

//                     temp.push_back(final_ans);
//                     temp.push_back(final_ans_2);
//                 }
//             }
//             result.push_back(temp);
//         }
//         return result;
//     }
// };

class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> result;
        string ans_m1 , ans_m2 = "";
        for (int i = 0; i < s1.size(); i++) {
            if(s1[i]!=s2[i]){
                ans_m1+=s1[i];
                ans_m2+=s2[i];
            }
            else if(ans_m1!=""){
                vector<string>temp;
                temp.push_back(ans_m1);
                temp.push_back(ans_m2);
                result.push_back(temp);
                ans_m1="",ans_m2="";
            }
        }
        if(ans_m1!=""){
               vector<string>temp;
                temp.push_back(ans_m1);
                temp.push_back(ans_m2);
                result.push_back(temp);
                ans_m1="",ans_m2="";
        }
        return result;
    }
};