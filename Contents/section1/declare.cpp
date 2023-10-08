// <vector>
vector<int> v;
vector<int> v = {1,2,3,4};
vector<int> v(5); // v={0,0,0,0,0}
vector<int> v(5,1); // v={1,1,1,1,1}
vector<vector<int>> v; //二維
// v[2][3] v[樓][層]
vector<vector<int>> v(2, vector<int>(3));
// v = {(1,1),(1,1),(1,1)}
vector<vector<int>> v(2, vector<int>(3, 1));

v.push_back(1) // 推入數字
v.pop_back() // 拔出尾端數字
    
// 在二維陣列中插入元素
vector<vector<int> > arr(5, vector<int>(3, 1));
arr[1].push_back(2);
for(size_t i= 0; i < arr.size();i++){
	for(size_t j= 0; j < arr[i].size();j++){
		cout<<arr[i][j]<<' ';
	}
	cout<<endl;
}
/*
Output
1 1 1 
1 1 1 2 
1 1 1 
1 1 1 
1 1 1
*/

// struct
struct s{
  int x[100];
  int y[100]; 
};
s num; //一 組s
num.x[1]=1; num.y[1]=2;

// set
set<int> s;

s.insert(x)
s.count(x) // x是否存在於set中
s.erase(x)

s.clear()
s.empty()
s.size()
    
// stack
stack<int> s;

s.push(1); // 把1推到尾巴
s.pop(); // 刪掉尾巴
s.top(); // 返回尾巴

// queue
queue<int> q;
q.pop(); // 刪掉前
q.front(); // 返回前
q.back(); // 返回尾
q.push(1); // 把1推到前
