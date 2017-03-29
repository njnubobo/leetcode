class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double result;
        int tar;
        int m = nums1.size();
        int n = nums2.size();
        if ((m + n) % 2){
            tar = (m + n)/2 + 1;
        }else{
            tar = (m + n)/2;
        }
        vector<int> temp;
        int i=0,j=0;
        while(i < m || j < n){
            if (m == 0){
                temp = nums2;
                break;
            }
            if (n==0){
                temp = nums1;
                break;
            }
            
            if ( j == n || (i<m && nums1[i] < nums2[j])){
                temp.push_back(nums1[i]);
                i++;
            }else{
                temp.push_back(nums2[j]);
                j++;
            }
        }
        for (vector<int>::iterator it = temp.begin();it!=temp.end();it++){
            cout<<*it;
        }
        if ((m + n)%2){
            return temp[tar-1];
        }else{
            result = double (temp[tar-1] + temp[tar])/2;
            return result;
        }
    }
};
