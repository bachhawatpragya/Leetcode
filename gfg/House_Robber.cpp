#include <iostream>
#include <cmath>
using namespace std;

class Solution {
  public:
    int maximizeMoney(int n, int k) {
        // code here
        double finds = ceil(n/2.0);
        return k*finds;
    }
};
int main() {
    Solution s;
    int n = 5; // Number of houses
    int k = 10; // Amount of money in each house

    int maxMoney = s.maximizeMoney(n, k);
    cout << "Maximum Money that can be robbed: " << maxMoney << endl;

    return 0;
}