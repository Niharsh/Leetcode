class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){return false;}
        long long ans=0;
        int n=x;
        while(x>0){
            long long temp=x%10;
            ans = ans*10 + temp;
            x=x/10;
        }
        if(ans==n){return true;}
        else{return false;}
    }
};