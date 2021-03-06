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
 近似解：计算$\pi$的值，只需要达到我们所需的精度就可泄了。

 # 练习

 ## 1.2-1

 > 给出在应用层需要算法内容的应用的一个例子，并讨论涉及的算法的功能。

 地图软件需要能够根据选择的起始点和终点，计算出一条最短路给用户。最短路算法：给定起始点和终点，给定一个图，计算出起始点到终点的最短路。

 ## 1.2-2

 > 假设我们正比较插入排序与归并排序在相同机器上的实现。对规模为$n$的输入，插入排序运行$8n^{2}$步，而归并排序运行$64n\lg{n}$步。为对哪些$n$值，插入排序优于归并排序？

$$8n^{2} < 64n\lg{n}$$  
$$n^{2} < 8n\lg{n}$$  
$$n < 8\lg{n}$$  
$$n < \lg{n^{8}}$$  
$$2^{n} < n^{8}$$  
$$\therefore 2 \leq n \leq 43$$

 ## 1.2-3

 > $n$的最小值为何值时，运行时间为$100n^{2}$的一个算法在相同机器上快于运行时间为$2^{n}$的另一个算法

$$100n^{2} < 2^{n}$$  
$$\therefore n \geq 15$$

 # 思考题

 ## 1-1

 > （运行时间的比较）假设求解问题的算法需要$f(n)$毫秒，对下表中的每个函数$f(n)$和时间$t$，确定可以在时间$t$内求解的问题的最大规模$n$。

|  | 1秒钟 | 1分钟 | 1小时 | 1天 | 1月 | 1年 | 1世纪 |
| ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ |
| $\lg{n}$ | $2^{10^{3}}$ | $2^{6\cdot10^{4}}$ | $2^{36\cdot10^{5}}$ | $2^{864\cdot10^{5}}$ | $2^{2592\cdot10^{6}}$ | $2^{31536\cdot10^{6}}$ | $2^{31556736\cdot10^{5}}$ |
| $\sqrt{n}$ | $10^{6}$ | $36\cdot10^{8}$ | $1296\cdot10^{10}$ | $746496\cdot10^{10}$ | $6718464\cdot10^{12}$ | $994519296\cdot10^{12}$ | $995827586973696\cdot10^{10}$ |
| $n$ | $10^{3}$ | $6\cdot10^{4}$ | $36\cdot10^{5}$ | $864\cdot10^{5}$ | $2592\cdot10^{6}$ | $31536\cdot10^{6}$ | $31556736\cdot10^{5}$ |
| $n\lg{n}$ | $140$ | $4895$ | $204094$ | $3943234$ | $97659289$ | $1052224334$ | $86842987896$ |
| $n^{2}$ | $31$ | $244$ | $1897$ | $9295$ | $50911$ | $177583$ | $1776421$|
| $n^{3}$ | $10$ | $39$ | $153$ | $442$ | $1373$ | $3159$ | $14667$ |
| $2^{n}$ | $9$ | $15$ | $21$ | $26$ | $31$ | $34$ | $41$ |
| $n!$ | $6$ | $8$ | $9$ | $11$ | $12$ | $13$ | $15$ |