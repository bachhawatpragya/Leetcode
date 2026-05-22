import java.util.*;
class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int low=1;
        int high= Arrays.stream(piles).max().getAsInt();
        
        while(low<=high){
            int mid=low+(high-low)/2;
            long k=0;
            for(int i:piles){
                k+=(mid+i-1)/mid;
                if (k > h) {
                    break;
                }
            }
            if(k<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
    public static void main(String[] args) {
        Solution sol = new Solution();
        int[] piles = {3, 6, 7, 11};
        int h = 8;
        System.out.println(sol.minEatingSpeed(piles, h)); // Output: 4
    }
}
