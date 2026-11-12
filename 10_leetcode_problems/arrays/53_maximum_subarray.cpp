class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size= nums.size();
        int maxSum= INT_MIN, currSum=0;      // maxsum stores the maximum subarray sum found so far
                                             //currsum stores sum of current subarray
        for(int i=0; i<size; i++){
            currSum += nums[i];              //add the current element to the running sum
            maxSum = max(currSum, maxSum);   //update maximum sum if needed
            if(currSum<0){
                currSum=0;                   //reset because a negative sum reduces future subarray sums
            }
        }
        return maxSum;                      //return the maximum subarray sum
    }
};
