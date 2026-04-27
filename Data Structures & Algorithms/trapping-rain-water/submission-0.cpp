class Solution {
public:
    int trap(vector<int>& height) {
       if(height.empty()) return 0;
       int n = height.size();
       int res = 0;
       for(int i = 0 ; i < n ; i++){
        int lftMax = height[i];
        int rgtMax = height[i];
        for(int j = 0 ; j < i ; j++){
            lftMax = max(lftMax,height[j]);
        }
        for(int j = i+1 ; j < n ; j++){
            rgtMax = max(rgtMax,height[j]);
        }
        res += min(lftMax,rgtMax) - height[i];
       }return res;
    }
};
