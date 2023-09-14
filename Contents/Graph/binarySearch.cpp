#include < iostream >
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == x) {
      return mid;
    } 
     else if (arr[mid] < x) {
      left = mid + 1;
    } 
     else {
      right = mid - 1;
    }
  }

  return -1;
}

int main() {
  int myarr[10];
  int num;
  int output;

  cout << "Please enter 10 elements ASCENDING order" << endl;
  for (int i = 0; i < 10; i++) {
    cin >> myarr[i];
  }
  cout << "Please enter an element to search" << endl;
  cin >> num;

  output = binarySearch(myarr, 0, 9, num);

  if (output == -1) {
    cout << "No Match Found" << endl;
  } else {
    cout << "Match found at position: " << output << endl;
  }

  return 0;
}
如果我們超過25頁我還可以再縮減程式區 這是比較完整的
Floyd
void floyd(){
        for(intk=0;k<n;k++){ //中間點
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]); 
                    //經過中間點k的路徑是否小於原始路徑
                    //小於則更新 不小於則不變動
                    //窮舉所有鬆弛的可能
                }
            }
        }
    }
