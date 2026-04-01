class MyHashSet {
private:
vector<bool> hashSet;
public:
    MyHashSet() : hashSet(1000000, false) {
    }
    
    void add(int key) {
        this->hashSet[key]= true;
        
    }
    
    void remove(int key) {
        this->hashSet[key]= false;
    }
    
    bool contains(int key) {
        return(this->hashSet[key]==true);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */