//============================================================================
// Name        : Codility_Practice.cpp
// Author      : Bipin Raj Sitoula
// Version     :
// Copyright   : Copyright-Bipin Raj Sitoula
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int solution(int N) {
	vector<int> v;

    while (N>0) {
        v.push_back(N%2);
        N/=2;
    }

    int b = 0;
    int maxb = 0;

    for (int i = v.size()-1; i>=0; i--) {
        if (v[i]==0)  b++;
        else if (v[i]==1) {maxb = max(maxb, b);  b=0;}

    }




    return maxb;

}

int main(){
	int x = solution(529);
	cout<<x;



}
