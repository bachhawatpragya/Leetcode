import java.util.*;
class Solution {
    public int maxProfit(int[] prices) {
        int total_profit=0;
        for(int i=1;i<prices.length;i++){
            if(prices[i]>prices[i-1])total_profit+=(prices[i]-prices[i-1]);
        }
        return total_profit;
    }
}
public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] prices = {7, 1, 5, 3, 6, 4};
        int profit = solution.maxProfit(prices);
        System.out.println("Max Profit: " + profit); // Output: Max Profit: 7
    }
}