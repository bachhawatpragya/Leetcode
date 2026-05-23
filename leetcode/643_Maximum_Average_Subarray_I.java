class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int l=0, r=k-1;
        double wind=0;
        for(int i=l;i<=r;i++){
            wind+=nums[i];
        }
        double maxsum=wind;
        r++;
        while(r<nums.length){
            wind+=nums[r++];
            wind-=nums[l++];
            maxsum=Math.max(maxsum,wind);
        }
        return maxsum/k; 
    }
    public static void main(String[] args) {
        Solution s=new Solution();
        int[] nums={1,12,-5,-6,50,3};
        int k=4;
        System.out.println(s.findMaxAverage(nums,k));
}
