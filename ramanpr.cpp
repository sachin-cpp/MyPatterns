// C++ program for implementation of
// divide and conquer algorithm
// to find a given key in a row-wise
// and column-wise sorted 2D array
#include<bits/stdc++.h>
#define ROW 4
#define COL 4
using namespace std;

// A divide and conquer method to
// search a given key in mat[]
// in rows from fromRow to toRow
// and columns from fromCol to
// toCol
void search(int mat[ROW][COL], int fromRow, int toRow,
					int fromCol, int toCol, int key)
	{
		// Find middle and compare with middle
		int i = fromRow + (toRow-fromRow )/2;
		int j = fromCol + (toCol-fromCol )/2;
		if (mat[i][j] == key) // If key is present at middle
		cout<<"Found "<< key << " at "<< i <<
							" " << j<<endl;
		else
		{
			// right-up quarter of matrix is searched in all cases.
			// Provided it is different from current call
			if (i != toRow || j != fromCol)
			search(mat, fromRow, i, j, toCol, key);

			// Special case for iteration with 1*2 matrix
			// mat[i][j] and mat[i][j+1] are only two elements.
			// So just check second element
			if (fromRow == toRow && fromCol + 1 == toCol)
			if (mat[fromRow][toCol] == key)
				cout<<"Found "<< key<< " at "<<
							fromRow << " " << toCol<<endl;

			// If middle key is lesser then search lower horizontal
			// matrix and right hand side matrix
			if (mat[i][j] < key)
			{
				// search lower horizontal if such matrix exists
				if (i + 1 <= toRow)
				search(mat, i + 1, toRow, fromCol, toCol, key);
			}

			// If middle key is greater then search left vertical
			// matrix and right hand side matrix
			else
			{
				// search left vertical if such matrix exists
				if (j - 1 >= fromCol)
				search(mat, fromRow, toRow, fromCol, j - 1, key);
			}
		}
	}

// Driver code
int main()
{
	int mat[ROW][COL] = { {10, 20, 30, 40},
							{15, 25, 35, 45},
							{27, 29, 37, 48},
							{32, 33, 39, 50}};
	int key = 50;
	for (int i = 0; i < ROW; i++)
	for (int j = 0; j < COL; j++)
		search(mat, 0, ROW - 1, 0, COL - 1, mat[i][j]);
	return 0;
}

// This code is contributed by Rajput-Ji
