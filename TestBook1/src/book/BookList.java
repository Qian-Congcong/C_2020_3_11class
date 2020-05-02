package book;

/**
 * program: TestBook
 * Created with IntelliJ IDEA.
 * Description:
 * User: YouName
 * Date:2020-04-30 19
 * Time:29
 */
public class BookList {
    private Book[] books= new Book[100];
    private int usedSize = 0;

    public BookList() {
        books[0] = new Book("三国演义","罗贯中",100,
                "小说");
        books[1] = new Book("水浒传","施耐庵",100,
                "小说");
        books[2] = new Book("西游记","吴承恩",100,
                "小说");
        this.usedSize = 3;
    }

    public Book getBooks(int pos) {
        return this.books[pos];
    }

    public void setBooks(int pos, Book book) {
        this.books[pos] = book;
    }

    public int getUsedSize() {
        return usedSize;
    }

    public void setUsedSize(int usedSize) {
        this.usedSize = usedSize;
    }
}
