#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int factorial(int n) {
        // code here
        int fact=1;
        if(n==1)return fact;
        for(int i=2;i<=n;i++){
            fact*=i;
        }
        return fact;
    }
};
int main() {
    Solution sol;
    int n = 5; // Example input
    int result = sol.factorial(n);
    cout << "Factorial of " << n << " is: " << result << endl;
    return 0;
}