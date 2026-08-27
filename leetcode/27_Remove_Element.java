import java.util.*;
class Solution {
    public int removeElement(int[] nums, int val) {
        int k=0;
        for(int i:nums){
            if(i!=val){
                nums[k++]=i;
            }
        }
        return k;
    }
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] nums = {3, 2, 2, 3};
        int val = 3;
        int k = solution.removeElement(nums, val);
        System.out.println("New length after removing " + val + ": " + k);
        System.out.print("Modified array: ");
        for (int i = 0; i < k; i++) {
            System.out.print(nums[i] + " ");
        }
    }
}