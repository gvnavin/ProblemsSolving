#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int buck[10];

int getFact( int f) {
	int fact =1;
	for(int i =1; i<=f; i++){
		fact*=i;
	}
	return fact;
}

int getRank(int i ){
	int  c =0;
	for(j = i-1;j>=0;j--){
		c+=buck[j];
	}
	return c;
}

int getNum(int r){
	int c = -1;
	int x = 0;
	while(x <=r){
		c++;
		x+=buck[c];
	}
	return c;
}

int main() {
	while(1) {
		string num;
		cin >> num;
		int rank ;
		int div = 1;
		memset(buck,0,sizeof(buck));
		for(int i = num.length()-1; i >=0; i--){
			buck[num[i]-48]++;
			div*=buck[num[i]-48];
		}
		int arr[num.length()];
		int fact = getFact(num.length()-1);
		rank --;
		for(int i= 0; i<num.length() ; i++){
			arr[i] = rank*div/fact;
			arr[i] = getNum(arr[i]);
			int r = getRank(arr[i]);
			rank-= r*fact/div;
			div/=buck[arr[i]];
			buck[arr[i]]--;
			if(fact!=1) fact/=(num.length()-1-i);
		}
		
		
	}
}