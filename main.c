//
//  main.c
//  sum
//
//  Created by 20161104586 on 17/6/19.
//  Copyright © 2017年 马德辉. All rights reserved.
//

#include <stdio.h>

int main()
{
    int i=1,sum=0;
    while(i<=100)
    {
        sum=sum+i;
        i++;
    }
    printf("%d\n",sum);
}
