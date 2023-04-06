 #include<bits/stdc++.h>
 using namespace std;
 
 class solution{

 public:
     int findkrotation(int arr[], int n){

  int low = 0, high = n - 1;
    while (low <= high) {
        if (arr[low] <= arr[high]) {
            // Case 1: Array is already sorted
            return low;
        }
        
        int mid = ( low + high ) / 2;
        int next = mid + 1;
        int prev = mid - 1;
        
        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev]) {
            // Case 2: Mid element is the minimum element
            return mid;
        }
        else if (arr[mid] <= arr[high]) {
            // Case 3: Right half is sorted, search left half
            high = mid - 1;
        }
        else if (arr[mid] >= arr[low]) {
            // Case 4: Left half is sorted, search right half
            low = mid + 1;
        }
    }
    return -1; // Not found
}
};

int main(){
    // int t;
    // cin >> t;
    // while(t--){
        int n;
        cin >> n;
        int a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        solution ob;
        auto ans = ob.findkrotation(a,n);
        cout << ans << "\n";


    // }
    return 0;
}
    