
import math
import os
import random
import re
import sys

# Complete the plusMinus function below.
def plusMinus(arr,n):
    count=0
    pos_count=0
    neg_count=0
    zero_count=0
    for count in range(0,n):
        if arr[count]>0 :
            pos_count=pos_count+1
            
        
        if arr[count]<0 :
            neg_count=neg_count+1
        
        if arr[count]==0 :
            zero_count=zero_count+1
        

    pos_fraction=pos_count/n
    neg_fraction=neg_count/n
    zero_fraction=zero_count/n
    print(pos_fraction)
    print(neg_fraction)
    print(zero_fraction)
   
   

if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr,n)
