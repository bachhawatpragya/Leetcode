class Solution {
    public int longestOnes(int[] nums, int k) {
        int l=0;
        int zerocnt=0, maxc=0;
        for(int r=0;r<nums.length;r++){
            if(nums[r]==0)zerocnt++;
            while(zerocnt>k){
                if(nums[l]==0){
                    zerocnt--;
                }
                l++;
            }
            maxc=Math.max(maxc,r-l+1);
        }
        return maxc;
    }
    public static void main(String[] args) {
        Solution s=new Solution();
        int[] nums={1,1,1,0,0,0,1,1,1,1,0};
        int k=2;
        System.out.println(s.longestOnes(nums,k));
    }
}
