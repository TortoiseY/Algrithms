/*****
名称：归并排序
时间：2017/9/25

说明：
******/

//10 20 30 40 50 60 70 80 90 100
//11 21 31 41 51 61 71 81 91 101

#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#define size_1 10
#define size_2 8
int main(void) {
	int ar_1[size_1] = {10,20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int ar_2[size_2] = {11,21, 31, 41, 51, 61, 71, 81 };
	int ar_3[size_1 + size_2];
	int key_1,key_2;
	int loop_3=0, loop_1 = 0, loop_2 = 0;
	for (; loop_1 < size_1&&loop_2 < size_2;loop_3++) {
		if (ar_1[loop_1] < ar_2[loop_2]) {
			ar_3[loop_3] = ar_1[loop_1];
			loop_1++;
		}
		else {
			ar_3[loop_3] = ar_2[loop_2];
			loop_2++;
		}
	}
	if (loop_1 < size_1) {
		for (; loop_3 < size_1 + size_2; loop_1++,loop_3++) {
			ar_3[loop_3] = ar_1[loop_1];
		}
	}
	if (loop_2< size_2) {
		for (; loop_3 < size_1 + size_2; loop_2++, loop_3++) {
			ar_3[loop_3] = ar_2[loop_2];
		}
	}



	for (int loop_1 = 0; loop_1 < size_1+size_2; loop_1++) {
		printf("%d\t", ar_3[loop_1]);
	}
	system("pause");
	return 0;
}
