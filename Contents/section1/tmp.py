# EOF
while True:
    try:
        '''
        你要執行的程式碼
        '''
    except EOFError:
        break
	    
# 有規定終止條件
while True:
    if a==0:
        break

# 數學符號
a//=10 # 整除
a**b   # a^b

# 邏輯
a=True
b=False
print(a and b) #False
print(a or b)  #True

# scan
a = int(input())
n=list(input().split(' ')) # 連續輸入一串用空格隔開的數字

for i in range(a):
    c, d = map(int, input().split()) # 連續輸入兩個數

# print
print('for is not a multiple of 11.'.format(a))
print(a+" and "+b+" sitting in the tree")
print('The parity of ',a,' is ',count,' (mod 2).')

# 標頭檔math
import math
math.gcd(a, b, c, d, e) # 最大公約數
math.lcm(a, b, c, d, e) # 最小公倍數
math.fabs(x) # 絕對值
math.isqrt(n) # 整數平方根
math.sqrt(x) # 平方根
math.pow(x, y) # x^y

# count
c+=b.count("商店")  # 用在要計算好幾個字串時
c=b.count('1')     # 一次算出一串字串有幾個‘1'

# 進制轉換
a = bin(a)[2:] # 10 to 2
a = hex(a)[2:] # 10 to 16
a = oct(a)[2:] # 10 to 8

# 大小寫轉換
a.lower()
a.upper()

# 取長度
a.len()
