# Enter your code here. Read input from STDIN. Print output to STDOUT
actual = map(int, raw_input().split())
expected = map(int, raw_input().split())
fine = 0
if actual[2] > expected[2]:
    fine = 10000
elif actual[2] < expected[2]:
    fine = 0
elif actual[1] > expected[1]:
    fine = (actual[1] - expected[1]) * 500
elif actual[1] < expected[1]:
    fine = 0
elif actual[0] > expected[1]:
    fine = 15 * (actual[0] - expected[0])
else:
    fine = 0
print fine

