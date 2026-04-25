class RandomizedSet {
    int size;
    unordered_map<int,int>m;
public:
    RandomizedSet() {
        size = 0;
    }
    
    bool insert(int val) {
        if (m.count(val)) return false;

        m[val]=1;
        size++;
        return true;
    }
    
    bool remove(int val) {
        if (m.count(val) == 0) return false;

        m.erase(val);
        size--;
        return true;
    }
    
    int getRandom() {
        int i = rand() % size;
        auto it = m.begin();
        advance(it, i);
        return it->first;
    }
};
