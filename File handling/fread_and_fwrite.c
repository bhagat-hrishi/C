#include<stdio.h>
struct threeNum
{
    int n1,n2,n3;
};
/*
arguments of fwrite
address of data to be written in the disk
size of data to be written in the disk
number of such type of data
pointer to the file where you want to write.

*/
int main()
{
    int n;
    struct threeNum num;

    FILE *fp;

    //open in write in binary mode
    fp=fopen("abc.bin","wb");
    if(fp==NULL)
    {
        printf("\nError");
        exit(1);
    }
    for(n = 1; n < 5; ++n)
   {
      num.n1 = n;
      num.n2 = 5*n;
      num.n3 = 5*n + 1;
      fwrite(&num, sizeof(struct threeNum), 1, fp);
   }
   fclose(fp);
   printf("\nData written success\n");


   FILE *fptr;

   if ((fptr = fopen("abc.bin","rb")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   for(n = 1; n < 5; ++n)
   {
      fread(&num, sizeof(struct threeNum), 1, fptr);
      printf("\nn1: %d\tn2: %d\tn3: %d", num.n1, num.n2, num.n3);
   }
   fclose(fptr);



}
