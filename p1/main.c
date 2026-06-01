#include<stdio.h>

int main(void) {
	char x[10] = {};
    char most = '\0';
    int currentcnt = 0, mostcnt = 0;

	for (char *p1 = x;p1 < x + 10; p1++) scanf("%c", p1);

	for (char *p = x;p < x + 10;p++) {
		currentcnt = 0;
		for (char *q = x;q < x + 10;q++) {
			if (*p == *q) {
                currentcnt++;

			}
		}
		if (currentcnt > mostcnt) {
			mostcnt = currentcnt;
			most = *p;
		}
	}

    

	printf("%c %d", most, mostcnt);
	return 0;
}
