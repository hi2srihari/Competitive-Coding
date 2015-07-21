#include<iostream>
using namespace std;
int main()
{
    int s=0;//array size
    cin>>s;
    int arr[1000]= {};
    for(int i=0; i<s; i++) {
        cin>>arr[i];
    }
    int i=0,j=0,key=0;
    for (i = 1; i < s; i++) {
        key = arr[i];
        j = i-1;

        /* Move elements of A[0..i-1], that are greater than key, to one
           position ahead of their current position.
           This loop will run at most k times */
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
        for(int i=0; i<s; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}
