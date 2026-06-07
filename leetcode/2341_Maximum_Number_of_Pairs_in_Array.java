import java.util.Arrays;

class Solution {
    public int[] numberOfPairs(int[] nums) {
        int[]total=new int[101];
        int ans[]=new int[2];
        for(int i:nums){
            total[i]++;
        }
        for(int i=0;i<total.length;i++){
            if(total[i]==0)continue;
            int pair=total[i]/2;
            int rem=total[i]%2;
            ans[0]+=pair;
            ans[1]+=rem;
        }
        return ans;
    }
    public static void main(String[] args) {
        Solution s=new Solution();
        int[]nums={1,3,2,1,3,2,2};
        int[]ans=s.numberOfPairs(nums);
        for(int i:ans){
            System.out.print(i+" ");
        }
    }
}
