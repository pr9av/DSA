class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = s.size();
        int n = t.size();
        if (m != n)
            return false;
        // else{
        vector<int> hash(26, 0);
        for (int i=0; i < m; i++) {
            hash[s[i] - 'a']++;
            hash[t[i] - 'a']--;
        }
        for (int c : hash) {
            if (c != 0)
                return false;
        }
        //  }
        return true;
    }
};