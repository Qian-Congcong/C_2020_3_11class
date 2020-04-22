/**
 * program: 20200420
 * Created with IntelliJ IDEA.
 * Description:
 * 单链表
 * User: YouName
 * Date:2020-04-22 08
 * Time:49
 */
public class TestDemo {
    public static void main(String[] args) {
        MyLinkedList myLinkedList = new MyLinkedList();
        /*myLinkedList.addFirst(10);
        myLinkedList.addFirst(11);
        myLinkedList.addFirst(12);
        myLinkedList.addFirst(13);
        myLinkedList.display();*/
        myLinkedList.addLast(12);
        myLinkedList.addLast(13);
        myLinkedList.addLast(14);
        myLinkedList.addLast(12);
        myLinkedList.addLast(15);
        myLinkedList.addLast(15);
        myLinkedList.display();
        //System.out.println(myLinkedList.contains(15));
        //myLinkedList.remove(12);
        myLinkedList.removeAllKey(12);
        myLinkedList.display();
        myLinkedList.clear();
        myLinkedList.display();
       /* System.out.println(myLinkedList.size());
        System.out.println(myLinkedList.contains(13));
        System.out.println(myLinkedList.contains(16));
        System.out.println(myLinkedList.size());
        myLinkedList.addIndex(2,18);
        myLinkedList.display();
        System.out.println(myLinkedList.size());
        myLinkedList.addIndex(4,16);
        myLinkedList.display();
        System.out.println(myLinkedList.size());*/
    }
}
