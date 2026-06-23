#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long nmass=mass;
        for( int i:asteroids){
            if (nmass < i) return false;
            nmass += i;
        }
        return true;
    }
};
int main(){
    Solution s;
    vector<int> asteroids={5,10,15};
    cout<<s.asteroidsDestroyed(10,asteroids);
}