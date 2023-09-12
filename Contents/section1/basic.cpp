// c++ code
#include <bits/stdc++.h> 
using namespace std;
int main(){
  std::ios::sync_with_stdio(false); // 加速
  return 0;
}

// struct宣告
struct s{
  int x[100];
  int y[100];
};

s num; //一組s
num.x[1]=1;
num.y[1]=2;

// sort
sort(v.begin(), v.end())     // array 不能用
sort(v, v+n)
sort(v, v+n, greater<int>()) // 大到小

sort(v, v+n, cmp)            // 自己寫比較序列
bool cmp(型態 a, 型態 b){
  return a > b;              // 大到小
}

// set
s.insert(x)	//將x插入s中	O(log(n)) 
s.count(x)	//回傳x是否存在於s中()	O(log(n)) 
s.erase(x)	//刪除在s中的x	O(log(n)) 
s.clear()	  //刪除s中所有元素	O(n)
s.empty()	  //回傳是否為空	O(1)
s.size()	  //回傳共有幾個元素	O(1)

map
insert(x)	//將x這個pair插入map中	O(log(n)) 
count(x)	//回傳x這個key是否在map中	O(log(n)) 
erase(x)	//刪除在map中key為x的	O(log(n)) 

// vector
vector<int> v // 宣告
v.push_back(1) // 推入數字
v.pop_back()   // 拔出尾端數字

