#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;


int data[100000];

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


}
int maxSubArraySum(int size)
{
   int max_so_far = data[0];
   int curr_max = data[0];

   for (int i = 1; i < size; i++)
   {
        curr_max = max(data[i], curr_max+data[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}
