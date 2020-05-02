package user;

import book.BookList;
import operation.IOperation;

/**
 * program: TestBook
 * Created with IntelliJ IDEA.
 * Description:
 * User: YouName
 * Date:2020-05-02 10
 * Time:42
 */
public abstract class User {
    protected String name;

    protected IOperation[] operations;

    public User(String name) {
        this.name = name;
    }
    public abstract int menu();

    public void doOperation(BookList bookList,int choice) {
        this.operations[choice].work(bookList);
    }
}
