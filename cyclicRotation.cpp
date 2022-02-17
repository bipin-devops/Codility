#include <iostream>
#include <vector>
#include <cstdio>
#include <array>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> &A, int K) {
	vector<int> B(A.size());

	for(int i = 0; i<A.size(); i++){
		B[(i+K)/A.size()] = A[i];
	}



	return B;


}


