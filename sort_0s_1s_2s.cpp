#include <bits/stdc++.h>
using namespace std;
  
  void sortZeroOneTwo(vector<int>& nums, int n) {

// Method - 1 Sorting function  
        // sort(nums.begin(), nums.end());

// Method - 2 Brute Force approach

        // int count0 = 0, count1 = 0, count2 = 0;
        // for(int i = 0 ;i < n; i++)
        // {
        //     if(nums[i] == 0)
        //         count0++;
        //     else if(nums[i] == 1)
        //         count1++;
        //     else
        //         count2++;
        // }

        // for(int i = 0 ;i < n; i++)
        // {
        //     if(count0-- > 0)
        //         nums[i] = 0;
        //     else if(count1-- > 0)
        //         nums[i] = 1;
        //     else
        //         nums[i] = 2;
        // }

// Method - 3 using pointers  
        int left = 0, mid = 0, right = n - 1;
        while(mid <= right) {
            if(nums[mid] == 0) {
                swap(nums[left], nums[mid]);
                left++;
                mid++;
            }
            else if(nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[right]);
                right--;
            }
        }  
        for(int i = 0; i < n; i++){
            cout << nums[i] << " ";
        }
        cout << endl;
    }

    int main(){

        vector<int> arr;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            arr.push_back(x);
        }

        sortZeroOneTwo(arr, n);

        return 0;
    }