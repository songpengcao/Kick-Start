## 分析与解题思路
对于S中的每个字母$C_a$，变到F中字母$C_b$，需要的cost最小为：

$$Cost = min(abs(ASCII(C_a)−ASCII(C_b)),26−abs(ASCII(C_a)−ASCII(C_b)))$$

那么我们只需要依次循环S中的每个字母，对应F中的字母，分别算出cost，取最小的加到total cost中，最后total cost即为结果。

## 时间复杂度

$$O(m * n)$$

m: length of S

n: length of F

## 空间复杂度
$$O(n)$$