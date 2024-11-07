# New and Delete memory management operators
-------------------------------------------
## New Operator
-----------
new is an operator in c++ used to allocate memory dynamically at runtime.

in case of malloc() function, 
### memory is allocated in stack memory area. and it is statically allocated. 
### also for malloc() function, we have to specify the size of the memory to be allocated , and 
### type casting is also required.


but in case of new operator, 
### memory is allocated in heap memory area. and it is dynamically allocated.

### also for new operator, we don't need to specify the size of the memory to be allocated, and 

### type casting is not required.


example of new operator:
```cpp
int *p = new int; // this is a dynamic allocation of memory for an single block of memory.
``` 
for multiple blocks of memory:
```cpp
int *p = new int[10]; // this is a dynamic allocation of memory for an array of 10 integers.
``` 

## Delete Operator
------------
delete is an operator in c++ used to deallocate the memory dynamically allocated by new operator.

example of delete operator:
```cpp
delete p;
``` 
