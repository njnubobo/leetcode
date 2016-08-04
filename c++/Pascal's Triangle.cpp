class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        vector<int> first;
        first.push_back(1);
        if(numRows > 0){ 
            triangle.push_back(first);
        }
        vector<int> temp;
        for(int i = 2; i <= numRows; i++){
            temp = triangle[i - 2];
            vector<int> next;
            next.push_back(1);
            for(int j = 1; j < temp.size(); j++){
                next.push_back(temp[j - 1] + temp[j]);
            }
            next.push_back(1);
            triangle.push_back(next);
        }
        return triangle;
    }
};