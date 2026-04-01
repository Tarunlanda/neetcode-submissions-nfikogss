class MyHashSet {
private:
vector<int> hashSet;
public:
    MyHashSet() : hashSet(1000000, 0) {
    }
    
    void add(int key) {
        this->hashSet[key]= 1;
        
    }
    
    void remove(int key) {
        this->hashSet[key]= 0;
    }
    
    bool contains(int key) {
        return(this->hashSet[key]==1);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */