class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
    //   int count=0;
    //   for(auto x : jewels){
    //     for(auto x1 : stones){
    //         if(x==x1){
    //             count=count+1;
    //         }
    //     }
    //   }
    //   return count;  
    // }

//     int count=0;
//     set<char>st;
//     for(int i=0;i<jewels.size();i++){
//         st.insert(jewels[i]);
//     }
//     for(auto x : st){
//         for(auto x1: stones){
//             if(x==x1){
//                 count++;
//             }
//         }
//     }
//    return count;

    int count=0;
    set<char>st;
    for(int i=0;i<jewels.size();i++){
        st.insert(jewels[i]);
    }
    for(int i=0;i<stones.size();i++){
        if(st.find(stones[i])!= st.end()){
            count++;
        }
    } 
    return count;
    }
};