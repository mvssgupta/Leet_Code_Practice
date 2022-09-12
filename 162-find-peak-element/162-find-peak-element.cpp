class Solution {
public: 
    //                                 /\          \          /
    //                  /\            /  \          \        /
    //                 /  \        /\/    \          \      /
    //                /    \    , /        \   ,      \  , /
    //
    // here in the first figure there is only one peak element , in the second figure we can 
    //observe that there exists two peak elements , so here we can return any one of them.
    //In the third one , the peak element exists at the begining(here the peak element is only greater than its next element since it is the first element) 
    //And similarlly for the fourth one the peak exists at the end(here the peak element is only greater than its previous element , since it is the last element).
    
    //Here the intution is we will search peak element using binary search , we will check whether the 
    //mid element we obtained is greater than it's previous and next elements are not , if it is true then 
    // we can return that element as our peak element.
    int findPeakElement(vector<int>& v) {
        //using binary search techinque
        if(v.size()==1) return 0; //if array has only one element
        int start=0,end=v.size()-1,mid;
        while(start<=end){
            mid = start + (end-start)/2;
            if(mid>0 && mid<v.size()-1) {
                if(v[mid]>v[mid-1] && v[mid]>v[mid+1])   //checking whether it is peak element or not
                    return mid;
                else if(v[mid-1]<v[mid])
                    start=mid+1;
                else 
                    end=mid-1;
            }
            else if(mid==0){    //if the peak element is at first position
                if(v[mid]>v[mid+1])
                    return mid;
                return mid+1;
            }
            else if(mid==v.size()-1){   //if the peak element is at the last position
                if(v[mid]>v[mid-1])
                    return mid;
                return mid-1;
            }
        }
        return 0;
    }
};