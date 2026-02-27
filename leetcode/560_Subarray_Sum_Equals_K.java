import java.util.*;

class Solution {
    public int subarraySum(int[] nums, int k) {
        int ans=0,sum=0;
        // hashmap to optimise the time complexity
        Map<Integer, Integer> mp= new HashMap<>();
        mp.put(0,1);
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
            if(mp.containsKey(sum-k)){
                ans+=mp.get(sum-k);
            }
            mp.put(sum,mp.getOrDefault(sum,0)+1);
        }
        return ans;
    }
}
public class Main {
    public static void main(String[] args) {
        Solution sol = new Solution();
        int[] nums = {1, 1, 1};
        int k = 2;
        System.out.println(sol.subarraySum(nums, k)); // Output: 2
    }
}