# Keywords in C++
-------------
Keywords are the reserved words in c++ which are used to perform some specific operations.  

in c++ there are 63 keywords.   

>
Those 63 keyword are:
| asm        | auto      | bool      | break     | case       | catch      |
| char       | class     | const     | continue  | default    | delete     |
| do         | double    | else      | enum      | explicit   | export     |
| extern     | false     | float     | for       | friend     | goto       |
| if         | inline    | int       | long      | mutable    | namespace  |
| new        | operator  | private   | protected | public     | register   |
| reinterpret_cast | return | short  | signed    | sizeof     | static     |
| static_cast | struct   | switch    | template  | this       | throw      |
| true       | try       | typedef   | typeid    | typename   | union      |
| unsigned   | using     | virtual   | void      | volatile   | wchar_t    |
| while      | and       | and_eq    | bitand    | bitor      | compl      |
| not        | not_eq    | or        | or_eq     | xor        | xor_eq     |

>
# Identifiers
------------
Identifiers are the names given to entities like variables, functions, pointers, structures, unions, and  classes, etc.    

Rules for writing identifiers:

1. alphanumeric characters are allowed.
2. first character should be an alphabet or underscore.
3. no white space and special characters are allowed except underscore.
4. case sensitive.  


examples of identifiers:

are allowed: abc, _abc, abc123, _123, a1b2c3, abc_123, _abc_123, etc.  

are not allowed: 1abc, @abc, abc%123, etc.    

# Constants
----------
Constants are the fixed values that the program may not alter during its execution. 

types of constants:

1. integer constants
   integer constants are the constants that are represented in numeric form.        
   examples: 123, -456, 0, 123L, 0123, 0x123, 0X123, etc.
   types of integer constants:
   - decimal form: 123, -456, 0, etc.
   - octal form: 0123, etc.
   - hexadecimal form: 0x123, 0X123, etc.
   - binary form: 0b1010, 0B1010, etc.  
  
2. floating point constants
   floating point constants are the constants that are represented in decimal form.
   examples: 123.45, -456.78, 0.0, 123.45e6, 0.00012345, etc.
   types of floating point constants:
   - fractional form: 123.45, -456.78, 0.0, etc.
   - exponential form: 123.45e6, 0.00012345, etc. 
3. character constants
   character constants are the constants that are represented in character form.    
   examples: 'a', 'b', 'c', '1', '2', '3', etc.
4. string constants
   string constants are the constants that are represented in string form i.e a collection of characters.
   examples: "hello", "world", "123", "456", etc.
5. boolean constants
   boolean constants are the constants that are represented in boolean form.
   examples: true, false, 1, 0, etc.        

# Symbolic Constants
--------------------
Symbolic constants are the constants that are represented in symbolic form.
examples: PI, MAX_VALUE, MIN_VALUE, etc.    


# Data Types
------------
Data types are the types of data that the program may handle.

types of data types:

1. basic data types

   - int                --> 2 Bytes     -32,768 to 32,767
   - signed int         --> 2 Bytes     -32,768 to 32,767
   - unsigned int       --> 2 Bytes     0 to 65,535
   - short int          --> 2 Bytes     -32,768 to 32,767
   - signed short int   --> 2 Bytes     -32,768 to 32,767
   - unsigned short int --> 2 Bytes     0 to 65,535
   - long int           --> 4 Bytes     -2,147,483,648 to 2,147,483,647
   - signed long int    --> 4 Bytes     -2,147,483,648 to 2,147,483,647
   - unsigned long int  --> 4 Bytes     0 to 4,294,967,295
   - float              --> 4 Bytes     3.4E-38 to 3.4E+38
   - double             --> 8 Bytes     1.7E-308 to 1.7E+308
   - long double        --> 10 Bytes    3.4E-4932 to 1.1E+4932
   - char               --> 1 Byte      -128 to 127
   - wchar_t            --> 2 Bytes     0 to 65,535
   - void               --> 0 Bytes     no range
  
2. derived data types
   - array
   - pointer
   - reference  
3. user defined data types
   - structure
   - union
   - enum   

# Operators
-----------
operator is a symbol that performs some operations
