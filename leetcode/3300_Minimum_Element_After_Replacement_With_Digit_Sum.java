import java.util.*;

class Solution {
    public int minElement(int[] nums) {
        int mini=Integer.MAX_VALUE;
        for(int i=0;i<nums.length;i++){
            int sum=0;
            while(nums[i]>0){
                sum+=nums[i]%10;
                nums[i]/=10;
            }
            nums[i]=sum;
            mini=Math.min(sum,mini);
        }
        return mini;
    }
}
public static void main(String[] args) {
    Solution s=new Solution();
    int[] nums={1,15,6,3};
    System.out.println(s.minElement(nums));
}   