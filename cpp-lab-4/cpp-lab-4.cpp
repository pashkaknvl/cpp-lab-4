#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	while (n <= 0) {
		printf("Error: incorrect value. n must be >0:");
		scanf("%d", &n);
	}

	if (n * (n + 1) / 2 % 2 != 0)
		printf("NO\n");
	else {
		printf("YES\n");
		int halfsum = n * (n + 1) / 4;
		int kp = 0;
		for (int i = n; i > 0; i--) {
			if (i <= halfsum) {
				kp++;
				halfsum -= i;
			}
		}

		printf("%d\n", kp);
		halfsum = n * (n + 1) / 4;
		for (int i = n; i > 0; i--) {
			if (i <= halfsum) {
				printf("%d ", i);
				halfsum -= i;
			}
		}

		int km = n - kp;
		printf("\n%d\n", km);
		halfsum = n * (n + 1) / 4;
		for (int i = n; i > 0; i--) {
			if (i <= halfsum)
				halfsum -= i;
			else
				printf("%d ", i);
		}
	}
}