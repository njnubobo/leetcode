class Solution {
public:
    vector< vector<int> > threeSum(vector<int>& nums) {
        int len = nums.size();
        vector< vector<int> > result;
        
        sort(nums.begin(), nums.end());
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it){
        	//cout << (*it);
		}
        for(int i = 0; i < len - 2; i++){
            int l = i + 1;
            int r = nums.size() - 1;
            //cout<< "l="<<l << "r="<<r << endl;
            while (l < r){
                if (nums[l] + nums[r] == - nums[i]){
                    vector<int> a;
                    a.push_back(nums[i]);
                    a.push_back(nums[l]);
                    a.push_back(nums[r]);
                    result.push_back(a);
                    while(nums[l] == nums[l+1]){
                        l++;
                    }
                    l++;
                    while(nums[r] == nums[r-1]){
                        r--;
                    }
                    r--;
                }else{
                    if (nums[l] + nums[r] > -nums[i]){
                        r--;
                        //cout<< "r:" << r <<endl;    
                    }else{
                        l++;
                        //cout<< "l:" << l <<endl;
                    }
                }
            }
            while (nums[i] == nums[i+1]){
            	i ++ ;
			}
        }
    return result;
}
    
};

    
