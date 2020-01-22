# cpp_pointers
An exercise to explore pointers in C++

1. Declare a variable "a" and initialize it with any value. Then create a pointer variable "p" containing the address of the variable "a". Print out in the console the value and address of the variable "a" using both variable "a" and pointer "p".
2. Create another pointer "pp" containing the address  of the pointer variable "p". Print out in the console the value and address of the variable "a" using variable "a" and pointers "p" and "pp". Print out the value and address of the pointer "p" using pointers "p" and "pp".
3. Declare 5 element array of integers and a pointer to the first element of the array. Use the pointer and its incrementation instead of array notation, fill the array with any integer numbers. Print all of the elements out in the console.
4. Declare two integer variables, the first statically allocated and the second dynamically allocated. To the statically allocated variable declare a pointer containing its address. To both variables assign any integer values (in case of statically allocated variable use
its pointer). Print out in the console both values and addresses of the variables. 
5. Write a program that asks the user to input the size of the dynamic array of integers. Using the pointer and its incrementation instead of array notation, fill the array with any integer numbers. Print all of the elements out in the console. All of the conditions of the loops should work with the size of the array inputted by the user.
6. Write a program that prints out in the console the whole alphabet "abcdefghijklmnopqrstuvwxyz". All of the characters from the alphabet should be stored in a 27 element array of chars and printing out of each of those elements should be done with the use of the for loop.
7. Write a program similar to the one in previous question. However, this time instead of using a 27 element array of chars use the string type. Printing out should be done the same way as in the previous question.
8. Write a program that asks the user to input a number of characters he would like to input. Then create a dynamic array of characters where the number inputted by the user stands for the size of the array. Next the user should input as many characters as the size of the array. The characaters should be stored in the dynamic array one by one. Print out in the console all of the characters  in the array, thus creating a string of characters. Remember to free the memory.
9. In this set of exercises, create a simple program (step by step) for sorting the numbers inputted by the user into a dynamically allocated array of integers. The user will also make the choice concerning the order (ascending or descending) the array should be sorted with. For dynamically allocated variables remember to free the memory.
   - Exercise 1. Create a function "createArray" that initializes a dynamically allocated array of integers with the size of the array sent as the argument of the function. The function should return the array it creates so it can be assigned to any dynamically allocated variable in other functions.
   - Exercise 2. Create a function "swapTwoValues" that swaps the value of one variable with the value of the second variable. Both variables should be sent as the arguments. Instead of using references use pointers. 
   - Exercise 3. Create functions "fillArrayWithValues" and "printArrayValues". Both of the functions should take the array and its size as the arguments. First function should fill the array with values, the second should print all values of the array.
   - Exercise 4. Create a function "bubbleSort". The function should take three arguments, array and its  size and order of sorting. Depending on the third parameter the function should either sort the array with ascending or descending order, the default argument should be set as ascending.
   - Exercise 5. Create a function "selectionSort". The function should take three arguments, array and its size and order of sorting. Depending on the third parameter the function should either sort the array with ascending or descending) order, the default argument should be set as ascending. Use the "swapTwoValues" function to simplify the algorithm and "printArrayValues" function to print the values of the sorted array after the procedure is done.
   - Exercise 6. Using the functions created in exercises from 1 to 5 write a program that asks the user for  the size of the array. Declare a dynamically allocated variable and assign to it the "createArray" function with the inputted size as the argument. Using "fillArrayWithValues" fill the created array. And show the user the numbers he/she inputted with "printArrayValues". Then ask the user
if the array should be sorted with ascending or descending (default: ascending) order and which sorting algorithm should be used (default bubble).
10. Modify the program from previous question. Delete the "fillArrayWithValues" function and edit "createArray" function so the initialization of the array to sort is done within it. The values should no longer be inputted by the user but randomed from 0 to 1500. This way you can check if your sorting works fine with much more numbers inputted.
