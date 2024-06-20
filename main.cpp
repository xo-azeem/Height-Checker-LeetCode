// Code

class Solution {
public:
    int heightChecker(vector<int>& heights) 
    {
        vector<int> temp;
        vector<int>::iterator ptr;
        for (ptr = heights.begin(); ptr < heights.end(); ptr++)
            temp.push_back(*ptr);

        std::sort(temp.begin(), temp.end());

        int count = 0;

        for (int i = 0; i < heights.size(); i++)
            if (heights[i] != temp[i])
                count++;

        return count;
    }
};
