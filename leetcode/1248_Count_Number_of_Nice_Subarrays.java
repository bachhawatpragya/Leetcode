class Solution {
    public int numberOfSubarrays(int[] nums, int k) {
        int sum=0,ans=0;
        HashMap<Integer,Integer>mp=new HashMap<>();
        mp.put(0,1);
        for(int x:nums){
            if(x%2==1)sum++;
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
        Solution s = new Solution();
        int[] nums = {1,1,2,1,1};
        int k = 3;
        int ans = s.numberOfSubarrays(nums, k);
        System.out.println(ans);
    }
}