## Problem A. Hanoi双塔问题
时间限制 1000 ms    
内存限制 128 MB    
### 题目描述    
　　给定A,B,C三根足够长的细柱，在A柱上放有2n个中间有孔的圆盘，共有n个不同的尺寸，每个尺寸都有两个相同的圆盘，注意这两个圆盘是不加区分的。现要将这些圆盘移到C柱上，在移动过程中可放在B柱上暂存。要求:


(1)每次只能移动一个圆盘；    

(2) A、B、C三根细柱上的圆盘都要保持上小下大的顺序；    

任务:设An为2n个圆盘完成上述任务所需的最少移动次数，对于输入的n，输出An。   

### 输入数据
输入为一个正整数 n ，表示在 A 柱上放有 2n 个圆盘。    
### 输出数据
输出文件hanoi.out仅一行，包含一个正整数，为完成上述任务所需的最少移动次数 An 。    
### 样例输入
Sample 1:    
1     

Sample 2:    
2    

### 样例输出
Sample 1:   
2   

Sample 2:   
6    
### 样例说明
对于50%的数据， 1< =n< =25    
对于100% 数据， 1< =n< =200    

提示:设法建立An与An-1的递推关系式。    
