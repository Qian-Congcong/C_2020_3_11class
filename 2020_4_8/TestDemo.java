
public class TestDemo {


	public static void main1(String[] args) {
		/*long a = 10L;
		int b = (int)a;
		System.out.println(b);*/
		/*int b = 10;
		boolean c = b;*/

		int num = 30;
		/*方法一
		//String str1 = num + "";
		//方法二
		//String str2 = String.valueOf(num);*/
		String str = "100a";
		num = Integer.parseInt(str);

		System.out.println(num);
	}

	/**
		常量只能被初始化一次，且使用的时候  一定要记得初始化。
		
	*/
	public static void main2(String[] args) {
		final int MAXNUM;
		MAXNUM = 999;
		//MAXNUM = 1999;

		System.out.println(MAXNUM);
	}


/**
	小于4个字节的数据类型 运算的时候 会发生类型的提升

*/
	public static void main3(String[] args) {
		byte b = 10;
		byte c = 20;
		byte d = (byte)(b + c);
		System.out.println(d);
	}


/**
	 * 字符串数据类型：
	 * String
	 * @param args [description]
	 */
	public static void main4(String[] args) {
		/*String str = "\\\\\"hello\"\\\\";//\\"hello"\\
		System.out.println(str);*/

		/*int i = 2147483647+1;
		int i2 = Integer.MAX_VALUE + 1;
		System.out.println(i);
		System.out.println(i2);*/

		/*byte d = 127 + 1;
		byte e = Byte.MAX_VALUE+1;
		System.out.println(d);
		System.out.println(e);
		*/

	}

/**
	 * 布尔类型:
	 * 1、在Java当中  布尔类型 没有明确的大小  
	 * 2、在Java当中  布尔类型  只有两个取值  true 和  false
	 * 3、在Java当中  没有 所谓的  0是假   非0是真
	 *    真只有 true   假 只有false
	 * 4、Boolean
	 * @param args [description]
	 */
	public static void main5(String[] args) {
		boolean flg = true;
		System.out.println(flg);

	}

	/**
	 * 短整型：short    2      -32768  到   32767
	 * @param args [description]
	 */
	public static void main6(String[] args) {
		short sh = 12;
		System.out.println(Short.MAX_VALUE);
		System.out.println(Short.MIN_VALUE);
	}

	/**
	 * 字节：byte   1个字节  数值  -128 -  127  
	 * 每一种数据类型  再给其赋值的时候  一定不能超过他的范围
	 * @param args [description]
	 */
	public static void main7(String[] args) {
		byte b = 12;
		byte c = 21;

		System.out.println(b+" " +c);
		System.out.println(Byte.MAX_VALUE);
		System.out.println(Byte.MIN_VALUE);

		System.out.println(Byte.MAX_VALUE+1);
		//打印 默认是以整型进行打印的

	}


	/**
	 * 字符数据类型：
	 *    char      2个字节    0-65535  
	 * Unicode-->他包含了很多，比如：中文，变得更大了。
	 * Character
	 * @param args [description]
	 */
	public static void main8(String[] args) {
		char ch = 'a';
		System.out.println(ch);

		char ch2 = '高';
		System.out.println(ch2);

		char ch3 = 97;
		System.out.println(ch3);
	}

	/**
	 * 单精度  float
	 * 1、  double 8个字节
	 * 2、  float  4个字节
	 * @param args [description]
	 */
	public static void main9(String[] args) {
		float f = 12.3f;
		System.out.println(f);
	}


	/**
	 * 双精度 浮点型
	 * @param args [description]
	 */
	public static void main10(String[] args) {
		double d = 12.5;//12.5
		System.out.println(d);
		System.out.println(Double.MAX_VALUE);
		System.out.println(Double.MIN_VALUE);

		int a = 1;
		int b = 2;
		System.out.println(a / b);

		double num = 1.1;
		System.out.println(num);
		System.out.printf("%f\n",num*num);
	}

	/**
	 * String[] args  运行时命令行参数
	 * @param args [description]
	 */
	public static void main11(String[] args) {
		for(int i = 0; i < args.length; i++) {
			System.out.println(args[i]);
		}
		System.out.println("hehe");
	}


	/**
	 * 讲解长整型
	 * @param args [description]
	 */
	public static void main(String[] args) {
		long a = 10L;

		System.out.println("a的值是: " + a);
		System.out.println("最大值: " + Long.MAX_VALUE);//拼接
		System.out.println("最小值: " + Long.MIN_VALUE);

		int b = 10;
		int c = 20;
		System.out.println(b + c);
		//
		System.out.println("hhh" + b + c);
	}
}	