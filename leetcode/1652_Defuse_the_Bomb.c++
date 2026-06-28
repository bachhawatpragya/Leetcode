#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int> arr(n);
        if(k==0) return arr;
        int strt,end;
        if(k>0){
            strt=1;
            end=k;
        }
        if(k<0){
            strt=n+k;
            end=n-1;
        }
        int wind=0;
        for(int i=strt;i<=end;i++){
            wind+=code[i%n];
        }
        for(int i=0;i<n;i++){
            arr[i]=wind;
            wind-=code[strt%n];
            strt++;
            end++;
            wind+=code[end%n];
        }
        return arr;
    }
};
int main(){
    Solution s;
    vector<int> code={5,7,1,4};
    int k=3;
    vector<int> ans=s.decrypt(code,k);
    for(int i:ans)cout<<i<<" ";
}