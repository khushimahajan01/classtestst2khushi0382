//Khushi Mahajan
//2010990382
//test-04
//question2

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

bool consecutiveEle(int arr[],int n)
{
    //Sort the array
    sort(arr,arr+n);
    //adjacent element check
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1]+1)
        {
            return false;
        }
    }
    return true;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    if((arr,n)==true){
        cout<<"the array does not contain repeated element"<<endl;
    }
    else {
        cout<<"the array contains consecutive integers"<<endl;
    }
    consecutiveEle;

    return 0;

}
