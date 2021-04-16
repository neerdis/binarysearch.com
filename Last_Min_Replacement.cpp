vector<int> solve(vector<int>& nums) {
    if(!nums.size())
    return nums;
    int small = nums[0];
    nums[0] = 0;
    for(int i=1;i<nums.size();i++){
        int  temp = nums[i];
        nums[i] = small;
        small = (temp>small)? small: temp;
    }
    return nums;
    
}