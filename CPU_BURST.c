#include<stdio.h>
	int main()
	{
    	int arr[1000], length = 0, c, bytesread,i;
        char input[1000];
        FILE *ptr_file;

    	ptr_file =fopen("CPU_BURST.txt","r");
        if (!ptr_file)
        	return 1;
        fgets( input, sizeof(input), ptr_file );
        char* input1 = input;
        while (sscanf(input1, "%d%n", &c, &bytesread) > 0) {
            arr[length++] = c;
            input1 += bytesread;
        }
        printf("The Array is \n [ ");
        for (i = 0; i < length-1; i++ ) {
            printf("%d : ", arr[i]);
        }
        printf("%d ] \n", arr[length-1]);
        return 0;
	}
