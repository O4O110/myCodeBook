// <string>

// 查找substr第一次出現的位置
str.find(substr); 
// 返回substr最后一次出现的位置
str.rfind(substr);

s1 = s1+s2 // 連接兩個字串
s1 + s2 // 跟上面一樣
s1.append(s2) // s2插在s1的屁股
if(s1 == s2) // 比較兩字串
    
// <ctype>

// 檢查系列
isalpha(c) // 字母
isdigit(c) // 數字
isalnum(c) // 字母or數字
isspace(c) // 空格or換行
isupper(c) // 大寫
islower(c) // 小寫
ispunct(c) // 標點符號
toupper(c) // to大寫
tolower(c) // to小寫


// <algorithm>

// 酷東西
reverse(v, v+n)
find(v, v+n, 3) //查找3是否在v中
count(v, v+n, 3) // 算3在v裡出現幾次(只能算字元or數字)

// sort
sort(v.begin(), v.end())
sort(v, v+n)
sort(v, v+n, greater<int>())

sort(v, v+n, cmp)
bool cmp(型態 a, 型態 b){
    return a > b; // 大到小
}
    
// <numeric>
    
// 返回鄰近數值的差
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int a[9] = {0};
adjacent_difference(arr, arr+10, a);
for(int i= 0; i < 9; i++){
	cout<<a[i]<<' ';
}

// <cmath>
round(x) // 返回最接近x的整數
log(x) // 以自然對數為底
log10(x) // 以10為底
log(x) / log(2) // 以2為底
