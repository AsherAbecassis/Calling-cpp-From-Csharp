

using ClassLibraryCpp;

namespace ConsoleAppCsharp
{
    public class Program
    {
         static void Main(string[] args)
         {
           
            Class1 k = new Class1();
            int result = k.Add(2, 2);
            Console.WriteLine(result);


            k.PrintText("Hello from csharp.");
         }
    }
}