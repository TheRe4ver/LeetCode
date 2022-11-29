#include <iostream>
#include <time.h>
#include <vector>
#include <unordered_map>

using namespace std;

class RandomizedSet
{
    
private:
    vector<int_fast64_t> array;
    unordered_map<int_fast64_t, int_fast64_t> indexes;
public:
    
    RandomizedSet() 
    {
       
    }

   
    bool insert(int_fast64_t val)
    {
        if (indexes.find(val) != indexes.end())
            return false;
        else 
        {
            array.push_back(val);  
            indexes[val] = array.size() - 1;
            return true;
        }
    }

    
    bool remove(int_fast64_t val)
    {
        if (indexes.find(val) == indexes.end()) 
            return false;
        else 
        {
            int_fast64_t last = array.back();
            array[indexes[val]] = array.back(); 
            array.pop_back();	   
            indexes[last] = indexes[val];	   
            indexes.erase(val);	   
            return true;
        }
    }

   
    int getRandom() 
    {
        return array[rand() % array.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

void main()
{
    RandomizedSet* obj = new RandomizedSet();
    int val = 1;
    bool param_1 = obj->insert(val);
    bool param_2 = obj->remove(val);
    int param_3 = obj->getRandom();
}