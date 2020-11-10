//https://www.codechef.com/LRNDSA01/problems/MULTHREE
# cook your dish here
for _ in range(int(input())):
    k, d0, d1 = input().split()
    k = int(k)
    d0 = int(d0)
    d1 = int(d1)
    sum_num = 0
    if k == 2:
        sum_num = d0+d1
    elif k == 3:
        d2 = (d0+d1)%10
        sum_num = d0+d1+d2
    else:
        d2 = (d0+d1)%10
        a = (2*d2)%10
        b = (4*d2)%10
        c = (8*d2)%10
        d = (6*d2)%10
        s = a+b+c+d
        sum_num = d0+d1+d2+s*((k-3)//4)   # k-3 as d0, d1, d2 have alredy been counted
        if (k-3)%4 == 1:
            sum_num += a
        elif (k-3)%4 == 2:
            sum_num += a+b
        elif (k-3)%4 == 3:
            sum_num += a+b+c
    if sum_num % 3 == 0:
        print('YES')
    else:
        print('NO')
        
