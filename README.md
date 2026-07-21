# Longest Valid Parentheses

## Problem Statement

Given a string containing only '(' and ')', return the length of the longest valid (well-formed) parentheses substring.

## Language
C++

## Approach

I used a stack to store the indices of parentheses. While traversing the string, I calculated the length of every valid substring and updated the maximum length.

## Code



<img width="1915" height="1017" alt="image" src="https://github.com/user-attachments/assets/ad895caa-ce18-4476-86a7-61bff206302b" />

<img width="1917" height="1020" alt="image" src="https://github.com/user-attachments/assets/02c9566b-45e6-4921-a679-3a71f517b719" />




## Sample Input and Output
<img width="1907" height="997" alt="image" src="https://github.com/user-attachments/assets/f199a9d7-cf0f-433a-8f3b-544250fdee89" />



## Time Complexity

O(n)

## Space Complexity

O(n)
