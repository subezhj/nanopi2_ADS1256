#include <stdio.h>
#include<unistd.h>
int main(int argc, char *argv[])
　　{
　　int ch;
　　opterr = 0;
　　while((ch = getopt(argc,argv,"a:bcde"))!= -1)
　　{
　　switch(ch)
　　{
　　case : printf("xxxtest");
　　case 'a': printf("option a:’%s’\n",optarg); break;
　　case 'b': printf("option b :b\n"); break;
　　default: printf("other option :%c\n",ch);
　　}
　　printf("optopt +%c\n",optopt);
　　}
　　return 0;
　　}

