import string

num = input()
student = ''
scholar = 0
all_money = 0
for i in range(int(num)):
    lines = input().split(' ')
    name = lines[0]
    average_score = int(lines[1])
    pingyi_score = int(lines[2])
    is_ganbu = lines[3]
    is_xibu = lines[4]
    num_fabiao = int(lines[5])
    money = 0
    if pingyi_score > 80 and is_ganbu == 'Y':
        money += 850
    if average_score > 85 and is_xibu == 'Y':
        money += 1000
    if average_score > 90:
        money += 2000
    if average_score > 85 and pingyi_score > 80:
        money += 4000
    if average_score > 80 and num_fabiao > 0:
        money += 8000
    all_money += money
    if money > scholar:
        student = name
        scholar = money
print(student)
print(scholar)
print(all_money)
