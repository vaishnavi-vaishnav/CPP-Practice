 #include<bits/stdc++.h>
 using namespace std;
 
 class solution{

 public:
     int rotation(int arr[], int n){

  int left = 0, right = n - 1;
    while (left <= right) {
        if (arr[left] <= arr[right]) {
            // Case 1: Array is already sorted
            return left;
        }
        
        int mid = ( left + right ) / 2;
        int next = mid + 1;
        int prev = mid - 1;
        
        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev]) {
            // Case 2: Mid element is the minimum element
            return mid;
        }
        else if (arr[mid] <= arr[right]) {
            // Case 3: Right half is sorted, search left half
            right = mid - 1;
        }
        else if (arr[mid] >= arr[left]) {
            // Case 4: Left half is sorted, search right half
            left = mid + 1;
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
        cout << "Enter the size of the array: ";
        cin >> n;
        int a[n];

        for(int i = 0; i < n; i++){
            cout <<"Enter " << i << " element: ";
            cin >> a[i];
        }

        solution ob;
        auto ans = ob.rotation(a,n);
        cout << ans << "\n";


    // }
    return 0;
}
    