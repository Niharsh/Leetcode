class Solution {
public:
    string lowercase(string s){
        string str="";
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
            if((s[i]>=97 && s[i]<=122) ||(s[i]>=48 && s[i]<=57)){
                str+=s[i];
            }
        }
        return str;
    }
    bool isPalindrome(string s) {
        string st=lowercase(s);
        int len=st.size();
        for(int j=0;j<len/2;j++){
            if(st[j]!=st[len-j-1]){
                return false;
            }
        }
        return true;
    }
};