//
//  Problem12.c
//  Testing
//
//  Created by Paul Bioche on 3/3/15.
//  Copyright (c) 2015 LaserLab. All rights reserved.
//

#include <stdio.h>
#include "main.h"

int triNum(int Num);
int countFactors(int Num);

int Problem_12(){
    int index=23000;
    printf("%d", index);
    int tri;
    
    do{
        tri=triNum(index);
        printf("%d\n", index);
        printf("%ld\n", tri);
        index=index+500;
        
    }
    while(countFactors(tri)<100);
    
    printf("Solution\n %d", index-1);
    printf("\n %ld", triNum(index-1));
    return 0;
}

int triNum(int Num){
    int total=0;
    for(int i=1; i<=Num; i++){
        total+=i;
    }
    return total;
}

int countFactors(int  Num){//returns number of factors
    int Factors=0;
    int sqrtNum=sqrt(Num);
    for (int i=2; i<=sqrtNum; i++)
        if (Num%i==0)
            Factors++;
    return Factors;
}

