/*水仙花数是指一个N位正整数（N≥3），它的每个位上的数字的N次幂之和等于它本身。例如：153=1 
 。 本题要求编写程序,计算所有N位水仙花数。*/
#include <stdio.h>
#include <math.h>
int main(){
   int N, i, temp, sum;
   scanf("%d",&N);
   for (i = pow(10, N-1); i < pow(10, N); i++) {
		temp = i, sum = 0;
		while (temp) {    // 取各个位上的数。
			sum += pow(temp % 10, N);
			temp /= 10;
		}
		if (sum == i)	printf("%d\n", i);
	}  
   return 0;
}