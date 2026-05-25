import java.util.*;
class Solution {
    public int lengthOfLongestSubstring(String s) {
        int l=0,r=0;
        int n=s.length();
        int max_len=0;
        Map<Character, Integer> mp= new HashMap<>();
        while(l<=r && r<n){
            char current= s.charAt(r);
            if(mp.containsKey(current)){
                l=Math.max(mp.get(current)+1, l);
            }
            mp.put(current, r);
            max_len=Math.max(max_len, r-l+1);
            r++;
        }
        return max_len;
    }
    public static void main(String[] args) {
        Solution s=new Solution();
        String str="abcabcbb";
        System.out.println(s.lengthOfLongestSubstring(str));
    }
}