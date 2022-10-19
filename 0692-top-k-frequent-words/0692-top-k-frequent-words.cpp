
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        class comparator { //refered from GFG https://www.geeksforgeeks.org/comparator-class-in-c-with-examples/
        public:
             bool operator() (pair<int,string> &p1,pair<int,string> &p2) {
                if(p1.first==p2.first) return p1.second<p2.second;
                else return p1.first>p2.first;
            }
        };
        unordered_map<string,int> m;
        for(auto i:words){
            m[i]++;
        }
        priority_queue<pair<int,string>,vector<pair<int,string>>,comparator> minh;
        for(auto j : m){
            minh.push({j.second,j.first});
            if(minh.size()>k) minh.pop();
        }
        words.clear();
        while(!minh.empty()){
            words.push_back(minh.top().second);
            minh.pop();
        }
        reverse(words.begin(),words.end());
        return words;
    }
};