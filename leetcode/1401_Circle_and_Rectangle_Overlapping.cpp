#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int closestX = max(x1, min(xCenter, x2));
        int closestY = max(y1, min(yCenter, y2));

        int dx = xCenter - closestX;
        int dy = yCenter - closestY;

        bool overlap = dx*dx + dy*dy <= 1LL * radius*radius;
        return overlap;
    }
};
int main() {
    Solution solution;
    int radius = 5;
    int xCenter = 0;
    int yCenter = 0;
    int x1 = -3;
    int y1 = -3;
    int x2 = 3;
    int y2 = 3;

    bool result = solution.checkOverlap(radius, xCenter, yCenter, x1, y1, x2, y2);
    if (result) {
        std::cout << "The circle and rectangle overlap." << std::endl;
    } else {
        std::cout << "The circle and rectangle do not overlap." << std::endl;
    }

    return 0;
}