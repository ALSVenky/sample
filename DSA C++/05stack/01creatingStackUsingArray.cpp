#include <iostream>
using namespace std;
struct stack
{
    int size;
    int top;
    int *s;
};
void create(stack *st)
{
    cout << "enter size ";
    cin >> st->size;
    st->top = -1;
    st->s = new int(st->size);
}
void display(struct stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        cout << st.s[i] << " ";
    }
    cout << endl;
}
// time taken by push and pop are constant
void push(stack *st, int value)
{ // here we are taking st as pointer since we want to modify it
    if (st->top == st->size - 1)
    {
        printf("stack over flow\n");
    }
    else
    {
        st->top++;
        st->s[st->top] = value;
    }
}
int pop(stack *st)
{
    int value = -1;
    if (st->top == -1)
    {
        printf("stack under flow\n");
        return value;
    }
    else
    {
        value = st->s[st->top];
        st->top--;
    }

    return value;
}
int peek(stack st, int pos)
{ // here we are not taking pointer stack since we only read the value
    int x = -1;
    if (st.top - pos + 1 < 0)
    {
        printf("invalid position ");
    }
    else
    {
        x = st.s[st.top - pos + 1];
    }
    return x;
}
int stackTop(stack st)
{
    if (st.top == -1)
    {
        return -1;
    }
    return st.s[st.top];
}
int isEmpty(stack st)
{
    if (st.top == -1)
    {
        return 1;
    }
    return 0;
}
int isFull(stack st)
{
    if (st.top == st.size - 1)
    {
        return 1;
    }
    return 0;
}
int main()
{
    struct stack st;
    create(&st);
    push(&st, 2);
    push(&st, 4);
    push(&st, 6);
    push(&st, 8);
    display(st);
    cout << pop(&st) << endl;
    cout << isEmpty(st) << endl;
    cout << isFull(st) << endl;
    cout << peek(st, 1) << endl;
    return 0;
}