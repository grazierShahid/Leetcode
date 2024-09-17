class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size(), i=0, j=0, k=0;
        int arr[n+m];
        while(i<n && j<m){
            if(nums1[i] <= nums2[j])
                arr[k++] = nums1[i++];
            else arr[k++] = nums2[j++];
        }

        while(i<n) arr[k++] = nums1[i++];
        while(j<m) arr[k++] = nums2[j++];

        double ans;
        if(k&1) ans = (double)(arr[k/2]);
        else ans =(arr[k/2] + arr[k/2-1])/2.0;
        return ans;
    }
};