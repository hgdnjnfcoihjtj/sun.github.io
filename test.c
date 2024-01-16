#include <stdio.h>
int main()
{
	float f=3;
	printf("小数：f=%f \n",f);
	printf("111");
	int b=10;
	printf("十六进制输出：b=0x%x\n",b);
	char c='j';
	printf("输出一个字符：c=c%\n",c);
	printf("a的地址是：%p\n",&f);
	f=(float)b/3;
	printf("%f",f);
	return 0; 
	
}
   