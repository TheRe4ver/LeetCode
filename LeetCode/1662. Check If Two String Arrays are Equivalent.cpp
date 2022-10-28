class Solution 
{
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        string first = "";
        string second = "";
        for (auto part : word1)
            first += part;
        for (auto part : word2) 
            second += part;
        if (first == second) 
            return true;
        return false;
    }
};