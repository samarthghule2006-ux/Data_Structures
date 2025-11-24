// Accept number of rows and columns from user and display below pattern 

import java.util.*;

class Pattern
{
    public void Display(int iRow,int iCol)
    {
        int i=0,j=0;

        for(i=1;i<=iRow;i++)
        {
            for(j=iCol;j>=1;j--)
            {
                System.out.print(j+"\t");
            }
            System.out.println();

        }
    }
}
class program27_3
{
    public static void main(String a[])
    {
        int iValue1=0,iValue2=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number of Rows:");
        iValue1=sobj.nextInt();

        System.out.println("Enter the number of Colomns:");
        iValue2=sobj.nextInt();

        Pattern pobj=new Pattern();
        pobj.Display(iValue1,iValue2);
    }

}


/*

Input : iRow = 3    iCol = 5
Output : 5   4   3   2   1
         5   4   3   2   1
         5   4   3   2   1
         5   4   3   2   1

 */