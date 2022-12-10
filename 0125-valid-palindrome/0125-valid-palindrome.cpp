class Solution {
public:
    string removealpha(string s){
        int j = 0;
        for(int i = 0; i< s.size(); i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')|| (s[i]>='0'  && s[i]<='9')){
                s[j] = tolower(s[i]);
                j++;
            }
        }
        return s.substr(0,j);
    }
    bool isPalindrome(string s) {
        string orignal = removealpha(s);
        string temp = removealpha(s);
        cout<<temp;
        int i = 0;
        int j = temp.size()-1;
        while(i<=j){
            swap(temp[i] , temp[j]);
            i++;
            j--;
        }
        // cout<<temp;
        if(temp == orignal) return true;
        return false;
    }
};