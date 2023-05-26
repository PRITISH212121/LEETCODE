/*
Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

[4,5,6,7,0,1,2] if it was rotated 4 times.
[0,1,2,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

Given the sorted rotated array nums of unique elements, return the minimum element of this array.

You must write an algorithm that runs in O(log n) time.
*/
/*
Input: nums = [3,4,5,1,2]
Output: 1
Explanation: The original array was [1,2,3,4,5] rotated 3 times.
*/

class Solution {
public:
    int findMin(vector<int>&v) {
        int n=v.size();
        long low=0;
        long high=v.size()-1;
        if(v[0]<=v[n-1]){
                return v[0];}
      
        while(low<=high){
            int mid=(low+high)/2;
            if(mid!=0 && v[mid]<v[mid-1]){
                return v[mid];
            }else if(v[mid]>v[n-1]){
                low=mid+1;
            }else if(v[mid]<v[n-1]){
                high=mid-1;
            }
        }
        return 0;
    }
};