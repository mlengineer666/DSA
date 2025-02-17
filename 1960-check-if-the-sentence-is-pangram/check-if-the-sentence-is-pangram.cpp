class Solution {
public:
    bool checkIfPangram(string sentence) {
        // using array
        // vector<bool>alpha(26,0);
    
        // for(int i=0;i<sentence.length();i++){
        //     // to get the index we have to subtract 'a' from all character e.g-> 'a' - 'a' = 0
        //     int index = sentence[i] - 'a';
        //     alpha[index] = 1;
        // }

        // // Now we have to iterate through alpha 
        // for(int i=0;i<26;i++){
        //     if(alpha[i]==0) return false;
        // }
        // return true;


        // using set

        // unordered_set<char> myset;

        // for(char &ch:sentence){
        //     myset.insert(ch);
        // }
        // if(myset.size()==26) return true;
        // return false;


        // using count
        vector<int> arr(26,0);

        int count = 0;
        for(char ch:sentence){
            int index = ch - 'a';
            if(arr[index]==0){
                arr[index]++;
                count++;
            }
        }
        if(count==26) return true;
        return false;


    }
};