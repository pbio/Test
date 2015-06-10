//
//  Problem2.c
//  Testing
//
//  Created by Paul Bioche on 2/15/15.
//  Copyright (c) 2015 LaserLab. All rights reserved.
//

#include <stdio.h>

int problem_2(){
    int fib[1000];
    int index=2;
    fib[0]=1;
    fib[1]=2;
    int sum =2;
    do{
        fib[index]=fib[index-1]+fib[index-2];
        if (fib[index]%2==0)
            sum=sum+fib[index];
        printf("%d\n", fib[index]);
        index++;
    } while (fib[index-1]<4000000);
    printf("wrong answer= 4613731");
    return sum;
}
