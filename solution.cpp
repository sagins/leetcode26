class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int lastUnique = nums[0];
        int k = 1;

        for (int i = 1; i < nums.size(); i++){
            if (nums[i] > lastUnique){
                lastUnique = nums[i];
                nums[k] = nums[i];
                k++;
            }
        }
        
        return k;
        
    }
};
