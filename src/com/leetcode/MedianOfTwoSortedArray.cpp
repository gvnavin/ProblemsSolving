class Solution {
public:

    int findK(int A[], int m, int B[],int n, int k){
        int min = 0;
        int max = m-1;
        int mid ;
        while(min <= max) {
            mid = (min+max)/2;
            int ne = k -1 - mid;
            int l = ne -1;
            
            if(ne > n) {
                min = mid +1;
            }else if(ne < 0){
                max = mid -1;
            }else {
                if( (l<0 || B[l] <= A[mid]) && (ne > n-1 || B[ne] >= A[mid]))
                    return mid;
                else if((l<0 || B[l] <= A[mid])) {
                    max = mid -1;
                }else {
                    min = mid +1;
                }
            }
        }
        
        return -1;
    }

    int kthMinimum(int A[], int m, int B[], int n , int k ){
        if(m > k) m = k;
        if(n > k) n = k;
        
        int x = findK(A,m,B,n,k);
        if(x >=0 ) return A[x];
        x =  findK(B,n,A,m,k);
        return B[x];
    }
    
    double findMedianSortedArrays(int A[], int m, int B[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!n){
            if(m%2 == 0) return (A[(m-1)/2] + A[m/2])/2.0;
            else return A[m/2];
        }
        if(!m){
            if(n%2 == 0) return (B[(n-1)/2] + B[n/2])/2.0;
            else return B[n/2];
        }
        
        int mid = (m+n+1)/2;
        double ans = kthMinimum(A,m,B,n,mid);
        if((m+n)%2==0) {
            ans += kthMinimum(A,m,B,n,mid+1);
            ans/=2.0;
        }
        return ans;
    }
};