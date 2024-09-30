// // #include<bits/stdc++.h>
// // using namespace std;

// // int main(){
// //     string anurag;
// //     cin>>anurag;
// //     int n=anurag.size();
// //     string anu="hello";
// //     int k=0;
// //     for(int i=0;i<n;i++){
// //         if(anu[k]==anurag[i]){
// //             k++;   
// //         }
        
// //     }
// //     if(k==5){
// //         cout<<"YES"<<endl;
// //     }
// //     else{
// //         cout<<"NO"<<endl;
// //     }
// //     return 0;
// // }
// #include <stdio.h>
// #include<string.h>
// void printArray(int *arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
// int bSearch(int arr[], int n, int x)
// {
//     int low = 0;
//     int high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] == x)
//         {
//             return mid;
//         }
//         else if (arr[mid] > x)
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return -1;
// }
// int bSea(char arr[], int n, char x)
// {
//     int low = 0;
//     int high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] == x)
//         {
//             return mid;
//         }
//         else if (arr[mid] > x)
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {"anurag","shubham","pradeep","adarsh","priya"};
//     int n = 5;
//     printArray(arr, n);
//     printf("%d", bSea(arr, n, "priya"));

//     return 0;
// }
#include <stdio.h>
#include <string.h>

// Function to perform binary search
int binary_search(char **arr, int n, char *key) {
    int start = 0;
    int end = n - 1;
    int mid;

    while (start <= end) {
        mid = (start + end) / 2;

        int res = strcmp(arr[mid], key);
        
        if (res == 0) {
            return mid;
        }

        if (res < 0) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;
}

int main() {
    char *arr[] = {"apple", "banana", "cherry", "date", "fig", "grape", "honeydew", "kiwi", "lemon", "mango"};
    int n = 10;
    
    char key[] = "kiwi";
    int index = binary_search(arr, n, key);

    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found in the array\n");
    }
    

    return 0;
}