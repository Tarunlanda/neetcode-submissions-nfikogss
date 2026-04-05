class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int size = operations.size();
        for(int i=0;i<size;i++)
        {
            if(operations[i][0]=='D')
            {
                int temp = st.top();
                temp = temp*2;
                st.push(temp);
            }
            else if(operations[i][0]=='+')
            {
                int temp1 = st.top();
                st.pop();
                int temp2 = st.top();
                st.push(temp1);
                st.push(temp1+temp2);
            }
            else if(operations[i][0]=='C')
            {
                st.pop();
            }
            else
            {
                st.push(stoi(operations[i]));
            }
        }
        int score = 0;
        while(!st.empty())
        {
            score += st.top();
            st.pop();
        }
        return score;
    }
};