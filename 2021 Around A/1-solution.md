# K-Goodness String

## 分析与解题思路

本题思路较为简单，以题意要求，在字符串头尾设置两个指针，统计对应位置的字符是否相同，如果不同则满足要求，分数加1。

目标是获得分数为k的字符，只需要对让现有字符分数靠近k即可：

$$
result = abs(result - k)
$$

## 时间复杂度

$O(n)$

## 空间复杂度

不需要额外空间