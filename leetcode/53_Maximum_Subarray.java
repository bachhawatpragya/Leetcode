class Solution {
    public int maxSubArray(int[] nums) {
        int sum=0,max=Integer.MIN_VALUE;
        for(int x:nums){
            sum+=x;

            if(max<sum){
                max=sum;
            }
            if(sum<0)sum=0;
        }
        return max;
    }
}