// // #include <bits/stdc++.h>
// // using namespace std;
// // int maxi(vector<int>& arr) {
// //     unordered_map<int, int> frequencyMap; // Map to store frequency of each element
// //     int maxFrequency = 0; // Track maximum frequency
// //     int elementOfMaxOccurrence; // Element with maximum occurrence
    
// //     // Traverse the array and calculate frequencies
// //     for (int num : arr) {
// //         // Update the frequency of the current element
// //         frequencyMap[num]++;
        
// //         // If the frequency of the current element exceeds the maximum frequency
// //         // update the maxFrequency and elementOfMaxOccurrence
// //         if (frequencyMap[num] > maxFrequency) {
// //             maxFrequency = frequencyMap[num];
// //             elementOfMaxOccurrence = num;
// //         }
// //     }
    
// //     // Return the element with the maximum occurrence
// //     return elementOfMaxOccurrence;
// // }
// // int main(){
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     int t;
// //     cin>>t;
// //     while(t--){
// //         int n;
// //         cin>>n;
// //         vector<int>arr(n);
// //         for(int i=0;i<n;i++){
// //             cin>>arr[i];
// //         }
// //         bool flag=1;
// //         for(int i=1;i<n;i++){
// //             if(arr[i]!=arr[i-1]){
// //                 flag=0;
// //                 break;
// //             }
            
// //         }
// //         if(flag){
// //             cout<<"-1"<<"\n";
// //         }
// //         else{
// //             int z=maxi(arr);
// //             int ans=0;
// //             int f1=0;
// //             int f2=0;
// //             for(int i=0;i<n;i++){
// //                 if(arr[i]!=z){
// //                     f1=i;
// //                 }
// //             }
// //             for(int i=n-1;i>=0;i++){
// //                 if(arr[i]!=z){
// //                     f2=n-1-i;
// //                 }
// //             }
// //             ans=min(f1,f2);

// //         }
// //     }
// //     return 0;
// // }

#include <bits/stdc++.h>
using namespace std;

int MAXI(const vector<int>& arr) {
    unordered_map<int, int> frequencyMap;
    int maxFrequency = 0;
    int elementOfMaxOccurrence = -1;
    
    for (int num : arr) {
        frequencyMap[num]++;
        if (frequencyMap[num] > maxFrequency) {
            maxFrequency = frequencyMap[num];
            elementOfMaxOccurrence = num;
        }
    }
    return elementOfMaxOccurrence;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        bool FLAG = true;
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[i - 1]) {
                FLAG = false;
                break;
            }
        }
        if (FLAG) {
            cout << -1 << "\n";
            continue;
        }
        int mElem = MAXI(arr);
        int f1 = -1;
        int f2 = -1;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] != mElem) {
                if (f1 == -1) {
                    f1 = i;
                }
                f2 = i;
            }
        }
        // cout<<f1<<" "<<f2<<"\n";
        int ans = min(f1, n - f2 - 1);
        // cout<<ans<<"\n";
        int c=0;
        for(int i=1;i<n;i++){
            
            if(arr[i]!=mElem){
                c++;
            }
        }
        // cout<<c<<"\n";
        int bb=ans;
        if(c==2){
            for(int i=1;i<n;i++){
                if(arr[i-1]!=mElem&&arr[i+1]!=mElem){
                    bb=1;
                    break;
                }
            }
        }
        ans=min(ans,bb);
        cout << ans << "\n";
        
    }
    
    return 0;
}
