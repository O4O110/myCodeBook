// 數字to字元(串)
str = to_string(num)
c = num + '0';

// 字符串流轉型法
stringstream ss;
ss << num; // 把num塞進字符串流
string str;
ss >> str; // 把字符串留丟進str

// 字串to數字
int num = stoi(str) //整數
double num = stod(str) //小數
