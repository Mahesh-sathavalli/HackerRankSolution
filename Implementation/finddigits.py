# Enter your code here. Read input from STDIN. Print output to STDOUT
testcases = int(raw_input())
for i in range(0,testcases):
    num = raw_input()
    list1 = list(num)
    num = int(num)
    count = 0
    for a in list1:
        if a == '0' :
            continue
        a = int(a)
        if num % a == 0:
            count = count + 1
    print count
            
            
       
