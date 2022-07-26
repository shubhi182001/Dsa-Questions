class Solution {
private:
    string reverse(string& sub){
        int i = 0;
        int j = sub.length() -1;
        while(i<j){
            swap(sub[i], sub[j]);
            i++;
            j--;
        }
        return sub;
    }
public:
    string reverseWords(string s) {
        string result = "";
        int n = s.length();
        int i =0;
        while(i<n){
            while(i<n && s[i]==' '){
                i++;
            }
            int j = i+1;
            while(j<n && s[j]!=' '){
                j++;
            }
            string sub = s.substr(i, j-i);
            if(result.length() == 0){
                result = reverse(sub);
            }
            else{
                result = result + " " + reverse(sub);
            }
            i = j+1;
        }
        return result;
    }
};