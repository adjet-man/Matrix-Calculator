#include <iostream>
#include <vector>
#include <limits>


using namespace std;

// function to input matrix
void inputMatrix(vector<vector<int>>& matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        vector<int> temp;
        for (int j = 0; j < cols; j++) {
            int num;
            while (!(cin >> num)) { // loop until valid integer is entered
                cin.clear(); // clear input stream
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore invalid input
                cout << "Invalid input. Please enter an integer: ";
            }
            temp.push_back(num);
        }
        matrix.push_back(temp);
    }
}
// function to display matrix
void displayMatrix(vector<vector<int>> matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// function to add two matrices
void addMatrices(vector<vector<int>> matrix1, vector<vector<int>> matrix2, vector<vector<int>>& result) {
    for (int i = 0; i < matrix1.size(); i++) {
        vector<int> temp;
        for (int j = 0; j < matrix1[i].size(); j++) {
            temp.push_back(matrix1[i][j] + matrix2[i][j]);
        }
        result.push_back(temp);
    }
}

// function to subtract two matrices
void subtractMatrices(vector<vector<int>> matrix1, vector<vector<int>> matrix2, vector<vector<int>>& result) {
    for (int i = 0; i < matrix1.size(); i++) {
        vector<int> temp;
        for (int j = 0; j < matrix1[i].size(); j++) {
            temp.push_back(matrix1[i][j] - matrix2[i][j]);
        }
        result.push_back(temp);
    }
}

// function to multiply two matrices
void multiplyMatrices(vector<vector<int>> matrix1, vector<vector<int>> matrix2, vector<vector<int>>& result) {
    for (int i = 0; i < matrix1.size(); i++) {
        vector<int> temp;
        for (int j = 0; j < matrix2[0].size(); j++) {
            int sum = 0;
            for (int k = 0; k < matrix2.size(); k++) {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            temp.push_back(sum);
        }
        result.push_back(temp);
    }
}

int main() {
    int rows1, cols1, rows2, cols2;
    cout << "Enter number of rows and columns of first matrix: ";
    cin >> rows1 >> cols1;
    vector<vector<int>> matrix1;
    cout << "Enter elements of first matrix: ";
    inputMatrix(matrix1, rows1, cols1);
    cout << "Enter number of rows and columns of second matrix: ";
    cin >> rows2 >> cols2;
    vector<vector<int>> matrix2;
    cout << "Enter elements of second matrix: ";
    inputMatrix(matrix2, rows2, cols2);
    if (rows1 != rows2 || cols1 != cols2) {
        cout << "Matrices are not of same size." << endl;
        return 0;
    }
    vector<vector<int>> result;
    char op;
    
	cout << "Enter operation to perform (+, -, *): ";
	cin >> op;

	switch (op) {
		case '+':
			addMatrices(matrix1, matrix2, result);
			break;

		case '-':
			subtractMatrices(matrix1, matrix2, result);
			break;

		case '*':
			multiplyMatrices(matrix1, matrix2, result);
			break;

		default:
			cout << "Invalid operation" << endl;
			return 0;
	}

	cout << "Result: " << endl;
	displayMatrix(result);

    return 0;
}