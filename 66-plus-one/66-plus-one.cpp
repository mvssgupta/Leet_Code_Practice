class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]==9) //If the digit is 9 then make it zero dont reset the flag
                digits[i]=0;
            else{
                digits[i]=digits[i]+1;
                carry=0;                //if the digit is not 9 then we can simple add zero and make the flag to zero
                break;
            }
        }
        if(carry)         //if flag is not reseted then insert 1 at the begining of the vector and return else return the vector
            digits.insert(digits.begin(),1);
        return digits;
    }
};