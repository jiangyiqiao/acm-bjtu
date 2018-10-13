1131. 买蛋糕
时间限制 1000 ms
内存限制 128 MB
题目描述
　　野猫过生日，大家当然会送礼物了（咳咳，没送礼物的同志注意了哈！！），由于不知道送什么好，又考虑到实用性等其他问题，大家决定合伙给野猫买一个生日蛋糕。大家不知道最后要买的蛋糕的准确价格，而只会给蛋糕估价，即要买一个不超过多少钱的蛋糕。众OIer借此发挥：能否用最少的钱币数去凑成估价范围内的所有价值，使得不管蛋糕价值多少，都不用找钱……
　　现在问题由此引出：对于一个给定的n，能否用最少的不等的正整数去组成n以内（包括n）的所有的正整数呢？如果能，最少需要多少个正整数，用最少个数又有多少不同的组成方法呢？

输入数据
只有一行包含一个整数 n (1≤ n≤ 1000) 。
输出数据
一行两个数，第一个数是最少需要多少个数，第二个数是用最少个数的组成方案个数。两个答案用空格分隔。
样例输入
6
样例输出
3 2
样例说明
最少用三个数，有两种方法，分别是：1，2，3和1，2，4。
对于1，2，3有1，2，3，1＋3，2＋3，1＋2＋3；
对于1，2，4有1，2，1＋2，4，1＋4，2＋4。