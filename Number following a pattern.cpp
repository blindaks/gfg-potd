class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        string res="";
        stack<int> st;
        for(int num=0;num<=S.size();num++){
            st.push(num+1);
            if(S[num]=='I' || num==S.size()){
                while(!st.empty()){
                    res+=to_string(st.top());
                    st.pop();
                }
            }
        }
        return res;
    }
};
