#include<list>
#include<unordered_map>
using namespace std;

class LRUCache {
    list<int> lst;
    unordered_map<int,pair<int,list<int>::iterator>> mp;
    int sz;
public:
    LRUCache(int capacity) {
        sz=capacity;
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end()){
            return -1;
        }
        auto itr=mp[key].second;
        lst.erase(itr);
        lst.push_back(key);
        mp[key].second = --lst.end();
        return mp[key].first;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            auto itr=mp[key].second;
            lst.erase(itr);
        }
        lst.push_back(key);
        mp[key] = {value,--lst.end()};
        
        if(mp.size()>sz){
            int key=*lst.begin();
            mp.erase(key);
            lst.pop_front();
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */