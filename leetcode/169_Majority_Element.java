class Solution {
    public int majorityElement(int[] nums) {
        int cnt=0,major=0;
        for(int n:nums){
            if(cnt==0){major=n;}

            if(major==n) ++cnt;
            else --cnt;
        }
        return major;
    }
}