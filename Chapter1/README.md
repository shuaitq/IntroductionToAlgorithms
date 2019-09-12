# 练习

## 1.1-1

> 给出现实生活中需要排序的一个例子或者现实生活中需要计算凸壳的一个例子。

排序：考试排名，需要根据学生成绩排名。  
凸壳：海上搜救，可以根据已知几个重要的点，计算出最有可能性的搜救范围，尽可能减少搜寻面积。

## 1.1-2

> 除速度外，在真实环境中还可能使用哪些其他有关效率的量度？

内存占用量。

## 1.1-3

> 选择一种你以前已知的数据结构，并讨论其优势和局限。

链表，可以在任意位置方便的插入或者删除元素，但是随机访问需要遍历到对应位置，效率不高。

## 1.1-4

> 前面给出的最短路径与旅行商问题有哪些相似之处？又有哪些不同？

相似之处：都是想要计算怎样才能让走过的路径最短。  
不同：最短路是一个点到另外一个点怎么走最短，旅行商问题使从一个点出发经过若干个点回到原点怎么走最短，最短路不是NP完全的，旅行商问题是NP完全的。

 ## 1.1-5

 > 提供一个现实生活的问题，其中只有最佳解才行，然后提供一个问题，其中近似最佳的一个解也足够好。

 最优解：计算一个点到另外一个点的最短路。  
 近似解：计算![\pi](https://latex.codecogs.com/svg.latex?%5Cpi)的值，只需要达到我们所需的精度就可泄了。

 # 练习

 ## 1.2-1

 > 给出在应用层需要算法内容的应用的一个例子，并讨论涉及的算法的功能。

 地图软件需要能够根据选择的起始点和终点，计算出一条最短路给用户。最短路算法：给定起始点和终点，给定一个图，计算出起始点到终点的最短路。

 ## 1.2-2

 > 假设我们正比较插入排序与归并排序在相同机器上的实现。对规模为![n](https://latex.codecogs.com/svg.latex?n)的输入，插入排序运行![8n^2](https://latex.codecogs.com/svg.latex?8n%5E2)步，而归并排序运行![64n\lg{n}](https://latex.codecogs.com/svg.latex?64n%5Clg%7Bn%7D)步。为对哪些![n](https://latex.codecogs.com/svg.latex?n)值，插入排序优于归并排序？

 ![8n^2 < 64n\lg{n}](https://latex.codecogs.com/svg.latex?8n%5E2%20%3C%2064n%5Clg%7Bn%7D)  
 ![n^2 < 8n\lg{n}](https://latex.codecogs.com/svg.latex?n%5E2%20%3C%208n%5Clg%7Bn%7D)  
 ![n < 8\lg{n}](https://latex.codecogs.com/svg.latex?n%20%3C%208%5Clg%7Bn%7D)  
 ![n < \lg{n^8}](https://latex.codecogs.com/svg.latex?n%20%3C%20%5Clg%7Bn%5E8%7D)  
 ![2^n < n^8](https://latex.codecogs.com/svg.latex?2%5En%20%3C%20n%5E8)  
 ![\therefore 2 \leq n \leq 43](https://latex.codecogs.com/svg.latex?%5Ctherefore%202%20%5Cleq%20n%20%5Cleq%2043)

 ## 1.2-3

 > ![n](https://latex.codecogs.com/svg.latex?n)的最小值为何值时，运行时间为![100n^2](https://latex.codecogs.com/svg.latex?100n%5E2)的一个算法在相同机器上快于运行时间为![2^n](https://latex.codecogs.com/svg.latex?2%5En)的另一个算法

 ![100n^2 < 2^n](https://latex.codecogs.com/svg.latex?100n%5E2%20%3C%202%5En)  
 ![\therefore n \geq 15](https://latex.codecogs.com/svg.latex?%5Ctherefore%20n%20%5Cgeq%2015)

 # 思考题

 ## 1-1

 > （运行时间的比较）假设求解问题的算法需要![f(n)](https://latex.codecogs.com/svg.latex?f%28n%29)毫秒，对下表中的每个函数![f(n)](https://latex.codecogs.com/svg.latex?f%28n%29)和时间![t](https://latex.codecogs.com/svg.latex?t)，确定可以在时间![t](https://latex.codecogs.com/svg.latex?t)内求解的问题的最大规模![n](https://latex.codecogs.com/svg.latex?n)。

|  | 1秒钟 | 1分钟 | 1小时 | 1天 | 1月 | 1年 | 1世纪 |
| ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ |
| ![\lg{n}](https://latex.codecogs.com/svg.latex?%5Clg%7Bn%7D) |  |  ||||||
| ![]() |  |  ||||||