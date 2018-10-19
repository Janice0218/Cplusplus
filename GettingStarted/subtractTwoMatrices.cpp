// HELLO WORLD!, This is our very first program to subtract two matries taken as input from user.

/*
    - #include is used to include header files enclosed in < > or " ".
    - Header files are libraries that contain some in-built functionalities.
    - iostream is the basic library for input-output related routines.
    
    - multi-line comments in C++ can be enclose using /asterisk and asterisk/ where * is representing asterisk.
    
    - single line comments can be inserted after // (two back-slashes).    
*/
#include <iostream> 

/*
    - all the input-output related routines can be called in std namespace, so
    instead of everytime using std::cin and std::cout, 
    we directly use the namespace std in the whole program.
*/
using namespace std;

// every C++ program has a main FUNCTION which gets executed when we execute the program.

/*
    - syntax of a C++ function is:
    
    functionReturnType functionName(){
        function body;
    }
*/
int main(){
    
    /*
        - syntax of declaring variables is :
        variableType variableName ;
        
        - Multiple variables of the same type can be declared in the same line, e.g:
        varType varName1, varName2, varName3 ;
        
        - EVERY VALID STATEMENT IN C++ PROGRAM IS TERMINATED BY A SEMICOLON i.e. ';'.
    */
    
    // declare three variables 
    int row1;row2;  
	int column1, column2;
	int matrix1[100][100];
	int matrix2[100][100];
	int matrixsub[100][100];
 	int i, j,k;
    
    /*
        - Taking input from the user 
        1. cin (see - in) is used to take input from the user.
        2. >> (stream extraction) operator has to be used along with the variable name in which input is to be stored.
        3. multiple variables can be taken as input in different variables in the same cin statement using:
            cin >> varName1 >> varName2 >> varName3 ;
    */
    
    // take two numbers as input from standard input (console)
    cout << "Enter rows and columns for first matrix: ";
    cin >> row1 >> column1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> row2 >> column2;
    
    while (column1!=row2){
        cout << "Error! The first column matrix not equal the second one!";
        cout << "Enter rows and columns for first matrix: ";
        cin >> row1 >> column1;
        cout << "Enter rows and columns for second matrix: ";
        cin >> row2 >> column2;
    }
    
    cout << endl << "Matrix 1 Elements:" << endl;
    for(i = 0; i < row1; ++i){
        for(j = 0; j < column1; ++j){
            cout << "Element a is" << i + 1 << j + 1 << " : ";
            cin >>matrix1[i][j];
         }
    }
    cout << endl;

    cout << endl << "Matrix 2 Elements: " << endl;
    for(i = 0; i < row2; ++i){
        for(j = 0; j < column2; ++j){
            cout << "Element a is" << i + 1 << j + 1 << " : ";
            cin >> matrix2[i][j];
        }
    }
    cout << endl;

    for(i = 0; i < row1; ++i){
        for(j = 0; j < column2; ++j){
            matrixsub[i][j]=0;
        }
    }

    for(i = 0; i < row1; ++i){
        for(j = 0; j < column2; ++j){
            for(k = 0; k < row1; ++k){
                matrixsub[i][j] += matrix2[i][k] - matrix1[k][j];
            }
        }
    }

    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < row1; ++i){
        for(j = 0; j < column2; ++j){
            cout << " " << matrixsub[i][j];
                if(j == column2-1)
                    cout << endl;
        }
    }

    return 0;
}
