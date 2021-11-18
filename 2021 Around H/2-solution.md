## 分析与解题思路
直接分析test set 2，一共有三种颜色可用，那么最终需要涂的次数就是每种颜色需要涂的颜色相加，即$C = C_{Red} + C_{Yellow} + C_{Blue}$。

题目中一个关键的概念是，每种颜色的叠加顺序是无所谓的，这就使得这个问题大大简化了。对于每种颜色，我们只需要看每个位置是否需要这个颜色就可以。

然后涂颜料的过程是一个连续区间，那么对于每种颜色，这个问题就转化为统计连续区间的个数。最后将所有颜色的区间个数求和，就是答案。


## 时间复杂度

$$O(N * 4 * 3)$$

N: the length of input

3: the number of primary colors

4: the number of combined colors for each primary colors.


## 空间复杂度
$$O(n)$$