class Solution {
public:
    int lengthOfLastWord(string s) {
         int size=s.size(),count=0,x=0;
        for(int i=size-1;i>=0;i--){
            if(s[i]==' '&&x)
            break;
            if(s[i]!=' '){
                x=1;
                count++;
            }
        }
        return count;
    }
};
