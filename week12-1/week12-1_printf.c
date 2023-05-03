#include <stdio.h>
int main()
{
    FILE*fout = fopen("flie.txt","w");
    printf("Hellow World\n");
    fprintf(fout,"Hellow World在檔案裡\n");
}
