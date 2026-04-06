class Solution {
    public List<Integer> targetIndices(int[] nums, int target) {
        int less=0,equal=0;
        for(int i:nums){
            if(i==target)equal++;
            else if(i<target)less++;
        }
        List<Integer> res= new ArrayList<>();
        for(int i=0;i<equal;i++){
            res.add(less+i);
        }
        return res;
    }
}