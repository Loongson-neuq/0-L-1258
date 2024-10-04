#include ".assignment/test.h"

// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result &result)
{
    scanf("%d,%d,%d", &a, &b, &c);
	int t;
	if (a > b){
		t = a;
		a = b;
		b = t;
	}
	if (a > c) {
		t = a;
		a = c;
		c = t;
	}
	if (b > c) {
		t = b;
		b = c;
		c = t;
	}
	result.min=c;
    result.mid=b;
    result.max=a;
		printf("max=%d,mid=%d,min=%d\n", &a, &b, &c);
}
