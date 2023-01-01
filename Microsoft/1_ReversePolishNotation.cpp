class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int i = 0;
        int op1, op2;
        for(int i=0; i<tokens.size(); i++){
              
            if(tokens[i]!="+" && tokens[i]!="/" && tokens[i]!="*" && tokens[i]!="-"){
                s.push(stoi(tokens[i]));
            }
            else{
                op1 = s.top(); 
                s.pop();
                op2 = s.top();
                s.pop();

                switch(tokens[i]){
                    case '+' :
                        s.push(op1 + op2);
                        break;
                    case '-' :
                        s.push(op1 - op2);
                        break;
                    case '*' :
                        s.push(op1 * op2);
                        break;
                    case '/' :
                        s.push(op1 / op2);
                        break;
                }
            }
        }
        return s.top();
    }
};