#include <stdio.h>
int binarysearch(int, const int*, int);
int main(){
	int n, x,i;
	printf("배열 크기 입력 : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("a[%d] 입력 : ",i);
		scanf("%d",&a[i]);
	}
	printf("검색할 수 입력 : ");
	scanf("%d",&x);
	printf("%d = a[%d]에 있습니다.\n",x, binarysearch(n,a,x));	
	return 0;
}
int binarysearch(int n, const int a[], int x){
	int location = 0, low = 1, high = n, mid;
	while(low<=high&&location==0){
		mid = (low+high)/2;
		if(x == a[mid])
			location = mid;
		else if(x<a[mid])
			high = mid-1;
		else
			low = mid+1;
	}
	return location;
}
