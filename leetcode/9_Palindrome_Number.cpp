#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long nx=0;
        int temp=x;
        while(temp>0){
            nx=(nx*10)+(temp%10);
            temp/=10;
        }
        return nx==x;
    }
};
int main() {
    Solution sol;
    int number = 121; // Example input
    if (sol.isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }
    return 0;
}