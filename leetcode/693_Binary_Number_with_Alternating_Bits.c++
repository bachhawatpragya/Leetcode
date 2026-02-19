#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasAlternatingBits(int n) {
        // hum abhi n ko ek right shift kr rahe fir usko original n k sath xor kr rahe
        //  mtlb agr alternating hua toh for ex: n= 1010 and n>>1=0101 
        // next if xor it 1010 ^ 0101 => 1111 abb yehi agr alternating nhi hota toh 0 k sath aata
        unsigned int x=n^(n>>1);

        //  abb dekho apun ka x=1111 so x+1=>10000 kyuki 1111+1=>10000
        // toh agr hum isko and operation krte toh 10000 & 1111 => 0(cuz 0&1 =0, 0&0=0, 1&1=1{only}, 1&0=0)
        return (x & (x+1))==0;
    }
};
int main(){
    Solution s;
    int n;
    cin>>n;
    bool ans=s.hasAlternatingBits(n);
    cout<<ans;
}