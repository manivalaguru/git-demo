struct node
{
    int data;
    struct node *next;
};
struct node *front=0,*rear=0,*new_node,*temp;
int main()
{
    enqueue(5);
    enqueue(0);
    enqueue(-3);
    display();
    dequeue();
       display();
    peek();

}

void enqueue(int x)
{
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=x;
    new_node->next=0;
    if(front==0&&rear==0)
    {
        front=rear=new_node;
    }
    else
    {
        rear->next=new_node;
        rear=new_node;
    }
}
void display()
{

    if(front==0&&rear==0)
    {
        printf("queue is empty\n");
    }
    else
    {

      temp=front;
    while(temp!=0)
    {

        printf("%d\n",temp->data);
        temp=temp->next;
    }
    }
}
void dequeue()
{
    temp=front;
    if(front==0&&rear==0)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("dequeue elemengt is %d\n",front->data);
        front=front->next;
        free(temp);
    }

}
void peek()
{
    if(front==0&&rear==0)
    {
        printf("queue is empty\n");
    }
    else
        printf("front dat is %d\n",front->data);
}