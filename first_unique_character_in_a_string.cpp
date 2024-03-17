class Solution {
public:
    int firstUniqChar(string s) {
         for(int i=0; i<s.size(); i++){
            bool choice = false;
            for(int j=0; j<s.size(); j++){
                if(i != j && s[i] == s[j]){
                    choice = true;
                    break;
                }
            }
            if(!choice)
             return i;
        }
        return -1;
    }
};
