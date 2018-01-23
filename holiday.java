import java.util.Scanner;

public class holiday {

	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		String a=sc.nextLine();
		if(a.equalsIgnoreCase("sunday")||a.equalsIgnoreCase("saturday"))
		{
        System.out.println("yes");
		}
		else if(a.equalsIgnoreCase("monday")||a.equalsIgnoreCase("wednesday")||a.equalsIgnoreCase("tuesday")||a.equalsIgnoreCase("thursday")||a.equalsIgnoreCase("friday"))
		{
			System.out.println("no");
		}
else
{
System.out.println("Invalid");
}

	}

}