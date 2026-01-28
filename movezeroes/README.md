\# Move Zeroes



🔹 Problem from \*\*LeetCode\*\*  

🔗 https://leetcode.com/problems/move-zeroes/



---



\## 🧠 Problem Description

Given an integer array `nums`, move all `0`s to the end of the array \*\*while maintaining the relative order of the non-zero elements\*\*.



You must do this \*\*in-place\*\* without making a copy of the array.



---



\## 💡 Approach

\- Use a pointer `pos` that indicates the position to place the next non-zero element.

\- Traverse the array:

&nbsp; - When a non-zero element is found, place it at `nums\[pos]` and increment `pos`.

\- After the traversal, fill the remaining positions with zeros.



---



\## ✅ Key Points

\- In-place solution

\- Preserves the order of non-zero elements

\- Simple and efficient



---



\## ⏱️ Complexity

\- \*\*Time Complexity:\*\* `O(n)`

\- \*\*Space Complexity:\*\* `O(1)`



---



\## 🛠️ Concepts Used

\- Arrays / Vectors

\- Two Pointers Technique

\- Big-O Notation



---



\## 📝 Notes

This problem was solved as part of my learning journey in:

\- C++

\- Algorithmic thinking

\- Code optimization and clean practices





