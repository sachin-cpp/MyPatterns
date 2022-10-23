# Python3 program for implementation of
# divide and conquer algorithm to find
# a given key in a row-wise and column-wise
# sorted 2D array a divide and conquer method
# to search a given key in mat in rows from
# fromRow to toRow and columns from fromCol to
# toCol
def search(mat, fromRow, toRow, fromCol, toCol, key):

	# Find middle and compare with middle
	i = fromRow + (toRow - fromRow) // 2;
	j = fromCol + (toCol - fromCol) // 2;
	if (mat[i][j] == key): # If key is present at middle
		print("Found " , key , " at " , i , " " , j);
	else:

		# right-up quarter of matrix is searched in all cases.
		# Provided it is different from current call
		if (i != toRow or j != fromCol):
			search(mat, fromRow, i, j, toCol, key);

		# Special case for iteration with 1*2 matrix
		# mat[i][j] and mat[i][j+1] are only two elements.
		# So just check second element
		if (fromRow == toRow and fromCol + 1 == toCol):
			if (mat[fromRow][toCol] == key):
				print("Found " , key , " at " , fromRow , " " , toCol);

		# If middle key is lesser then search lower horizontal
		# matrix and right hand side matrix
		if (mat[i][j] < key):

			# search lower horizontal if such matrix exists
			if (i + 1 <= toRow):
				search(mat, i + 1, toRow, fromCol, toCol, key);

		# If middle key is greater then search left vertical
		# matrix and right hand side matrix
		else:
			
			# search left vertical if such matrix exists
			if (j - 1 >= fromCol):
				search(mat, fromRow, toRow, fromCol, j - 1, key);

# Driver code
if __name__ == '__main__':
	mat = [[ 10, 20, 30, 40],
		[15, 25, 35, 45],
		[27, 29, 37, 48],
		[32, 33, 39, 50]];
	rowcount = 4; colCount = 4; key = 50;
	for i in range(rowcount):
		for j in range(colCount):
			search(mat, 0, rowcount - 1, 0, colCount - 1, mat[i][j]);

# This code is contributed by 29AjayKumar
