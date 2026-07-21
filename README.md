# Longest Valid Parentheses

## Problem Statement

Given a string containing only '(' and ')', return the length of the longest valid (well-formed) parentheses substring.

## Language
C++

## Approach

I used a stack to store the indices of parentheses. While traversing the string, I calculated the length of every valid substring and updated the maximum length.

## Code

```cpp
<img width="1917" height="976" alt="image" src="https://github.com/user-attachments/assets/1849614b-77e8-4387-90cb-361df63187c9" />
<img width="1917" height="965" alt="image" src="https://github.com/user-attachments/assets/97393238-a233-4597-94c6-bf98c2af2ec3" />

```

## Sample Input 1

```text
(()
```

## Sample Output 1

```text
2
```

## Sample Input 2

```text
)()())
```

## Sample Output 2

```text
4
```

## Sample Input 3

```text
()
```

## Sample Output 3

```text
2
```

## Time Complexity

O(n)

## Space Complexity

O(n)
