#include <stdio.h>
#include <stdlib.h>

// 定义链栈结点
typedef struct stackNode {
    char data;
    struct stackNode* next;
} StackNode, * LinkStack;

// 出栈操作
void Pop(LinkStack* L) {
    if (*L == NULL) return;
    StackNode* p = *L;
    *L = p->next;
    free(p);
}

// 创建节点
StackNode* Creat_Node(void) {
    StackNode* p = (StackNode*)malloc(sizeof(StackNode));
    if (!p) {
        fprintf(stderr, "内存分配失败\n");
        exit(1);
    }
    p->next = NULL;
    return p;
}

// 入栈函数
void Push(LinkStack* L, char data) {
    StackNode* p = Creat_Node();
    p->data = data;
    p->next = *L;
    *L = p;
}

// 初始化栈
void InitStack(LinkStack* L) {
    *L = NULL;
}

// 释放栈中所有节点
void DestroyStack(LinkStack* L) {
    while (*L != NULL) {
        Pop(L);
    }
}

// 括号匹配函数
int BracketMatching() {
    LinkStack L;
    InitStack(&L);
    char match_data;
    int flag = 1;

    do {
        printf("请输入要进行匹配的括号（输入 # 退出）：");
        scanf(" %c", &match_data); // 跳过空白字符

        switch (match_data) {
        case '(':
        case '[':
        case '{':
            Push(&L, match_data);
            break;
        case ')':
            if (L && L->data == '(') Pop(&L);
            else flag = 0;
            break;
        case ']':
            if (L && L->data == '[') Pop(&L);
            else flag = 0;
            break;
        case '}':
            if (L && L->data == '{') Pop(&L);
            else flag = 0;
            break;
        case '#':
            printf("退出括号匹配\n");
            break;
        default:
            printf("输入有误，检查大小写或输入数据类型\n");
        }
    } while (match_data != '#' && flag);

    int result = (!L && flag);
    DestroyStack(&L);
    return result;
}

int main() {
    if (BracketMatching()) {
        printf("括号匹配成功\n");
    }
    else {
        printf("括号匹配失败\n");
    }
    return 0;
}