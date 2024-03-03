import java.util.Scanner;

class LinkedList{
    class Node{
        int info;
        Node next;
        public Node(int info){
            this.info=info;
            this.next=null;
        }
    } 
    Node head=null;
    public void addFirst(int info){
        Node newNode=new Node(info);
        if(head==null){
            head=newNode;
            return;
        }
        newNode.next=head;
        head=newNode;
    }
    public void addLast(int info){
        Node newNode=new Node(info);
        if(head==null){
            head=newNode;
            return;
        }
        Node temp=head;
        while(temp.next!=null){
            temp=temp.next;
        }
        temp.next=newNode;
    }
    public void add(int info){
        addLast(info);
    }
    public boolean add(int info,int position){
        if(position<0 || position>size()){
            return false;
        }
        if(position==0){
            addFirst(info);
            return true;
        }
        Node newNode=new Node(info);
        Node temp=head;
        for(int i=0;i<position-1;i++){
            temp=temp.next;
        }
        newNode.next=temp.next;
        temp.next=newNode;
        return true;
    }
    public boolean updateFirst(int info){
        if(head==null){
            return false;
        }
        head.info=info;
        return true;
    }
    public boolean updateLast(int info){
        if(head==null){
            return false;
        }
        Node temp=head;
        while(temp.next!=null){
            temp=temp.next;
        }
        temp.info=info;
        return true;
    }
    public boolean update(int info){
        return updateLast(info);
    }
    public boolean update(int info,int position){
        if(head==null || position<0 || position>size()){
            return false;
        }
        if(position==0){
            return updateFirst(info);
        }
        Node temp=head;
        for(int i=0;i<position;i++){
            if(temp==null || temp.next==null) {
                return false;
            }
            temp=temp.next;
        }
        temp.info=info;
        return true;
    }
    public boolean deleteFirst(){
        if(head==null){
            return false;
        }
        if(head.next==null){
            head=null;
            return true;
        }
        head=head.next;
        return true;
    }
    public boolean deleteLast(){
        if(head==null){
            return false;
        }
        if(head.next==null){
            head=null;
            return true;
        }
        Node previous=null;
        Node current=head;
        while(current.next!=null){
            previous=current;
            current=current.next;
        }
        previous.next=null;
        return true;
    }
    public boolean delete(){
        return deleteLast();
    }
    public boolean delete(int position){
        if(head==null || position<0 || position>size()){
            return false;
        }
        if(position==0){
            return deleteFirst();
        }
        Node previous=null;
        Node current=head;
        for(int i=0;i<position;i++){
            previous=current;
            if(current==null || current.next==null) {
                return false;
            }
            current=current.next;
        }
        previous.next=current.next;
        return true;
    }
    public int fetchFirst(){
        if(head==null){
            return Integer.MIN_VALUE;
        }
        return head.info;
    }
    public int fetchLast(){
        if(head==null){
            return Integer.MIN_VALUE;
        }
        if(head.next==null){
            return head.info;
        }
        Node temp=head;
        while(temp.next!=null){
            temp=temp.next;
        }
        return temp.info;
    }
    public int fetch(){
        return fetchLast();
    }
    public int fetch(int position){
        if(head==null || position<0 || position>size()){
            return Integer.MIN_VALUE;
        }
        if(position==0){
            return fetchFirst();
        }
        Node temp=head;
        for(int i=0;i<position;i++){
            if(temp==null || temp.next==null){
                return Integer.MIN_VALUE;
            }
            temp=temp.next;
        }
        return temp.info;
    }
    public boolean sortList(){
        if(head==null){
            return false;
        }
        if(head.next==null){
            return true;
        }
        boolean swapped;
        do{
            swapped=false;
            Node previous=null;
            Node current=head;
            while(current!=null && current.next!=null){
                if(current.info > current.next.info){
                    Node temp=current.next;
                    current.next=temp.next;
                    temp.next=current;
                    if(previous!=null){
                        previous.next=temp;
                    }
                    else{
                        head=temp;
                    }
                    previous=temp;
                    swapped=true;
                }    
                else{
                    previous=current;
                    current=current.next;
                }
            }
        }while(swapped);
        return true;
    }
    public int size(){
        Node temp=head;
        int count=0;
        while(temp!=null){
            temp=temp.next;
            count++;
        }
        return count;
    }
    public void printList(){
        Node temp=head;
        System.out.print("[");
        while(temp!=null){
            System.out.print(temp.info+" ");
            temp=temp.next;
        }
        System.out.println("]");
    }
}
public class DSA {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        LinkedList ll=new LinkedList();
        int operation,number,position;
        flage:while(true){
            System.out.println();
            System.out.println("0.Exit.");
            System.out.println("1.Add element at first.");
            System.out.println("2.Add element at last.");
            System.out.println("3.Add element at arbitrary position.");
            System.out.println("4.Update element at first.");
            System.out.println("5.Update element at last.");
            System.out.println("6.Update element at arbitrary position.");
            System.out.println("7.Delete element from first.");
            System.out.println("8.Delete element from last.");
            System.out.println("9.Delete element from arbitrary position.");
            System.out.println("10.Fetch from first.");
            System.out.println("11.Fetch from last.");
            System.out.println("12.Fetch from arbitrary position.");
            System.out.println("13.Sort the list.");
            System.out.println("14.Size of list.");
            System.out.println("15.Print the list.");
            System.out.print("Enter operation : ");
            operation=sc.nextInt();
            switch(operation){
                case 0:                    
                    System.out.println("Exit.");
                    break flage;
                case 1:
                    System.out.print("Enter a number : ");
                    number=sc.nextInt();
                    ll.addFirst(number);
                    System.out.println(number+" is inserted at first.");
                    break;
                case 2:
                    System.out.print("Enter a number : ");
                    number=sc.nextInt();
                    ll.addLast(number);
                    System.out.println(number+" is inserted at last.");
                    break;
                case 3:
                    System.out.print("Enter a number : ");
                    number=sc.nextInt();
                    System.out.print("Enter position : ");
                    position=sc.nextInt();
                    if(ll.add(number,position)){
                        System.out.println(number+" is inserted at position "+position);
                    }                   
                    else{
                        System.out.println("Unable to insert.");
                    }
                    break;
                case 4:
                    System.out.print("Enter a number : ");
                    number=sc.nextInt();
                    if(ll.updateFirst(number)){
                        System.out.println(number+" is updated at first.");
                    }
                    else{
                        System.out.println("List is empty.");
                    }
                    break;
                case 5:
                    System.out.print("Enter a number : ");
                    number=sc.nextInt();
                    if(ll.updateLast(number)){
                        System.out.println(number+" is updated at last.");
                    }
                    else{
                        System.out.println("List is empty.");
                    }
                    break;
                case 6:
                    System.out.print("Enter a number : ");
                    number=sc.nextInt();
                    System.out.print("Enter position : ");
                    position=sc.nextInt();
                    if(ll.update(number,position)){
                        System.out.println(number+" is updated at position "+position);
                    }
                    else{
                        System.out.println("Unable to update.");
                    }
                    break;
                case 7:
                    if(ll.deleteFirst()){
                        System.out.println("Element is deleted from first.");
                    }
                    else{
                        System.out.println("List is empty.");
                    }
                    break;
                case 8:
                    if(ll.deleteLast()){
                        System.out.println("Element is deleted from last.");
                    }
                    else{
                        System.out.println("List is empty.");
                    }
                    break;
                case 9:
                    System.out.print("Enter position : ");
                    position=sc.nextInt();
                    if(ll.delete(position)){
                        System.out.println("Element is deleted from position "+position);
                    }
                    else{
                        System.out.println("Unable to delete.");
                    }
                    break;
                case 10:
                    number=ll.fetchFirst();
                    if(number!=Integer.MIN_VALUE){
                        System.out.println(number+" is fetched from first.");
                    }
                    else{
                        System.out.println("List is empty.");
                    }
                    break;
                case 11:
                    number=ll.fetchLast();
                    if(number!=Integer.MIN_VALUE){
                        System.out.println(number+" is fetched from last.");
                    }
                    else{
                        System.out.println("List is empty.");
                    }
                    break;
                case 12:
                    System.out.print("Enter position : ");
                    position=sc.nextInt();
                    number=ll.fetch(position);
                    if(number!=Integer.MIN_VALUE){
                        System.out.println(number+" is fetched from position "+position);
                    }
                    else{
                        System.out.println("Unable to fetch.");
                    }
                    break;
                case 13:
                    if(ll.sortList()){
                        System.out.println("List is sorted.");
                    }
                    else{
                        System.out.println("List is empty.");
                    }
                    break;
                case 14:
                    System.out.println("Size of list : "+ll.size());
                    break;
                case 15:
                    System.out.print("List : ");
                    ll.printList();
                    break;
                default:
                    System.out.println("Invalid operation.");
            }
        }
        sc.close();
    }
}