#include<stdio.h>
#define MAX 100
int main() {
	// 鍒濆鍖栭槦鍒?
	int n,pailie[MAX],i,j,temp;
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		pailie[i]=i;
	}
	// 閬嶅巻鎵€鏈夋帓鍒?
	while(1) {
		// 杈撳嚭褰撳墠鎺掑垪
		for(i=1; i<=n; i++) {
			printf("%d ", pailie[i]);
		}
		printf("\n");
		// 鎵惧埌浠庡悗寰€鍓嶇涓€涓崌搴忓
		for(i=n-1; i>=1; i--) {
			if(pailie[i]<pailie[i+1]) {
				break;
			}
		}
		// 閬嶅巻瀹屼簡
		if(i==0) {
			break;
		}
		// 鎵惧埌浠庡悗寰€鍓嶇涓€涓瘮[i]澶х殑鏁?
		for(j=n; j>i; j--) {
			if(pailie[j]>pailie[i]) {
				break;
			}
		}
		temp=pailie[i];
		pailie[i]=pailie[j];
		pailie[j]=temp;
		// 鍙嶈浆i涔嬪悗鐨勯儴鍒?
		int left=i+1,right=n;
		while(left<right) {
			temp=pailie[left];
			pailie[left]=pailie[right];
			pailie[right]=temp;
			left++;
			right--;
		}
	}

	return 0;
}
