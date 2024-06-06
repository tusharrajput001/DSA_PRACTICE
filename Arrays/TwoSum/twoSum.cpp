// BRUTE FORCE 

#include<bits/stdc++.h>
using namespace std;

// string twoSum(int n, vector<int> &arr, int target){
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1 ; j < n; j++)
//         {
//             if(arr[i] + arr[j] == target) return "YES";
//         }
//     }
//     return "NO";
    
// }



// vector<int> twoSum(int n, vector<int> &arr, int target){
//     vector<int> ans;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if(arr[i] + arr[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return {-1,-1};
    
// }
string twoSum(int n, vector<int> &arr, int target) {
    unordered_map<int,int> mpp;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int moreNeeded = target - num;
        if(mpp.find(moreNeeded) != mpp.end()){
            return "YES";
        }
        mpp[num] = i;
    }
    return "NO";
    
}



int main(){
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    // vector<int> ans = twoSum(n, arr, target);
    // cout << "This is the answer for variant 2: [" << ans[0] << ", "<< ans[1] << "]" << endl;
    return 0;
}