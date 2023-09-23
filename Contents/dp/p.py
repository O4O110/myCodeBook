'''
!注意！long long 存到21!就會爆掉

1.	要你輸出階乘
好懶，請你直接用python
'''
a = 0
while True:
    try:
        a = int(input())
        sum = 1
        for i in range(1,a+1):
            sum*=i
        a = str(a)
        print(a+'!')
        print(sum)
    except EOFError:
        break

