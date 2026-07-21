# Longest Valid Parentheses

## Problem Statement

Given a string containing only '(' and ')', return the length of the longest valid (well-formed) parentheses substring.

## Language
C++

## Approach

I used a stack to store the indices of parentheses. While traversing the string, I calculated the length of every valid substring and updated the maximum length.

## Code



<img width="1917" height="965" alt="image" src="https://github.com/user-attachments/assets/97393238-a233-4597-94c6-bf98c2af2ec3" />
<img width="1917" height="976" alt="image" src="https://github.com/user-attachments/assets/1849614b-77e8-4387-90cb-361df63187c9" />


## Sample Input and Output
<img width="1917" height="1067" alt="image" src="https://github.com/user-attachments/assets/976b3ce6-2b9c-47a7-a347-42c8c1918939" />


## Time Complexity

O(n)

## Space Complexity

O(n)
