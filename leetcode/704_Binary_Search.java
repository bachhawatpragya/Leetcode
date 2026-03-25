java.util.*;

class Solution {
    public int search(int[] nums, int target) {
        int idx= Arrays.binarySearch(nums,target);
        if(idx<0)return -1;
        return idx;
    }
    public static void main(String[] args) {
        Solution s = new Solution();
        System.out.println(s.search(new int[]{-1,0,3,5,9,12},9));
    }
}