// Write a program to find the sum of all even numbers up to N.

////////////////////////////////////////////////////////////////////
//
//  Function Name : sumEvenNumber
//  Description :   It is used to find the sum of all even numbers upto N
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

class logic
{
    void sumEvenNumber(int No)
    {
        int iSum=0;
        for(int i=1;i<=No;i++)
        {
            if(i%2==0)
            {
                iSum=iSum+i;
            }
        }
        System.out.println(iSum);
    }

}

class program20_1
{
    public static void main(String a[])
    {
        logic lobj=new logic();
        lobj.sumEvenNumber(10);
    }
}

///////////////////////////////////////////////////////////////

// Input : 10
// Output : 30 

///////////////////////////////////////////////////////////////