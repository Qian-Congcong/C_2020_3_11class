package operation;

import book.BookList;

/**
 * program: TestBook
 * Created with IntelliJ IDEA.
 * Description:
 * User: YouName
 * Date:2020-04-30 19
 * Time:47
 */
public class ExitOperation implements IOperation{
    @Override
    public void work(BookList bookList) {
        System.out.println("退出系统");
        System.exit(1);
    }
}
