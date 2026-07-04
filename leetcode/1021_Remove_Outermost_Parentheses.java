class Solution {
    public String removeOuterParentheses(String s) {
        int open=0;
        StringBuilder res=new StringBuilder();
        for(char c:s.toCharArray()){
            if(c=='('){
                if(open>0){
                    res.append('(');
                }
                open++;
            }
            else{
                open--;
                if(open>0)res.append(')');
            }
        }
        return res.toString();
    }
}