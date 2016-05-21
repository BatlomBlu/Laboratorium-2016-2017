#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{

 	printf("float na int '%e' do '%i' \n", FLT_MAX, (int)FLT_MAX);
 	printf("double na int: '%e' do '%i' \n", DBL_MAX, (int)DBL_MAX);
 	printf("long double na double: '%Le' do '%e' \n\n", LDBL_MAX, (double)LDBL_MAX);
 	
  	printf("int na float: '%i' do '%e' \n", INT_MAX, (float)INT_MAX);
  	printf("long long int na double: '%lli' do '%e' \n", LLONG_MAX, (double)LLONG_MAX);
  	
	return 0;
}
