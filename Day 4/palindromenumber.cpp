class Solution {
    public:
        bool isPalindrome(int x) {
            if(x<0){
                return false;
            }
             long num=x;
             long sum=0;
            int ld;
            while(num>0){
                ld=num%10;
                sum=sum*10+ld;
                num=num/10;
            }
            if(sum==x){
                return true;
            }else{
                return false;
            }
        }
    };