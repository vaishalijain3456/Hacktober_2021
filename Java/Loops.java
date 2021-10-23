import java.io.*;

public class Loops{
    public static void main(String Args[])
    {
        System.out.println("For Loop Condition");
        // For Loop
        /*
         *  The For Loop is used when the number of iterations is known either via a variable or in advance.
         *  Usage: for({start_condition}; {check_condition}; {update_condition})
         *          {
         *              {Code to be executed}
         *              break: This statement will break the for loops
         *              continue: This statement will skip over one iteration in the loop
         *          }
         *  Now, we will use the for loop to iterate from 1 to 25 and print the numbers
        */
        for(int i = 1; i <= 25; i++)
        {
            System.out.println("i: " + i);
        }


        System.out.println("While Loop Condition");
        //  While Loop
        /*
         *  The while loop is used while a certain condition is met.
         *  Usage: while({condition})
         *         {
         *               {Code to be executed}
         *               {Update statement}
         *           }
         *  Now we will use the while loop to increment(increase by 1) a variable till it is not equal to a certain value
        */
        int x = 17;
        int y = 2;
        while(y < x)
        {
            System.out.println("Y: " + y + " is less than X: " + x);
        }


        System.out.println("Do While Loop Condition");
        //  Do While Loop
        /*
         *  The Do while loop is used while a certain condition is met.
         *  Usage: do
         *         {
         *               {Code to be executed}
         *               {Update statement}
         *           } while({condition});
         *  Now we will use the while loop to increment(increase by 1) a variable till it is not equal to a certain value
        */
        int a = 22;
        int b = 3;
        do
        {
            System.out.println("B: " + b + " A: " + a);
        }
        while(b < a);
    }
}