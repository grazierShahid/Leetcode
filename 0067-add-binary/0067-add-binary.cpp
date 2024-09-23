class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1, j=b.size()-1, car=0;
        string s="";

        while(i>=0 || j>=0 || car){
            int x = (i>=0)? a[i--]-48:0;
            int y = (j>=0)? b[j--]-48:0;
            car += x+y;

            s += car % 2 + '0';
            car /= 2;
        }

        reverse(s.begin(), s.end());
        return s;
    }
};