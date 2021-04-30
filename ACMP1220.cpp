
#include <stdio.h>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;



int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i < n;i++) {
		scanf("%d", &arr[i]);
	}

	int k;
	scanf("%d", &k);
	int new_arr[n];
	
	if(k < 0) {
		k = k * -1;
		for(int i = 0; i < n;i++) {
			new_arr[i] = arr[(i+k)%n];
		}
	} else {
			for(int i = n - 1; i >= 0;i--) {
			new_arr[(i+k)%n] = arr[i];
		}		
	}


	for(int i : new_arr) {
		printf("%d ", i);
	}

printf("\n");


}
