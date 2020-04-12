public class Client {

	public static void main(String[] args) {
		LoggerFactory factory1,factory2;
		Logger logger1,logger2;
		factory1 = new FileLoggerFactory();
		factory2 = new DatabaseLoggerFactory();
		logger1 = factory1.createLogger();
		logger2 = factory2.createLogger();
		logger1.writeLog();
		logger2.writeLog();
	}
}