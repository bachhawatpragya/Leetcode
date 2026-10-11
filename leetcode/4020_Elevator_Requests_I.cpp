#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int ans=requests[0];
        for(int i=1;i<requests.size();i++){
            ans+=abs(requests[i-1]-requests[i]);
        }
        return ans;
    }
};
int main(){
    Solution s;
    int n=5;
    vector<int> requests={1,3,2,4};
    cout<<s.elevatorRequests(n,requests);
    return 0;
}