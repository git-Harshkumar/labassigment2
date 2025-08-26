#include<iostream>
#include <algorithm>
using namespace std ;
int main(){
	int s , count =0;
cout << "enter the size of the array";
cin >> s ;
int arr[s];
cout << "enter the element values";
for(int i=0;i<s;i++){
	cin >> arr[i];
}
	sort(arr.begin(), arr.end());
	for(int i=0;i<s-1;i++){
		if(arr[i]!=arr[i+1]){
			count++;
		}
	}
	cout << count ;
	return 0;
}
