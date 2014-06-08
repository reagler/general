
class Base implements Runnable {
	Base() {
		System.out.println("Base.base()");
	}

	public void run() {
		hello();
		world();
	}

	public static void hello() {
		System.out.println("Base.hello()");
	}

	public void world() {
		System.out.println("Base.world()");
	}

}

class Derive extends Base {
	Derive() {
		System.out.println("Derive.Derive()");
	}
	public static void hello() {
		System.out.println("Derive.hello()");
	}

	public void world() {
		System.out.println("Derive.world()");
	}
}

public class TestJava {
	public static void main(String[] args) {
		Base d = new Derive();
		(new Thread(d)).start();
	}
}