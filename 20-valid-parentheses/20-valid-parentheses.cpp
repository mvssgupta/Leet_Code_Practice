class Solution {
public:
    bool isValid(string s) {
        //I have assigned negative numbers to open braces and positive numbers to close braces
        unordered_map<char,int> symbols = {{'[', -1}, {'(', -2}, {'{', -3}, {']', 1}, {')', 2}, {'}', 3}};
        stack<char> brackets;
        for(auto symbol:s){//iterative over the given string.
            if(symbols[symbol]<0){  //if the current character is open brace(Such that negative number)then push it into the stack.
                brackets.push(symbol);
            }else{
                if(brackets.empty()) return false; //if the we have pushed some open braces and there are no closed braces for them we have to return false.
                if((symbols[brackets.top()] + symbols[symbol])!=0) return false; //if the closed brace doesn't matches with the open brace present at the top then we have to return false.
                brackets.pop();  //if it closed brace matches with the open brace present at the top then we have to pop the top of the stack.
            }
        }
    if(brackets.empty()) return true; //upon travesing the whole string if the stack is empty then we have to return true else we have to return false.
    return false;
    }
};