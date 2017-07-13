//
//  main.c
//  BinaryTree
//
//  Created by 严锦龙 on 17/7/13.
//  Copyright © 2017年 moonbasa. All rights reserved.
//

#include <stdio.h>
#include "BinaryTree.h"
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    BiTree T = (BiTree)malloc(sizeof(BiTNode));
    CreateBiTree(T);
    int level = 1;
    
    PreOrderTraverse(T, level);
    return 0;
}
