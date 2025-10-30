class Solution {
public:
    void reverseString(vector<char>& s) {
        int first=0;
        int second=s.size()-1;
        while(first<second){
            swap(s[first],s[second]);
            first++;
            second--;
        }
    }
};