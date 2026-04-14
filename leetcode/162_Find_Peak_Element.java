class Solution {
    public int findPeakElement(int[] num) {
        int l=0,h=num.length-1;
        while(l<h){
            int mid=l+(h-l)/2;
            if(num[mid]>num[mid+1]){
                h= mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
}