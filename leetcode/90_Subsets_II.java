class Solution {
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> result= new ArrayList<>();
        PossibleList(nums,result,new ArrayList<>(),0);
        return result;
    }
    public static void PossibleList(int []nums,List<List<Integer>>result, List<Integer>current, int start){
        result.add(new ArrayList<>(current));
        for(int i=start;i<nums.length;i++){
            if(i>start && nums[i]==nums[i-1]) {continue;}
            current.add(nums[i]);
            PossibleList(nums,result,current,i+1);
            current.remove(current.size()-1); 
        }
    }
}