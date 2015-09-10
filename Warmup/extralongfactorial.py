# Enter your code here. Read input from STDIN. Print output to STDOUT
num = raw_input()
num = int(num)
def fact(num):
    if num == 0 or num == 1:
        return 1
    else:
        num = num * fact(num -1)
        return num
final_num = fact(num)
       
print final_num
