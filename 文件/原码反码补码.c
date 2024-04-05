#include <stdio.h>
#include <stdlib.h>

void  tran(int value){
	char start[100];
	_itoa_s(value,start,100,2);
	printf("%s\n",start);
}

int main()
{
	int x = 5;
	int y = -5;
	tran(x);
	tran(y);
	printf("%x",y);
	return 0;
}
/*0000 0000 0000 0000 0000 0000 0000 0101*/   
/*正数的原码=反码=补码，上侧为5的二进制展示，二进制第一位为符号位，正数为0，负数为1*/

/*1000 0000 0000 0000 0000 0000 0000 0101*/
/*负数在符号位上加1，上测为-5的原码*/

/*1111 1111 1111 1111 1111 1111 1111 1010*/
/*负数的反码是：除符号位之外的所有位取反，上侧为-5的反码*/

/*1111 1111 1111 1111 1111 1111 1111 1011*/
/*负数的补码是：在反码的基础上加1，上侧为-5的补码*/

/*fffffffb*/
/*每一个f代表的是1111，即4位，上侧为-5的十六进制*/