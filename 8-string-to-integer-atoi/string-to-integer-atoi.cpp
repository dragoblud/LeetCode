class Solution {
public:
    int myAtoi(string s) {
        int len = s.size();
        double num = 0;
        int i = 0;
        bool neg=false,pos=true;
        while (s[i] == ' ') {
            i++;
        }
        if (s[i] == '-') {
            neg = true;
            pos = false;
            i++;
        } else if (s[i] == '+') {
            pos = true;
            neg = false;
            i++;
        }
        while (i < len && s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + (s[i] - '0');
            i++;
        }
        if(neg)num=-num;
        if(num<INT_MIN)num=INT_MIN;
        else if(num>INT_MAX)num=INT_MAX;
        else num;
        return int(num);
    }
};