//
//  main.c
//  numb1
//
//  Created by lanouhn on 15/1/13.
//  Copyright (c) 2015年 lanouhn. All rights reserved.
//
/*
 人员：赵伟争
 功能：1.(*)输入一个整数,判断奇偶,并输出“某某是奇数”或者“某某是偶数”
 时间：2015-1-13  2：50
 
 */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int numb;
    
    printf("请输入一个整数：");
    scanf("%d",&numb);
   
    //判断numb是否是偶数
    if(numb % 2 == 0)
    {
        printf("%d是偶数！\n",numb);
    }
    //判断numb是否是奇数
    if(numb % 2 != 0)
    {
        printf("%d是奇数！\n",numb);
    }
  
    return 0;
}
