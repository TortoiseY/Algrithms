/*****
名称：插入排序
时间：2017/9/25

说明：插入排序的实例模型是扑克牌的整理，整理排的过程中，假设
	  全部未排序的牌是扣在桌子上的，从其中任意拿出一张key放到
	  拿牌的手中，执行排序，直到所有排完。
复杂度分析：O(n*n)
******/

//10 20 30 40 50 60 70 80 90 100

#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#define size 10
int main(void) {
	int ar[size] = {10,20, 30, 40, 50, 60, 70, 80, 90, 100 };

	int key;
	for (int loop_1 = 1; loop_1 < size; loop_1++) {
		key = ar[loop_1];
		int loop_2 = loop_1;
		while (loop_2 > 0 && ar[loop_2] > key) {
			ar[loop_2 + 1] = ar[loop_2];
			--loop_2;
		}
		ar[loop_2] = key;
	}


	for (int loop_1 = 0; loop_1 < 10; loop_1++) {
		printf("%d\t", ar[loop_1]);
	}
	system("pause");
	return 0;
	
}
