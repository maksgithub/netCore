using System;
using Project1;

namespace CSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            var s = new CliClass();
            s.Hello();
            Console.WriteLine("Hello from c#!");

            Console.WriteLine(); 
            CliClass.StaticHello();
            Console.WriteLine("Hello from c#!");
        }
    }
}
