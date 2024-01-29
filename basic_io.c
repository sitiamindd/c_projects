/* written by sitiamindd */

#include<stdio.h>
#include<string.h>

void read_data(FILE *ptr, int data[], int *size)
{
	*size = 0;
	while(fscanf(ptr, "%d", &data[*size]) == 1)
		(*size)++;
}

void print_data(int data[], int size)
{
	int i;
	for(i=0; i < size; i++)
	{
		printf("%d\t", data[i]);
		if((i+1) % 10 == 0)
		{
			printf("\n");
		}
	}
}


double average(int data[], int size)
{
	int i;
	double avg = 0.0;

	for(i=0; i<size; i++)
	{
		avg += data[i];
	}
	return (avg/size);
}

int max(int data[], int size)
{
	int i;
	int max =0;

	for(i=0; i <size; i++)
	{
		if (data[i] > max)
		{
			max = data[i];
		}
	}

	return max;
}

void print_file(FILE * fptr)
{
	int c;
	rewind(fptr);
	while((c = getc(fptr)) != EOF)
	{
		putc(c, stdout);
	}
}


void double_space(FILE *ifp, FILE *ofp)
{
	int c;
	rewind(ifp);
	while((c = getc(ifp)) != EOF)
	{

		putc(c, ofp);
		//putchar(c);
		if(c == '\n')
		{
			putc('\n', ofp);

		}
	}

	putc('\n', ofp);
}

void write_anwers(char str[], int size, FILE *ofp)
{
	int i;

	for (i=0; i < size; i++)
	{
		putc(str[i], ofp);
	}

	putc('\n', ofp);

}

int main(int argc, char *argv[])
{
	int sz = 0;
	FILE *ifp, *ofp;
	int data[sz];
	char average_result[250];
	char max_result[250];

	//open input and output files
	//ifp is the homework file that contains "4 9 11 12 15"
	//ofp is the answer file write mode to print the result of average and max
	ifp = fopen("week4", "r+");
	ofp = fopen("answer-hw3", "w+");


	read_data(ifp, data, &sz);
	print_data(data, sz);
	print_file(ofp);
	printf("\n average score was %10f", average(data, sz));
	printf("\n max score is:  %d", max(data, sz));

	sprintf(average_result, "%f", average(data, sz));
	sprintf(max_result, "%d", max(data, sz));
	printf("\n");

	write_anwers("Integers values are: ", strlen("Integers values are: "), ofp);
	double_space(ifp, ofp); //reuse the same function learn during the class to write the homework number
	write_anwers("Average result is: ", strlen("Average result is: "), ofp);
	write_anwers(average_result, strlen(average_result), ofp); // new function to print the average result

	write_anwers("Max result is: ", strlen("Max result is: "), ofp);
	write_anwers(max_result, strlen(max_result), ofp); //call the same function to print the max result

	//close both files
	fclose(ifp);
	fclose(ofp);

	return 0;
}




