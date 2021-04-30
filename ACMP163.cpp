#include <stdio.h>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	char equation[5];
	scanf("%s", equation);
	int res = 0;
	int num_position = 2;

	if(equation[2] == 'x') {
		num_position = 0;
	}

	if(equation[1] == '+') {
		if(equation[4] == 'x') {
			res = (equation[0] - '0') + (equation[2] - '0');
		} else {
			res = (equation[4] - '0') - (equation[num_position] -'0');
		}
	} else {
		if(num_position == 0) {
			res = (equation[0] - '0') - (equation[4] - '0');
		}
		else if(equation[4] == 'x') {
			res = (equation[0] - '0') - (equation[2] - '0');
		}
		else{
			res = (equation[4] - '0') + (equation[num_position] - '0');
		}
	
	}

	printf("%d\n", res);
}
