#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 定义二叉树节点结构
typedef struct BiTNode {
    char data;  // 节点数据
    struct BiTNode* lchild, * rchild;  // 左右孩子指针
} BiTNode, * BiTree;

// 先序遍历创建二叉树
void CreateBiTree(BiTree* T) {
    char ch;
    scanf("%c", &ch);
    if (ch == '#') {
        *T = NULL;
    }
    else {
        *T = (BiTree)malloc(sizeof(BiTNode));
        (*T)->data = ch;
        CreateBiTree(&(*T)->lchild);
        CreateBiTree(&(*T)->rchild);
    }
}

// 求二叉树的高度
int TreeDepth(BiTree T) {
    if (T == NULL) {
        return 0;
    }
    else {
        int lDepth = TreeDepth(T->lchild);
        int rDepth = TreeDepth(T->rchild);
        return (lDepth > rDepth ? lDepth : rDepth) + 1;
    }
}

// 输出叶子结点
void PrintLeafNodes(BiTree T) {
    if (T) {
        if (!T->lchild && !T->rchild) {
            printf("%c ", T->data);
        }
        PrintLeafNodes(T->lchild);
        PrintLeafNodes(T->rchild);
    }
}

// 先序遍历输出二叉树
void PreOrderTraverse(BiTree T) {
    if (T) {
        printf("%c ", T->data);
        PreOrderTraverse(T->lchild);
        PreOrderTraverse(T->rchild);
    }
}

int main() {
    BiTree T;
    printf("请按先序遍历输入二叉树（#表示空节点）：\n");
    CreateBiTree(&T);
    printf("二叉树的高度为：%d\n", TreeDepth(T));
    printf("叶子结点为：");
    PrintLeafNodes(T);
    printf("\n先序遍历结果为：");
    PreOrderTraverse(T);
    return 0;
}
