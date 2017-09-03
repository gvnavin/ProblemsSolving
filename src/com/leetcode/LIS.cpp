
 int LIS(int arr[], int n) {
	if(!n) return 0;
	int b[n];
	int prev[n];
	int j=-1;
	b[++j] = 0;
	prev[0] = -1;
	for(int i = 1; i < n; i++) {
		if(arr[b[j]] < arr[i]) {
			b[++j] = i;
			prev[i] = b[j-1];
		}else if(arr[b[0]] > arr[i]) {
			b[0] = i;
			prev[i] = -1;
		}else {
		 int low,high,mid;
		 low = 0; high = j;
		 while(low <= high) {
			mid = (low+high)/2;
			if(arr[b[mid]] < arr[i] ) {
				low = mid +1;
			}else {
				high = mid- 1;
			}
		 }
		 b[low] = i;
		 prev[i] = b[low -1];
		}
	}
	return j+1;
 }