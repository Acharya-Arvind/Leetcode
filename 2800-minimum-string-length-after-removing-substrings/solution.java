class Solution {
    public int minLength(String s) {
       Stack<Character> st=new Stack<>();
       for(int i=0;i<s.length();i++){
        if(st.empty()){
            st.push(s.charAt(i));
            continue;
        }
        if(s.charAt(i)=='B' && st.peek()=='A'){
            st.pop();
            continue;
        }
         if(s.charAt(i)=='D' && st.peek()=='C'){
            st.pop();
            continue;
        }
        st.push(s.charAt(i));
       } 
       return st.size();
    }
}
