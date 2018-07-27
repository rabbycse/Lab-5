/*                                    rabby.code
                                    Md.Golam Rabbani
                             Rest in peace - 21-1! - https://www.hackerearth.com/submissions/rabby.code/
                                         2018
                                    */

#include <stdio.h>
#include<string.h>
int main()
{
    int test,flag,i,len;
    char num[1000000];
    unsigned long long int number;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%llu",&number);
        sprintf(num,"%llu",number);
        len=strlen(num);
        flag=0;
        for(i=0; i<len-1; i++)
        {
            if(num[i]=='2' && num[i+1]=='1')
            {
                flag++;
            }
        }
        if(flag==0 && (number%21)!=0)
        {
            printf("The streak lives still in our heart!\n");
        }
        else
        {
            printf("The streak is broken!\n");
        }
    }
    return 0;
}
