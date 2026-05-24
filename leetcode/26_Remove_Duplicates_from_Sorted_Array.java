import java.util.*;

class Solution {
    public int removeDuplicates(int[] nums) {
        if(nums.length==0){
            return 0;
        }
        int k=1;
        for(int i=1;i<nums.length;i++){
            if(nums[i]!=nums[i-1]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
    public static void main(String[] args) {
        Solution s=new Solution();
        int[] nums={1,1,2};
        System.out.println(s.removeDuplicates(nums));
    }
}
