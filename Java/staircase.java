import java.util.*;
class Staircase
{
  public static void main(String[]args)
  {
    Scanner scan = new Scanner(System.in);
    System.out.print("Enter the height of Staircase: ");
    int height = scan.nextInt();

    System.out.print("Enter 1 for Left aligned Staircase and 2 for Right aligned Staircase: ");
    int check = scan.nextInt();
    
    if(check == 1)
    {
      for(int i = 0; i < height; i++)
      {
        for(int j = 0; j < height; j++)
        {
          if(i >= j)
          {
            System.out.print("# ");
          }
        }
        System.out.println();
      }
    }
    else if(check == 2)
    {
      int c = height - 1;
          for(int i = 0; i < height; i++)
          {
              for(int j = 0; j < height; j++)
              {
                  if(j < c)
                  {
                      System.out.print("  ");
                  }
                  else
                  {
                      System.out.print(" #");
                  }
              }
                System.out.println();
                c = c - 1;
          }
    }
    else
    {
      System.out.println("Enter valid number.");
    }
  }  
}
