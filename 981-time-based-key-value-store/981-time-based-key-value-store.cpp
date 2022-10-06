class TimeMap {
public:
    //since here the key is not unique we have to define a combination such that they can be unique
    //here time and key as a combination is unique ,  so we can use a unordered_map with key and timestamp.
     unordered_map<string, unordered_map<int, string>> timeMap;
    TimeMap() {
        //no need of initialiser
    }
    
    void set(string key, string value, int timestamp) {
        timeMap[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        //if there are no values associated with this key then we have to return empty string
        if(timeMap.count(key)==0) return "";
        
         // Iterate on time from 'timestamp' to '1'.
        for (int currTime = timestamp; currTime >= 1; currTime--) {
            // If a value for current time is stored in key's bucket we return the value.
            if (timeMap[key].count(currTime)) {
                return timeMap[key][currTime];
            }
        }
        
        // Otherwise no time <= timestamp was stored in key's bucket.
        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */