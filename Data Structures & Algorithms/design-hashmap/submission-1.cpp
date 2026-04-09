class MyHashMap {
    private:
        vector<int> hashSet;
    public:
        MyHashMap() : hashSet(1000000, -1) {
            
        }
        
        void put(int key, int value) {
            this->hashSet[key]= value;
        }
        
        int get(int key) {
            return this->hashSet[key];
        }
        void remove(int key) {
            this->hashSet[key]=-1;
        }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */