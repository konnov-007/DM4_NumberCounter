#include <stdio.h>
#include <stdlib.h>

int numberCounter(){
	int min=0, max=100000;
	int tmp1, tmp2;
	int countSum=0, count5,count3;

	FILE *output;
	output = fopen ("NumbersCounter.txt", "w");
	
	for(int i=min; i<max; i++)
	{
		tmp1=i; count5=0; count3=0;

		while(tmp1>0)
		{
			tmp2=tmp1%10;
			if(tmp2==3) 
				count3++;
			if(tmp2==5) 
				count5++;
			tmp1/=10;
		}
	
		if(count3==1&&count5==2)
		{
			countSum++;
			fprintf(output, "\n%d, count = %d", i, countSum);
		}
	}
	fclose(output);
	printf("Amount of two 5 numbers and one 3 number in range [0; 100000] is %d", countSum);
}


main(){
	numberCounter();
puts("\n");
system("PAUSE");
return 0;	
}
