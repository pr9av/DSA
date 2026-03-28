class Solution {
public:
    string reverseVowels(string s) {
        string given=s;
        int start=0;
        int end=s.length()-1;
        string vowels="aeiouAEIOU";
        while(start<end){
            while(start<end && vowels.find(given[start])==string::npos){
                start++;
            }
            while(start<end && vowels.find(given[end])==string::npos){
                end--;
            }
            swap(given[start],given[end]);
            start++;
            end--;
        }
        return given;
        
    }
};