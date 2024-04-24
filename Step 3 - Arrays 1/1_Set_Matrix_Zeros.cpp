// https://www.codingninjas.com/studio/problems/zero-matrix_1171153

#include <bits/stdc++.h>
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m)
{

	// Approach 1 - Brute Force
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<m;j++){
	// 		if(matrix[i][j]==0){
	// 			for(int a=0;a<m;a++){
	// 				if (matrix[i][a]!=0) matrix[i][a]=-1;
	// 			}
	// 			for(int b=0;b<n;b++){
	// 				if (matrix[b][j]!=0) matrix[b][j]=-1;
	// 			}
	// 		}
	// 	}
	// }
	// for(int i=0;i<n;i++){
	// 	for (int j = 0; j < m; j++) {
	// 		if (matrix[i][j] == -1)
	// 				matrix[i][j] = 0;
	//     }
	// }
	//     return matrix;

	// Approach 2 - Better
	// int rows[n] = {0};
	// int cols[m] = {0};
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<m;j++){
	// 		if(matrix[i][j]==0){
	// 			rows[i]=1;
	// 			cols[j]=1;
	// 		}
	// 	}
	// }
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<m;j++){
	// 		if(rows[i] || cols[j]){
	// 			matrix[i][j]=0;
	// 		}
	// 	}
	// }
	// return matrix;

	// Approach 3 - Optimal
	int col1 = 1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] == 0)
			{
				matrix[i][0] = 0;

				if (j != 0)
					matrix[0][j] = 0;
				else
					col1 = 0;
			}
		}
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < m; j++)
		{
			if (matrix[i][0] == 0 || matrix[0][j] == 0)
			{
				matrix[i][j] = 0;
			}
		}
	}

	if (matrix[0][0] == 0)
	{
		for (int j = 1; j < m; j++)
		{
			matrix[0][j] = 0;
		}
	}

	if (col1 == 0)
	{
		for (int i = 0; i < n; i++)
		{
			matrix[i][0] = 0;
		}
	}

	return matrix;
}