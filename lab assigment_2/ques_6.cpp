#include<iostream>
using namespace std ;
void sparse(int sparse[100][3]){
	int row , col , n ;
	cout << "enter the no of rows , coloumns and the number of non zero element present";
	cin >> row >> col >> n ;
	sparse[0][0] = row ;
	sparse[0][1] = col ;
	sparse[0][2] = n ;
	cout << "enter the values in the sparse matrix " << endl;
	for(int i=0;i<n;i++){
		cin >> sparse[i][0] >> sparse[i][1] >> sparse[i][2] ;
	}	
}
void printmatrix(int mat[100][3]){
	cout << "Row  Col  Value" << endl;
    for (int i = 0; i <= mat[0][3]; i++) {
        cout << mat[i][0] << "  " 
             << mat[i][1] << "  " 
             << mat[i][2] << endl;
    }
}
void transpose(int mat[100][3] , int trans[100][3]){
	trans[0][0] = mat[0][1];
	trans[0][1] = mat[0][0];
	trans[0][2] = mat[0][2];
	int k = 1 ;
	for(int i =0;i<mat[0][1] ;i++){
		for(int j=1 ;j<=mat[0][2];j++){
			if(mat[j][1] == i){
				trans[k][0] = mat[i][1] ;
				trans[k][1] = mat[i][0] ;
				trans[k][2] = mat[i][2] ;
				k++;
			}
		}
	}
}
void addsparse(int a[100][3] , int b[100][3] , int sum[100][3]){
	int i= 1 , j = 1 , k = 1 ;
	sum[0][0] = a[0][0];
	sum[0][1] = a[0][1];
	while(i < a[0][2] && j < b[0][2]){
		if(a[i][0] < b[i][0] || (a[i][0] == b[i][0] && a[i][1] < b[i][1])){
			sum[k][0] = a[i][0];
			sum[k][1] = a[i][1];
			sum[k][2] = a[i][2];
			k++ ;
			i++ ;
		}
		else if(a[i][0] > b[i][0] || (a[i][0] == b[i][0] && a[i][1] > b[i][1])){
			sum[k][0] = b[j][0];
			sum[k][1] = b[j][1];
			sum[k][2] = b[j][2];
			k++;
			j++;
		}
		else{
			int s = a[i][2] + b[j][2];
			if(s!=0){
				sum[k][0] = a[i][0];
				sum[k][1] = a[i][1];
				sum[k][2] = s ;
				k++;
			}
			i++;
			j++;
		}
		while(i<=a[0][2]){
			sum[k][0] = a[i][0];
			sum[k][1] = a[i][1];
			sum[k][2] = a[i][2];
			k++;
			i++;
		}
		while(j<=b[0][2]){
			sum[k][0] = b[j][0];
			sum[k][1] = b[j][1];
			sum[k][2] = b[j][2];
			k++;
			j++;
		}
	}
	sum[0][2] = k-1 ;
}
int main(){
	int mat[100][3]  , trans[100][3] , a[100][3] , b[100][3] , sum[100][3];
//	sparse(mat);
//	transpose(mat , trans);
//	printmatrix(trans);
sparse(a);
sparse(b);
	addsparse(a, b , sum);
	printmatrix(sum);
	return 0 ;
}
