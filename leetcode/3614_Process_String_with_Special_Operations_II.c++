#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char processStr(string s, long long k) {
        long long len=0;
        for(char c:s){
            if(islower(c)){
                len++;
            }
            else if(c=='*'){
                if(len>0)len--;
            }
            else if(c=='#')len*=2;
        }
        
        if(len<=k){
            return '.';
        }
        for(int i=s.size()-1;i>=0;i--){
            char c=s[i];
            if(islower(c)){
                if(k==len-1) return c;
                len--;
            }
            else if(c=='*' ){
                len++;
            }
            else if(c=='#'){
                len/=2;
                k%=len;
            }
            else if(c=='%'){
                k=len-1-k;
            }
        }
        return '.';
    }
};

int main(){
    Solution s;
    string str="a#b#c#d#e#f#g#h#i#j#k#l#m#n#o#p#q#r#s#t#u#v#w#x#y#z";
    long long k=1000000000;
    cout<<s.processStr(str,k);
    return 0;
}