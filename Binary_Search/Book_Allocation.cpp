#include<iostream>
using namespace std;

int book_allocation(int arr[],int size,int M){
    int start=0,end=0,mid,ans=0;

    if(M>size){
        return -1;
    }
    
    /* Start from MAximum pages in the array
    End with the sum of the Pages in the array. Because the minimum pages only lie 
    between these sum of pages and starting of maximum pages. */

    for(int i=0;i<size;i++){
        start = max(start,arr[i]);
        end += arr[i];
    }

    // Allocating the Books of pages to the Given number of students.

    while(start<=end){
        mid=start+(end-start)/2;
        int pages = 0,student=1;
        for(int j=0;j<size;j++){
            pages += arr[j];
            if(pages > mid){
                student++;
                pages = arr[j];
            }
        }

        /* f the number of students is less than the given number of students 
        then, also continue the allocating the pages to the students. Because 
        we have to divide the pages to all the students and at least one book is 
        contain by each students. */
        
        if(student<=M){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
};

int main(){
    int arr[] = {12,34,67,90};
    int size = sizeof(arr)/sizeof(arr[0]);
    int M = 2;
    int ans = book_allocation(arr,size,M);
    cout<<ans<<endl;
};
