class solution {
public:
    int removeDuplicates(vector<int>& nums) {
	    if (nums.size() == 0)  return 0;
	    int count = 0;
	    for (int i = 0; i < nums.size() - 1; i++) {
	    	if (nums[i] == nums[i + 1]) count++;
	    	else if (count != 0) nums[i - count] = nums[i];
	    }
	    nums[nums.size() - 1 - count] = nums[nums.size() - 1];
	    return nums.size() - count;
    }
};