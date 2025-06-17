![Image](https://github.com/user-attachments/assets/92a0f646-5312-4ca3-b3d2-465e973bfb15)

#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int k){
    int s=0,  e=n-1, mid=s + (e-s)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]== k){
            ans=mid;
            e=mid-1;
        }
        else if(k>arr[mid]){ // will go on right
            s=mid+1;
        }
        else if(k<arr[mid]){ // will go on left
            e=mid-1;
        }

        mid=s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int k){
    int s=0,  e=n-1, mid=s + (e-s)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]== k){
            ans=mid;
            s=mid+1;
        }
        else if(k>arr[mid]){ 
            s=mid+1;
        }
        else if(k<arr[mid]){ 
            e=mid-1;
        }

        mid=s + (e-s)/2;
    }
    return ans;
    
}


int main(){
    int even[]={1,2,3,3,5};
    cout<<"First Occurrence of 3 is "<< firstOcc(even, 5, 3)<<endl;
    cout<<"Last Occurrence of 3 is "<< lastOcc(even, 5, 3)<<endl;
    return 0; 
}


// Don't copy these in your IDE
Outputs in terminal:
First Occurrence of 3 is 2
Last Occurrence of 3 is 3 
