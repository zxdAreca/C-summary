//����ģ��˫ɫ��ҡ����ҡ��ʱ��ҡ��6����ɫ����롣
//��ɫ��1~33����ɫ��1~16

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int red[6]; /* 1-33 */
    int blue;   /* 1-16 */
    int i,j;
    int tmp;
    srand( (unsigned)time(NULL) );
    i = 0;
    while(i<6)
    {
        tmp = (1.0 * rand() /RAND_MAX) * 33 + 1;
        for(j=0; j<i;j++)
        {
            if(red[j] == tmp)
            {
                break;
            }
        }
        if(j==i)
        {
            red[i] = tmp;
            i++;
        }
    }
    blue = (1.0 * rand() /RAND_MAX) * 16 + 1;

    for(i = 0; i<6; i++)
    {
        printf("%d,",red[i]);
    }
    printf("\n%d",blue);
    return 0;
}
