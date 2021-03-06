/* 도안고 30231 홍선기
기하와벡터-이차곡선 포물선 개형과 알아보기
*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int a, b, c = 1;
int x, y;
int last_x = 1;

int select_b() {
	printf("b값을 정하시오.\n");
	scanf("%d", &b);
	if (b == 0) {
		return 0;
	}
}

int main()
{
	printf("(y+a)^2 = b(x+c) \n형태의 식에서 각 a,b,c 값을 정하시오.\n");
	printf("a값을 정하시오.\n");
	scanf("%d", &a);
	while (select_b() == 0) {
		select_b();
	}

	printf("c값을 정하시오.\n");
	scanf("%d", &c);
	printf("--------------------------------------------\n");
	printf("포물선......계산중\n");
	printf("--------------------------------------------\n");
	printf("초점 좌표: ( %d , %d )\n\n", b / 4 - c, -a);
	printf("준선 : X = %d\n\n", -b / 4 - c);
	printf("꼭짓점 좌표 : ( %d , %d )\n\n", -c, -a);

	for (int i = 20; -20 <= i; i--) {
		int count = 0;

		y = i;
		x = pow(y + a, 2) / b - c;

		if (y >= 0) {
			printf(" %d  ", i);
		}
		else printf("%d  ", i);

		if (0 <= x <= 20) {
			if (last_x != x) {
				while (count != x) {
					printf(" ");
					count++;
				}
				last_x = x;
				printf("*");
				count = 0;
			}

		}

		if (-20 <= x <0) {
			if (last_x != x) {
				while (count != x) {
					printf("   ");
					count--;
				}
				last_x = x;
				printf("*");
				count = 0;
			}

		}
		printf("\n\n");
	}
	system("pause");
	return 0;
}