#include <stdio.h>
int main()
{
	int marks , count;
	count = 0;
	marks = 0;
	

	while (count < 10)
	{
			printf("enter marks: \n");
			scanf(" %d",&marks);
			printf("marks = %d\n",marks);

			if (marks >=70)
			{
				printf("grade = A\n");
			}
			else if (marks >= 50)
			{
				printf("grade = B\n");
			}
			else if (marks >= 40)
			{
				printf("grade = C\n");
			}
			else if (marks >= 30)
			{
				printf("grade = S\n");
			}
			else
			{
				printf("grade = F\n");
			}
		count++	;
	}

	
	





	return 0;

}