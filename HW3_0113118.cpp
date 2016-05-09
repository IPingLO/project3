#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int data[10000];

int maxSubArraySum(int size);
int main (){

    int sizee=0;
    char ch[20];
    char X[]="x";
    int i=0;
    scanf("%19s",&ch);
    while(strcmp(ch,X) != 0)
    {

        data[i]=atoi(ch);

        i++;
        scanf("%19s",&ch);
    }

    sizee=i;
    int x;

	x=maxSubArraySum(sizee);
    cout << "max sum= "<<x;



