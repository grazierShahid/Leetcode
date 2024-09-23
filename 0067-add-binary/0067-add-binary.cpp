class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1, j=b.size()-1, car=0;
        string s="";

        while(i>=0 || j>=0){
            int x = (i>=0)? a[i--]-48:0;
            int y = (j>=0)? b[j--]-48:0;
            int sum = x+y+car;

            car = (sum>1)?1:0;
            sum = (sum>1)?sum-2:sum;

            s += to_string(sum);
        }

        if(car) s+='1';
        reverse(s.begin(), s.end());
        return s;
    }
};