class MyHashSet {
public:
    unordered_set<int> st;
    MyHashSet() {
    }
    
    void add(int key) {
        this->st.insert(key);
    }
    
    void remove(int key) {
        this->st.erase(key);
    }
    
    bool contains(int key) {
        return this->st.contains(key);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */