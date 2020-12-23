class MyHashMap {
public:
    /** Initialize your data structure here. */
    vector<vector<pair<int,int>>> m;
    MyHashMap() {
        m.resize(1000,{});
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        int hashnum = key % 1000;
        for(int i=0; i<m[hashnum].size(); i++){
            if(m[hashnum][i].first == key){
                m[hashnum][i].second = value;
                return;
            }
        }
        m[hashnum].push_back({key,value});
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        int hashnum = key%1000;
        for(int i=0; i<m[hashnum].size(); i++){
            if(m[hashnum][i].first == key){
                return m[hashnum][i].second;
            }
        }
        return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        int hashnum = key%1000;
        for(int i=0; i<m[hashnum].size(); i++){
            if(m[hashnum][i].first == key){
                m[hashnum].erase(m[hashnum].begin()+i);
                return;
            }
        }
    }
};
