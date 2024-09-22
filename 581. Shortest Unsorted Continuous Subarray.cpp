
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
    //     vector<int> temp = nums;
    //     sort(temp.begin() , temp.end());
    //     vector<int> unsort ;
    //     int m = nums.size() , n = temp.size();
    //     int length = 0 ;
    //     // if(nums == temp){
    //     //     length = 0;
    //     // }
    //     // else{
    //         //  for(int i = 0 ; i < n ; i++){
    //         //     for(int j = 0 , i=0 ; i<n ,j < m   ; i++ ,j++){
    //         //         if(nums[i] != nums[j]){
    //         //             unsort.push_back(nums[j]);
    //         //         }
    //         //     }
    //     //     length = unsort.size();
    //     // }
    //     if(nums != temp){
    //         //  for(int i = 0 ; i < n ; i++){
    //             for(int j = 0 , i=0 ; i<n ,j < m   ; i++ ,j++){
    //                 if(nums[i] != nums[j]){
    //                     unsort.push_back(nums[j]);
    //                 }
    //             }
    //     }else{
    //         length = 0;
    //     }
    //     return length;

    // }

    int n = nums.size();
    int l = 0 , r = n-1 , maxn = 0 , minn = n-1;
    for(int i = 0 ; i < n ; i++){
        if(nums[i] > nums[maxn]){
            maxn = i;
        }
        else if(nums[maxn] > nums[i])
        {
            l = i;
        }
    if(nums[n-i-1] < nums[minn]){
        minn = n-i-1;
    }
    else if(nums[n-i-1] > nums[minn]){
        r = n - i -1;
    }

    }
    if(r >= l){
        return 0 ;
    }
    return l-r+1;
    }
};
