#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[2], sum =0;
    FILE *fpointer;
    fpointer = fopen("Print_sum_in_file.txt","a+");

    while (!feof(fpointer))
    {
        int num;
        fscanf(fpointer,"%d",&arr[num]);
        num += 1;
    }
    for (int g=0 ; g<2;g++)
    {
        sum +=arr[g];
    }

    printf("%d + %d = %d\n",arr[0],arr[1],sum);
    fprintf(fpointer,"\n%d",sum);
    fclose(fpointer);
    return 0;
}
