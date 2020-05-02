package operation;

import book.Book;
import book.BookList;

/**
 * program: TestBook
 * Created with IntelliJ IDEA.
 * Description:
 * User: YouName
 * Date:2020-04-30 19
 * Time:44
 */
public class DisplayOperation implements  IOperation{
    @Override
    public void work(BookList bookList) {
        System.out.println("显示图书");
        for (int i = 0; i < bookList.getUsedSize(); i++) {
            Book book = bookList.getBooks(i);
            System.out.println(book);
        }
    }
}
