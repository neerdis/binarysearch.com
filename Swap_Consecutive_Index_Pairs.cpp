vector<int> solve(vector<int>& nums) {
    int i = 0;
    int n = nums.size();
    for(int i=0; i+2<n;i=i+4){
        swap(nums[i],nums[i+2]);
    }
    for(int i=1; i+2<n;i=i+4){
        swap(nums[i], nums[i+2]);
    }
    return nums;

    
}