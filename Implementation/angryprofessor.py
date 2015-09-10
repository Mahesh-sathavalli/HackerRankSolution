# Enter your code here. Read input from STDIN. Print output to STDOUT
t = int(raw_input())
for i in range(0,t):
    list1 = raw_input()
    list1 = map(int,list1.split())
    while ' ' in list1:
        list1.remove(' ')
    list1 = map(int,list1)
    n = list1[0]
    k = list1[1]
    array_list = raw_input()
    array_list = array_list.split(' ')
    while ' ' in array_list:
        array_list.remove(' ')
    array_list = map(int,array_list)
    countPositve =0
    countNegative = 0
    for i in array_list:
        if i <= 0:
            countNegative = countNegative +1
        else:
            countPositve = countPositve +1
    if countNegative >= k:
        print "NO"
    else:
        print "YES"

