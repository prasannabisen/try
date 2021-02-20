import java.util.*;
public class test{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		String str= sc.nextLine();  
		int a[]=new int[500];
		for(int i=0;i<str.length();i++){
			a[str.charAt(i)]+=1;
		}
		for(int i=0;i<str.length();i++){
			if(a[str.charAt(i)]==1)
			{
				System.out.println(str.charAt(i));
			}
		}
}
}