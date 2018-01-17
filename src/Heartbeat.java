
public class Heartbeat {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int second = 0; 
			
		while(true)
		{
			try 
			{
				Thread.sleep(1000);
				second = second + 1;
				System.out.println("Time elapsed: " + second);
			}
			catch(InterruptedException e)
			{
				System.out.println("U messed up");
			}
		}
	}

}
