// c++ code
std::ios::sync_with_stdio(false); // 加速
#include <bits/stdc++.h>

// struct宣告
struct s{
  int x[100];
  int y[100];
};

s num; //一組s
num.x[1]=1;
num.y[1]=2;

// sort

// 從小到大
priority_queue<int, vector<int>, greater<int>>pq

insert(it,x)//向vector的任意迭代器it處插入一個元素x
erase(it)//刪除迭代器爲it處的元素，erase(first,last)
//刪除一個區間[first,last)內的所有元素，時間複雜度均爲O(N)

// set
s.insert(x)	//將x插入s中	O(log(n)) 
s.count(x)	//回傳x是否存在於s中()	O(log(n)) 
s.erase(x)	//刪除在s中的x	O(log(n)) 
s.clear()	//刪除s中所有元素	O(n)
s.empty()	//回傳是否為空	O(1)
s.size()	//回傳共有幾個元素	O(1)

map
insert(x)	//將x這個pair插入map中	O(log(n)) 
count(x)	//回傳x這個key是否在map中	O(log(n)) 
erase(x)	//刪除在map中key為x的	O(log(n)) 

double cnt = 3.5555;
cout << fixed << setprecision(3) << cnt ;
	
#include <bits/stdc++.h>
using namespace std;
 
int main(){
	set<int>s;
	for(int i = 0; i < 10; i++){
		s.insert(i);
	}
	cout << "lower bound: " << *s.lower_bound(5) << '\n';// 5
	cout << "upper bound: " << *s.upper_bound(5) << '\n';// 6
 
	if(s.lower_bound(20) == s.end()){
		cout << "all elements are less than 20\n";
	}
}
