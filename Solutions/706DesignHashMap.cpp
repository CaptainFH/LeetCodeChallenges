class MyHashMap {
public:
    vector<int> storage;
    MyHashMap() {
        vector<int> storage2(10,-1);
        storage =storage2;
    }
    
    void put(int key, int value) {
        if(storage.size() < (key+1)){
            int temp = storage.size();
            storage.resize(key+1);
            for(temp; temp < storage.size(); temp++){
                storage.at(temp) = -1;
            }
        }
        storage.at(key) = value;
    }
    
    int get(int key) {
        if (storage.size() < (key+1)){
            return -1;
        }
        return storage.at(key);
    }
    
    void remove(int key) {
        if(storage.size() < (key+1)){
            
        }else{
            storage.at(key) = -1;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
