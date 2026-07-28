class Solution {
public:
    vector<int> medianArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] <= nums2[j]) {
                result.push_back(nums1[i++]);
            } else {
                result.push_back(nums2[j++]);
            }
        }

        while (i < nums1.size())
            result.push_back(nums1[i++]);

        while (j < nums2.size())
            result.push_back(nums2[j++]);

        return result;
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result = medianArray(nums1, nums2);

        int n = result.size();

        if (n % 2 == 1)
            return result[n / 2];

        return (result[n / 2] + result[n / 2 - 1]) / 2.0;
    }
};