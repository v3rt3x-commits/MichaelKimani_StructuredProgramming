#Short Notes on Pointers
1.A normal variable is a variable that stores an actual value directly in memory, not an address and one can access or modify that data directly by its name while a pointer variable stores the memory address of another variable. The value of the variable it points to is accessed or modified indirectly using dereferencing.

2.Variable declaration gives the compiler the name and type of a variable, but does not allocate memory or assign a value.eg 
              int x;
 Variable definition declares the variable , allocates memory and assigns an initial value eg 
              int x = 10; 

3.Dereferencing is, use of a pointer to access the value whose address is being stored. e.g 

                   int var = 10;
            int *pt = NULL;

        pt = &var;
        printf("Updated value is %d\n", *pt);
        *pt = 20;
printf("Further updated value is %d\n", var);

        var = 30;
printf("The value is %d\n", *pt);


Here, var is a normal variable that stores the value 10. The pointer pt is assigned the address of var using the & (address-of) operator. Therefore, pt now holds the memory address where var is stored.
In , " printf(Updated value is %d\n", *pt); " dereferencing is used on the left-hand side of an assignment. The statement *pt = 20 updates the value stored at the memory address pointed to by pt. As a result, the value of var changes from 10 to 20. Printing var confirms that the modification was done indirectly through the pointer.
      *pt = 20;
printf("Further updated value is %d\n", var);
In the above statement , dereferencing is used on the left-hand side of an assignment. The statement *pt = 20 updates the value stored at the memory address pointed to by pt. As a result, the value of var changes from 10 to 20. Printing var confirms that the modification was done indirectly through the pointer.
In the statement : 
        var = 30;
printf("The value is %d\n", *pt);
when the value of var is changed directly to 30, dereferencing pt again gives 30. This shows that the pointer continues to reference the same memory location, and any change made either directly or indirectly is reflected when dereferenced.

4.Pointers are preferred when direct access to memory, efficient data handling, or shared modification of data is required.

 (a) Dynamic Memory Allocation
 Pointers are required when memory must be allocated at runtime.
 Example:
 int *arr;
 arr = (int *)malloc(5 * sizeof(int));

 (b)Efficient Handling of Large Data Structures

 Passing large arrays or structures using pointers avoids unnecessary copying.

 Example:

 void process(int *arr) {
    arr[0] = 10;
 }
5.Limitations and Risks of Using Pointers
   (a)A pointer may refer to memory that has already been freed causing a situation of a dangling pointer.
   (b)Dereferencing a NULL pointer causes program crashes.
   (c)Memory leaks-Failure to free dynamically allocated memory wastes system resources
   (d)Incorrect pointer arithmetic or misuse can lead to unpredictable behavior.

6.Call by Value vs Call by Reference
 (a) Call by Value
 In call by value, a copy of the actual argument is passed to the function.
  Example:
   void change(int x) {
    x = 20;
 }

 int main() {
    int a = 10;
    change(a);
 }

 Explanation:
  "a" is copied into "x"
   Changes to x do not affect a
  Memory locations are different

 (b) Call by Reference
 In call by reference, the address of the variable is passed, allowing the function to modify the original value.
 Example:
 void change(int *x) {
    *x = 20;
 }

 int main() {
    int a = 10;
    change(&a);
 }
 Explanation:    
 Address of a is passed using &
 Dereferencing modifies the original variable
 Same memory location is accessed
7.
 (a)When Call by Value Is Preferred

 I. Data protection — original data should not change

 II. Simple calculations — values like counters or constants

 III. Safe programming — reduces risk of unintended side effects

 Example:

 int square(int x) {
    return x * x;
 }

 (b) When Call by Reference Is Preferred

 I. Need to modify original variables

 II. Returning multiple values from a function

 III. Efficient handling of large arrays or structures

  Example:

 void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
 }
   
