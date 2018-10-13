import string
import math
lines = input().split(' ')
N = int(lines[0])
radios = float(lines[1])
temp_x = float(0)
temp_y = float(0)
temp_start_x = float(0)
temp_start_y = float(0)
length = float(0)
for i in range(N):
    coordinate_x,coordinate_y = [float(i) for i in input().split(' ')]
    if i == 0:
        temp_start_x,temp_start_y = coordinate_x,coordinate_y
        temp_x = coordinate_x
        temp_y = coordinate_y
        continue
    length += math.sqrt(math.pow((coordinate_x-temp_x),2)+math.pow((coordinate_y-temp_y),2))
    temp_x = coordinate_x
    temp_y = coordinate_y
    if i == N-1:
        length += math.sqrt(math.pow((temp_x-temp_start_x),2)+math.pow((temp_y-temp_start_y),2))
        length += math.pi*2*radios
print(round(length,2))


