import java.io.*;
class node
{
    int data;
    node next;
    node(int a)
    {
    data=a;
    next=null;
}
}
class linkedlist {
	public static void main (String[] args) {
	    node head=new node(10);
	    node first=new node(20);
	   node second=new node(30);
	    head.next=first;
	    first.next=second;
	    second.next=null;
	    node current=head;
	    while(current!=null)
	    {
	        System.out.println(current.data);
	        current=current.next;
	    }
	    }
	}
