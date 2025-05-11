class Solution {
    public:
        int findNthDigit(int n) {
            int digits = 1;
            long count = 9;
            int start =1;
            while(n-count*digits>0){
                n = n-count*digits;
                count *= 10;
                digits++;
                start*=10;
            }
            start += (n - 1) / digits;  
            string s = to_string(start);
            return s[(n - 1) % digits] - '0'; 
            // int rem = n%digits;
            // n = n/digits;
            // int res = (count/10)+n;
            // int finalres = res%10;
            // while(rem>0){
            //     finalres = res%10;
            //     res = res/10;
            //     rem--;
            // }
            // return finalres;
        }
    };