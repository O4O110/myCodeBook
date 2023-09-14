include <iostream>
using namespace std;
// quick sort sorting algorithm
int Partition(int arr[], int s, int e)
{
 int pivot = arr[e];
 int pIndex = s;
 
 for(int i = s;i<e;i++)
 {
     if(arr[i]<pivot)
     {
     int temp = arr[i];
     arr[i] = arr[pIndex];
     arr[pIndex] = temp;
    //swapping 也就是說如果當前數值比指標小 他就移到最前面
    //也就是陣列0的位置
     pIndex++;
    //下一個比指標小的數值放進陣列1的位置
     }
 }
 
 int temp = arr[e];
 arr[e] = arr[pIndex];
 arr[pIndex] = temp;
 //比指標數值小的都去前面了 
 //將指標放到目前計數到的陣列位置 
 //那指標前都比她小 指標後都比他大
 return pIndex; //回傳給p值
}
 
void QuickSort(int arr[], int s, int e)
//s stand for start index
//e stand for end index also (size-1)
{
 if(s<e)
 {
 int p = Partition(arr,s, e);
 QuickSort(arr, s, (p-1));
// recursive QS call for left partition
//做陣列前半部分 因為都比指標小 去進行內部排序
 QuickSort(arr, (p+1), e);
// recursive QS call for right partition
 }
}
 
int main()
{
 
 int size=0;
 cout<<"Enter Size of array: "<<endl;
 cin>>size;
 int myarray[size];
 
 cout<<"Enter "<<size<<" integers in any order: "<<endl;
 for(int i=0;i<size;i++)
 {
 cin>>myarray[i];
 }
 cout<<"Before Sorting"<<endl;
 for(int i=0;i<size;i++)
 {
 cout<<myarray[i]<<" ";
 }
 cout<<endl;
 
 QuickSort(myarray,0,(size-1));  // quick sort called
 
 cout<<"After Sorting"<<endl;
 for(int i=0;i<size;i++)
 {
 cout<<myarray[i]<<" ";
 }
 
 return 0;
}
