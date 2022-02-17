#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int solution(vector<int> &A){

	sort(A.begin(),A.end());

//	vector<int> vectB(A.size());

	for(int i = 0; i<A.size(); i+=2){
		if (A[i] != A[i+1]) {
			return A[i];

		}

		}
}




