class Solution
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        double median_index = (nums1.size() - 1.0) / 2.0;
        if ((nums1.size() - 1) % 2 == 0)
        {
            return nums1[median_index];
        }
        else
        {
            return (nums1[median_index] + nums1[median_index + 1.0]) / 2.0;
        }
    }
};