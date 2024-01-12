#include <iostream>
#include <vector>
using namespace std;

class solution
{
    void merge(vector<int>& nums1,int n,vector<int> &nums2,int m)
    {
        int i=0,j=0,k=0; 
        int nums3[n+m];
        while(i<n && j<m)
        {
            if(nums1[i] < nums2[j])
            {
                nums3[k++] = nums1[i++];
            }
            else
            {
                nums3[k++] = nums2[j++];
            }
        }
        while(i<n)
        {
            nums3[k++] = nums1[i++];
        }
        while(j<m)
        {
            nums3[k++] = nums2[j++];
        }
    }
};

