//
//  main.cpp
//  Print-adress
//
//  Created by czm on 15/12/16.
//  Copyright © 2015年 czm. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a=1;
    int *p;
    p=&a;
    printf("%d %d %x %x",a,p,&a,&p);
    return 0;
}
