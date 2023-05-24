/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
*/

class Solution {
public:
    int searchInsert(vector<int>&v, int x) {
        int low=0;
        int res=-1;
        int high=v.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(v[mid]==x){
                return mid;
            }
            else if(v[mid]>x){
                high=mid-1;
                res=mid;
            }
            else{
                low=mid+1;
            }
        }
        if(res==-1){
            return v.size();
        }
        return res;
    }
};