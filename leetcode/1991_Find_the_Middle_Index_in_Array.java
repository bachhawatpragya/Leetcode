import java.util.*;
class Solution {
    public int findMiddleIndex(int[] nums) {
        int left=0;
        int summ = Arrays.stream(nums).sum();
        for(int i=0;i<nums.length;i++){
            if(left==summ-left-nums[i])return i;
            left+=nums[i];
        }
        return -1;
    }
}
public class Main {
    public static void main(String[] args) {
        Solution s = new Solution();
        int[] nums = {2,3,-1,8,4};
        System.out.println(s.findMiddleIndex(nums));
    }
}