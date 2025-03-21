class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    
            // pointer to last non-zero element in nums1
            int i = m - 1;
            // pointer to  element in nums2
            int j = n - 1;
            // pointer to last element in nums1
            int k = m + n - 1;
    
            while (i >= 0 && j >= 0) {
    
                if (nums1[i] > nums2[j]) {
                    nums1[k] = nums1[i];
                    i--;
                } // if condition ends here
                else {
                    nums1[k] = nums2[j];
                    j--;
                } // else ends here
                k--;
            } // while loop ends here
    
            // if there are reamining elements in nums2 left , copy them over
    
            while (j >= 0) {
                nums1[k] = nums2[j];
                j--;
                k--;
            } // while ends here
        } // function merge ends here
    }; // class solution ends here