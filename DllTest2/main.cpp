#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mydll.h"
#include "socketclientdll.h"



int main111(int argc,char *argv[])
{
	
	int a=add(3, 5);

	printf("%d\n",a);
	return 0;
}
