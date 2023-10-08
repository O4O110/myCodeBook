 #include<bits/stdc++.h>
using namespace std;

int k, all = 0;
int Min = 9999999;
int arr[100] = {0};

void Find(int sum, int now){
    if(now == k) return;
    Min = min(abs(all-sum-sum), Min);

    Find(sum, now+1);
    Find(sum+arr[now], now+1);
    return;
}
int main(){
    cin >> k;
    for(int i = 0; i < k; i++){
        cin >> arr[i];
        all+=arr[i];
    }
    Find(0, 0);
    cout << Min;
}
