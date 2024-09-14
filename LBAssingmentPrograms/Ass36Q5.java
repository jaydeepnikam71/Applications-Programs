import java.util.*;

class Ass36Q5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String");
        String str = sobj.nextLine();

        StringDemo dobj = new StringDemo();

        boolean str1 =dobj.StrPallindrome(str);
        if(str1==true)
        {
            System.out.println("String is Pallindrome ");
        }
        else
        {
            System.out.println("String is not Pallindrome ");
        }
    }
}

class StringDemo
{
    String str1 = "";
    public boolean StrPallindrome(String str)
    {


        for(int i = (str.length()-1);i>=0;i--)
        {
            str1 = str1+ str.charAt(i);
        }
        if(str1.equals(str))
        {
            return true;
        }
        else
        {
            return false;
        }


    }

}

