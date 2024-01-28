class Solution {
public:
    int strStr(string haystack, string needle) {
        int a=haystack.size(),b=needle.size();
        if(b>a){
            return -1;
        }
        int i,j;
        for( i=0;i<=(a-b);i++){
            if(haystack[i]==needle[0]){
                for( j=i;j<i+b;j++){
                    if(haystack[j]!=needle[j-i]){
                        break;
                    }
                }
                if(j==i+b){return i;}
            }
        }
        return -1;
    }
};
