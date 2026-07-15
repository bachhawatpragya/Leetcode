class Solution {
    public int numOfSubarrays(int[] arr, int k, int threshold) {
        int n=arr.length;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        int cnt=0;
        if(sum/k>=threshold)cnt++;
        for(int i=k;i<n;i++){
            sum+=arr[i];
            sum-=arr[i-k];
            if(sum/k>=threshold)cnt++;
        }
        return cnt;
    }
}
public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] arr = {2, 1, 3, 4, 1};
        int k = 3;
        int threshold = 2;
        int result = solution.numOfSubarrays(arr, k, threshold);
        System.out.println(result); // Output: 3
    }
}   