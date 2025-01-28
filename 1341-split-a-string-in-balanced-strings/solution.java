class Solution {
    public int balancedStringSplit(String s) {
        int c=0;
        Stack<Character> stack=new Stack<>();
        stack.push(s.charAt(0));
        for(int i=1;i<s.length();i++){
            if(stack.size()==0){
            c++;
            }
            if(stack.size()!=0 && stack.peek()=='R' && s.charAt(i)=='L'){
                stack.pop();
            }
            else if(stack.size()!=0 && stack.peek()=='L' && s.charAt(i)=='R'){
                stack.pop();
            }
            else{
                stack.push(s.charAt(i));
            }
            
        }
        if(stack.size()==0) c++;
        return c;
    }
}
