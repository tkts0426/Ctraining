// このプログラムの説明を書く．

namespace sample{

    class Program{

        static void Main(){
            
            int x = 10;
            int y = 20;

            System.Console.WriteLine( (x+y) * (x+y) );

            int z = 9;
            string a = ( z%2 == 0 )? "even" : "odd";
            System.Console.WriteLine( a );
        }
    }
}