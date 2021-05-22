/*
	heuristic Knapsack
*/
//#include <bits/stdc++.h>
#include <stdio.h>
//using namespace std;

int max(int a, int b){
	
	return (a>b) ? a : b;
	
}

int knapsack(int W, int wt[], int val[], int n){
	//base case
	if(n == 0 || W == 0){
		return 0;
	}
	
	if(wt[n] > W){
		return knapsack(W, wt, val, n-1);
	}else{
		return max(val[n] + knapsack(W - wt[n], wt, val, n-1), knapsack(W, wt, val, n-1));
	}
}

int main(){
	int val[] = {120,160,180};
	int wt[] = {50, 60, 70};
	int W = 100;
	int n = sizeof(val) / sizeof(val[0]);
	printf("%d", knapsack(W, wt, val, n));
	return 0;
}
