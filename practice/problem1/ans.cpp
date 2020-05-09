class Solution {

public:

    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> num_map;

        auto num_idx = 0;

        for(auto num: nums) {

            int candidate_num = target - num;

            if(num_map.find(candidate_num) != num_map.end()) {

                return vector<int> {num_idx, num_map[candidate_num]};

            } 

            

            num_map[num] = num_idx;

            num_idx++; 

        }

        

        return vector<int> {};

    }

};
