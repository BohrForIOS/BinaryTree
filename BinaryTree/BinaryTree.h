//
//  BinaryTree.h
//  BinaryTree
//
//  Created by 严锦龙 on 17/7/13.
//  Copyright © 2017年 moonbasa. All rights reserved.
//

#ifndef BinaryTree_h
#define BinaryTree_h

#include <stdio.h>
typedef char ElemType;
typedef struct BiTNode {
    char Data;
    struct BiTNode *lchild, *rchild;
}BiTNode;

typedef BiTNode *BiTree;
// 创建一颗二叉树
void CreateBiTree(BiTree T);
// 前序遍历二叉树
void PreOrderTraverse(BiTree T, int level);
#endif /* BinaryTree_h */
