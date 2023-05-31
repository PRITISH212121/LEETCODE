/*
Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie.

Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with; and each cookie j has a size s[j]. If s[j] >= g[i], we can assign the cookie j to the child i, and the child i will be content. Your goal is to maximize the number of your content children and output the maximum number.

 Input: g = [1,2,3], s = [1,1]
Output: 1
Explanation: You have 3 children and 2 cookies. The greed factors of 3 children are 1, 2, 3. 
And even though you have 2 cookies, since their size is both 1, you could only make the child whose greed factor is 1 content.
You need to output 1.
Example 2:

Input: g = [1,2], s = [1,2,3]
Output: 2
Explanation: You have 2 children and 3 cookies. The greed factors of 2 children are 1, 2. 
You have 3 cookies and their sizes are big enough to gratify all of the children, 
You need to output 2.
*/

#include <bits/stdc++.h>
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // for(int i=0;i<g.size();i++){
        //     for(int j=i+1;j<g.size();j++){
        //         if(g[j]<g[i]){
        //             int temp=g[j];
        //             g[j]=g[i];
        //             g[i]=temp;
        //         }
        //     }
        // }
        // for(int i=0;i<s.size();i++){
        //     for(int j=i+1;j<s.size();j++){
        //         if(s[j]<s[i]){
        //             int temp=s[j];
        //             s[j]=s[i];
        //             s[i]=temp;
        //         }
        //     }
        // }
    
        std::sort(s.begin(),s.end());
        std::sort(g.begin(),g.end());
     
        int i=0,j=0;
        int cnt=0;
        if(s.size()==0||g.size()==0){
            return 0;
        }
        while(i<g.size()&&j<s.size()){
            if(g[i]<=s[j]){
                cnt++;
                i++,j++;
            }else{
                j++;
            }
        }
        return cnt;
    }
};