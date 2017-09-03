#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int buck[10];

int getRank(int i) {
	int c =0;
	for(int j =i-1; j >=0; j--){
		c+=buck[j];
	}
	return c;
}
int main() {
	while(1){
		string num;
		cin>>num;
		memset(buck,0,sizeof(buck));
		int mul ,div ;
		mul = div = 1;
		int rank = 1;
		for(int i=num.size() -1;i>=0; i++){
			buck[num[i]-48]++;
			if(num.size()-1-i) mul*=(num.size() -1 -i);
			div*=buck[num[i]-48];
			rank += getRank(i)*mul/div;
		}
		cout << rank << endl;
	}
}