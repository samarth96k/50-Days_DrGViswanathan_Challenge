class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res = "";                   
        while (columnNumber > 0) {
            columnNumber--;                    
            char c = 'A' + (columnNumber % 26);
            res.insert(res.begin(), c);       
            columnNumber /= 26;
        }
        return res;                           
    }
};
