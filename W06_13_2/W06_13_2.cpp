#include <stdio.h>

int main() {
	int a[100];
	int n;

	printf("몇개?:");
	scanf_s("%d", &n);
	printf("숫자입력:");

	int e_id_sum = 0;
	int o_id_sum = 0;

	int e_sum = 0;
	int o_sum = 0;

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}


	for (int i = 0; i < n; i++) {

		if (i % 2 == 0) {
			e_id_sum += a[i];
		}
		else {
			o_id_sum += a[i];
		}
		if (a[i] % 2 == 0) {
			e_sum += a[i];
		}
		else {
			o_sum += a[i];
		}

	}
	printf("(1):%d (2):%d (3):%d (4):%d", e_id_sum, o_id_sum, e_sum, o_sum);
}