#include <stdio.h>
int main()
{
	int t, i, j, k, n, m;
	scanf("%d", &t);
	while (t--) {
          char arr[102][102];
		  scanf("%d%d", &n, &m);
		  for (i = 0; i < n; i++) {
		      scanf("%s", arr[i]);
          }
		  int count = 0;
		  int b[102] = {0};
		  for (i = n-1; i >= 0; i--) {
			for (j = m-1; j >= 0; j--) {
			    if (arr[i][j] == '0' &&  b[j]%2 == 0) {
			       for (k = j ; k >= 0; k--) {
                       b[k]++;
                   }
                   count++;
                } else if (arr[i][j] == '1' && b[j]%2 != 0) {
			       for (k = j; k >= 0; k--) {
                       b[k]++;
                   }
                   count++;
                }
             }
           }
		   printf("%d\n", count);
	}
    return 0;
}