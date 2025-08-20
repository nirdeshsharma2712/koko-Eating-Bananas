class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int mx = INT_MIN , ans = 0;
        for(int i=0;i<piles.size();i++) mx = max(mx,piles[i]);
        int i = 1 , j = mx;
        while(i<=j){
            int mid = i + (j-i)/2;
            long long hours = 0;
            for(int k=0;k<piles.size();k++){
                if(piles[k]<mid) hours++;
                else{
                    if(piles[k]%mid==0) hours+=(long long)piles[k]/mid;
                    else hours += (long long)(piles[k]/mid)+1;
                }
            }
            if(hours>h) i = mid+1;
            else{
                ans = mid;
                j = mid-1;
            }
        }
        return ans;
    }
};
