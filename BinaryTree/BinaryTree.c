//
//  BinaryTree.c
//  BinaryTree
//
//  Created by 严锦龙 on 17/7/13.
//  Copyright © 2017年 moonbasa. All rights reserved.
//

#include "BinaryTree.h"
#include <stdio.h>
#include <stdlib.h>



// 创建一颗二叉树
void CreateBiTree(BiTree T) {
    char c;
    
    scanf("%c", &c);
    
    if (' ' == c) {
        T = NULL;
    }
    else {
        T = (BiTree)malloc(sizeof(BiTNode));
        // 前序创建二叉树
        T->Data = c;
        CreateBiTree(T->lchild);
        CreateBiTree(T->rchild);
    }
}

void Visit(BiTree T, int level) {
    printf("%c位于%d层", T->Data, level);
}
// 前序遍历二叉树
void PreOrderTraverse(BiTree T, int level) {
    if (T) {
        Visit(T, level);
        PreOrderTraverse(T, level + 1);
        PreOrderTraverse(T, level + 1);
    }
}
