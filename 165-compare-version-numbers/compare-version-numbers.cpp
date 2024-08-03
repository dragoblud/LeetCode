class Solution {
public:
    int compareVersion(string v1, string v2) {
        int n1 = v1.length(), n2 = v2.length();
        for(int i=0,j=0;(i<n1)||(j<n2);i++,j++){
            string s1 = "", s2 = "";
            while(i<n1 && v1[i] != '.') s1+=v1[i++]; 
            while(j<n2 && v2[j] != '.') s2+=v2[j++];
            int x = 0, y = 0;
            if(s1 != "") x = stoi(s1);
            if(s2 != "") y = stoi(s2);
            if(x<y) return -1;
            else if(x>y) return 1;
        }
        return 0;
    }
};