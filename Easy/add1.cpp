class Solution {
public:
    vector<int> plusOne(vector<int>&v) {
        int size=v.size();
        int sum=1;
        v[size-1]+=1;
        int x=size-1;
        while(v[x]>9&& x!=0){
            v[x]=0;
            v[x-1]+=1;
            x--;
        }
        if(v[0]==10){
            v[0]=1;
            v.push_back(0);
        }
        return v;
    }
};