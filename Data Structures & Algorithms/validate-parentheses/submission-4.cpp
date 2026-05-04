class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto a : s){
            if( a == '(' || a == '{'|| a == '['){
                st.push(a);
            }
            else if(a == ')' || a  == '}'|| a  == ']'){
                if(st.empty()){
                    return false;;
                }
                char top  = st.top();
                if((a == ')' && st.top() != '(')||
                    (a == '}' && st.top() != '{')||
                    (a == ']' && st.top() != '[')){
                    return false;
                }
                st.pop();
            }
            
        }
        return st.empty();
   }
};
