#include <iostream>
using namespace std;

//做比較大小的部分
void merge(int arr[], int l, int m, int r, int size)
{
    int i = l;
    int j = m + 1;
    int k = l;

    /* create temp array */
    int temp[size];

    while (i <= m && j <= r) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    / Copy the remaining elements of first half, if there are any /
    while (i <= m) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    / Copy the remaining elements of second half, if there are any /
    while (j <= r) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    / Copy the temp array to original array /
    for (int p = l; p <= r; p++) {
        arr[p] = temp[p];
    }
}

//做分開陣列的部分
void mergeSort(int arr[], int l, int r, int size)
{
    if (l < r) {
        // 找中間點 ex:陣列五個元素0-4 2是中間點
        //陣列分成兩組 0-2/3-4兩個部分
        //舉0-2陣列來說 中間點是1
        //陣列再分成 0-1/2兩個部分
        int m = (l + r) / 2;

        / 遞迴第一和第二部分*/
        //(也就是不斷的分)
        mergeSort(arr, l, m, size);
        mergeSort(arr, m + 1, r, size);

        // merge 
        //當我分到不能再分 比較陣列內數值 小的放前面
        merge(arr, l, m, r, size);
    }
}

int main()
{
    cout << "Enter size of array: " << endl;
    int size;
    cin >> size;
    int myarray[size];

    cout << "Enter " << size << " integers in any order: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> myarray[i];
    }
    cout << "Before Sorting" << endl;
    for (int i = 0; i < size; i++) {
        cout << myarray[i] << " ";
    }
    cout << endl;
    mergeSort(myarray, 0, (size - 1), size); // mergesort(arr,left,right) called

    cout << "After Sorting" << endl;
    for (int i = 0; i < size; i++) {
        cout << myarray[i] << " ";
    }

    return 0;
}

