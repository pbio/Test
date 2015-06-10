//
//  problem10.c
//  Testing
//
//  Created by Paul Bioche on 6/10/15.
//  Copyright (c) 2015 LaserLab. All rights reserved.
//

#include <stdio.h>
#include "main.h"

int Problem_10(){
    long sum=0;
    for (long i=2; i<2000000; i++){
        if (isPrime(i)==1){
            sum+=i;
        }
    }
    printf("%ld", sum);
    return 0;
}