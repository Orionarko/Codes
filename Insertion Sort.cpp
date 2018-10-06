#include<iostream>
using namespace std;
int main(){
int size, arr[size], i, j, temp;
cout<<"Enter the size of array";
cin>>size;
cout<<"\nEnter array elements";
for(i=0; i<size; i++){
cin>>arr[i];
}
cout<<"Sorting an array using Insertion Sort\n";
for(i=0; i<size; i++){
temp=arr[i];
j=i-1;
while((temp<arr[j] && (j>=0)){
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=temp;
}
cout<<"Array after sorting:\n";
for(i=0; i<size; i++){
cout<<arr[i]<<""
}
}
