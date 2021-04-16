bool solve(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int low = 0, high = n-1;
    while(low<high){
        if(nums[low]+nums[high]==k)
        return true;
        else if(nums[low]+nums[high]<k)
        low++;
        else
        high--;
    }
    return false;
    
    
}