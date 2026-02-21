class Solution {
    public int maxProfit(int[] prices) {
        int kharid=Integer.MAX_VALUE, profit=0;
        for(int i=0;i<prices.length;i++){
            kharid=Math.min(kharid,prices[i]);
            profit=Math.max(profit,prices[i]-kharid);
        }
        return profit;
    }
}