import string
import operator
string = input()
dic_string = {}
for i in range(len(string)):
    dic_string[string[i]]=i
num = int(input())
res = {}
words = []
for i in range(num):
    words.append(input())

sort_method = int(input())

for i in range(num):
    temp = ''
    for j in range(len(words[i])):
        temp += str(dic_string[words[i][j]])
    res[words[i]]=temp

if sort_method==1:
    sorted(res.items(),key = lambda x:x[1],reverse = True)
else:
    sorted(res.items(),key = lambda x:x[1],reverse = False)

for value in res.values():
    print(value)
     
