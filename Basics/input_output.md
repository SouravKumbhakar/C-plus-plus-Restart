# Input and Output in c++
--------------------------------

## cout object
----------  
    cout object is used to display the output on the screen.this is an predefined object of ostream class.  

    a  program to display the output on the screen is:

    ```cpp
    #include <iostream>
    using namespace std;
    int main(){
        cout << "Hello World";
    }
    ```

    '<<' is called insertion operator.

    Visual representation of cout:

    Program Data ----> cout ----> Screen/Monitor
                   <<        <<
                (insertion operator)

    The insertion operator (<<) takes data from your program and inserts it into cout,
    which then displays it on the screen/monitor.
    
## cin object
----------  
    cin object is used to take the input from the user.this is an predefined object of istream class.   

    its just like scanf() function in c language.  

    Syntax:
    ```cpp
    cin >> variable_name;
    ```
    '>>' is called extraction operator. 

    Visual representation of cin:

    inputed data from keyboard ----> cin ----> Program Data
                                  <<        <<
                                (extraction operator)  

