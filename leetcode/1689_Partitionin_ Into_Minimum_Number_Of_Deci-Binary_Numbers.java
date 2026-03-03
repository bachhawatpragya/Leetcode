class Solution {
    public int minPartitions(String n) {
        int maximum=0;
        for(int i=0;i<n.length();i++){
            char c= n.charAt(i);
            int digit=c-'0';
            if(digit>maximum){
                maximum=digit;
            }
        }
        return maximum;
    }
}