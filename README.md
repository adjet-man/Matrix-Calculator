# Introdction
This is a C++ program that performs basic matrix operations such as addition, subtraction, and multiplication.
#
The program starts by including three standard libraries: iostream, vector, and limits. It then defines four functions: inputMatrix, displayMatrix, addMatrices, subtractMatrices, and multiplyMatrices.
#
The inputMatrix function takes in a vector of vectors (matrix), number of rows and columns as inputs. It then loops through the rows and columns to input each element of the matrix. If the user enters an invalid integer, it will prompt the user to enter again.
#
The displayMatrix function takes in a matrix as input and displays its elements.
The addMatrices function takes in two matrices and adds them element-wise to produce a new matrix.
The subtractMatrices function takes in two matrices and subtracts them element-wise to produce a new matrix.
The multiplyMatrices function takes in two matrices and multiplies them using standard matrix multiplication rules to produce a new matrix.
#
In the main function, it prompts the user to enter the number of rows and columns for two matrices. Then it calls the inputMatrix function twice to take inputs for both matrices. If the dimensions of both matrices are not equal, it prints an error message. Otherwise, it prompts the user for an operation (+,-,*). Based on this operation, it calls one of the three functions (addMatrices, subtractMatrices or multiplyMatrices) to perform that operation on both matrices. Finally, it displays the result using displayMatrix function.