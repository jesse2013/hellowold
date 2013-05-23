 /* bo3-5.c ��ջ(�洢�ṹ��c2-2.h����)�Ļ�������(9��) */
 /* �󲿷ֻ�����������bo2-2.c��bo2-9.cpp�еĺ����������� */
 typedef SElemType ElemType; /* ջ������ͺ������������һ�� */
 #include"c2-2.h"
 typedef LinkList LinkStack; /* LinkStack��ָ��ջ����ָ������ */
 #define InitStack InitList /* InitStack()��InitList()������ͬ����ͬ */
 #define DestroyStack DestroyList
 #define ClearStack ClearList
 #define StackEmpty ListEmpty
 #define StackLength ListLength
 #define GetTop GetFirstElem
 #define Push HeadInsert
 #define Pop DeleteFirst
 #include"bo2-2.c"
 #include"bo2-9.c"
 Status StackTraverse(LinkStack S,void(*visit)(SElemType))
 { /* ��ջ�׵�ջ�����ζ�ջ��ÿ��Ԫ�ص��ú���visit()�� */
   SElemType e;
   LinkStack temp,p=S;
   InitStack(&temp); /* ��ʼ��tempջ */
   while(p->next)
   {
     GetTop(p,&e);
     Push(temp,e);
     p=p->next;
   }
   ListTraverse(temp,visit);
   return OK;
 }