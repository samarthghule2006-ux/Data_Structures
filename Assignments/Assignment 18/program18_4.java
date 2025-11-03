
// Write a program to find the sum of even and odd digits seperately in a number

////////////////////////////////////////////////////////////////////
//
//  Function Name : sumEvenOddDigits
//  Description :   It is use to find the sum of even and odd digits seperately in a number
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

class Logic
{
    void sumEvenOddDigits(int n)
    {
        int iSumEven=0;
        int iSumOdd=0;
        for(int iCnt=1;iCnt<=n;iCnt++)
        {
            if(iCnt%2==0)
            {
                iSumEven=iSumEven+iCnt;

            }
            else
            {
                iSumOdd=iSumOdd+iCnt;
            }
        }
        System.out.println(iSumEven);
        System.out.println(iSumOdd);
    }

}
class program18_4
{
    public static void main(String a[])
    {
        Logic lobj=new Logic();
        lobj.sumEvenOddDigits(5);
    }
}

///////////////////////////////////////////////////////////////////

// Input : 5
// Output : 6 9

///////////////////////////////////////////////////////////////////