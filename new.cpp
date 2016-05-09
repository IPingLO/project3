#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int partitionn (int *A,int l,int r,int pivot_position);
void quicksort(int *A,int l,int r);
int select_random_middle(int *A,int l,int r);
void swapp(int *A,int i,int j);

int main (){

    int sizee=0;
    int A[10000]={0};
    char ch[20];
    char X[]="x";
    int i=0;
    scanf("%19s",&ch);
    while(strcmp(ch,X) != 0)
    {

        A[i]=atoi(ch);
        //cout<< A[i] << endl;
        i++;
        scanf("%19s",&ch);
    }

    sizee=i;

    quicksort(A, 0, sizee - 1);
    for(int c=0;c<sizee;c++)
        printf("%d ",A[c]);
    printf("\n");



}