#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool primeSubOperation(vector<int>& nums) {
        int n=*max_element(nums.begin(),nums.end());
        vector<bool> sieve(n+1,true);
        sieve[0]=sieve[1]=false;
        for(int i=2;i*i<=n;i++){
            if(sieve[i]){
                for(int j=i*i;j<=n;j+=i){
                    sieve[j]=false;
                }
            }
        }
        vector<int>primes;
        for(int i=2;i<=n;i++){
            if(sieve[i])primes.push_back(i);
        }
        int prev=0;
        for(int i=0;i<nums.size();i++){
            int limit=nums[i]-prev;
            auto it=lower_bound(primes.begin(),primes.end(),limit);
            if(it!=primes.begin()){
                --it;
                nums[i]-=*it;
            }
            if(prev>=nums[i])return false;
            prev=nums[i];
        }
        return true;
    }
};

int main(){
    Solution s;
    vector<int> nums={4,9,6,10};
    bool result=s.primeSubOperation(nums);
    cout<<"Is it possible to make the array strictly increasing? "<<(result ? "Yes" : "No")<<endl;
    return 0;
}