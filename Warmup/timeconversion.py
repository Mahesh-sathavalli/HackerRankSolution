# Enter your code here. Read input from STDIN. Print output to STDOUT
time_12hr = raw_input()
time_12hr = time_12hr.split(":")


if 'PM' in time_12hr[-1].upper():
    hour = 0
    if time_12hr[0] != '12':
        hour = int(time_12hr[0]) + 12
    else:
        hour = '12'
    time_12hr[0] = str(hour)
    time_12hr[-1]=time_12hr[-1].upper().strip('PM')
else:
    time_12hr[-1]=time_12hr[-1].upper().strip('AM')
    if time_12hr[0] =='12':
        time_12hr[0] = '00'
    
time_12hr = ":".join(time_12hr)

print time_12hr

