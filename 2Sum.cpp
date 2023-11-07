class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size(); // size of the vector
        for (int i = 0; i < size - 1; i++){ // iterate through the vector except the last element
            for (int j = i + 1; j < size; j++){ // iterate through the vector except the first element
                if (nums[i] + nums[j] == target){ // if the sum of the two elements is equal to the target
                    return {i, j}; // return the indices of the two elements
                }
            }
        }
        return {}; // return an empty vector if no two elements sum up to the target
    }
};

/* Thought Process:
Initially I thought this was going to be a fibonacci sequence problem, but then I realized that it was a two sum problem.
Since it was asking for two indices, I decided to use a nested for loop to iterate through the vector.
I got this idea thinking about pairs and the possible combinations of pairs.

Time Complexity: O(n^2)
Space Complexity: O(1)
*/