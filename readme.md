## Pointer - Program to Shift an Array

**Objective:**

Create a program that shifts an array based on a user-specified direction.

**Instructions:**

In the main program,

* Take the shifting option (L) and the size of the array as inputs
* Take a list of numbers are stored in the array
* Point the pointer `p_opt` to the value of the shifting option (variable opt)
* Call a function `shift_array` to shift the array to the left. You must pass the pointer `p_opt` to the function
* Finally, display all the values in the resulting array
In the `shift_array` function,

Write a function prototype named `shift_array` that takes only two inputs.
* First, the array to be shifted as input.
* Second, the pointer that points to the shifting option.

Then, implement a function `shift_array` to validate the shifting option and shift the array accordingly.

* If the shifting option is `L`, the program shifts the array to the `left`; 

**For example**, `[1, 2, 3]` will become `[2, 3, 1]`. The last element will take the value of the first element.

* If the shifting option is `R`, the program shifts the array to the `right`; 

**For example**, `[1, 2, 3]` will become `[3, 1, 2]`. The first element will take the value of the last element.

* If the shifting option is something else (not `L` or `R`), the program will do nothing.

**Notes:**

* The variable `n`, representing the array size, is a global variable.
* You must use pointer `p_opt` to verify a valid option. If you **DO NOT** use the pointer in the function, you will get a **ZERO** score on this part.
* You are **NOT** allowed to modify the other parts of the code, except the provided sections. Otherwise, you will get a **ZERO** score.
* **This problem is case-sensitive, `L` not equal to `l`**.

<hr>

**Case 1**

**Sample input:**
```
L 3
1 2 3
```
**Sample output:**
```
Shift option: L
2 3 1
```
<hr>

**Case 2** 

**Sample input:**
```
L 4
99 28 68 12
```
**Sample output:**
```
Shift option: L
28 68 12 99
```
<hr>

**Case 3** 

**Sample input:**
```
X 5
12 5 2 9 10
```
**Sample output:**
```
Shift option: X
12 5 2 9 10
```
<hr>

**Case 4**

**Sample input:**
```
R 6
8 4 7 0 19 5 -2
```
**Sample output:**
```
Shift option: R
-2 8 4 7 0 19 5
```
<hr>