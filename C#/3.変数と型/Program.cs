// このプログラムの説明を書く．

namespace sample{

    class Program{

         enum Season{ 
                Spring, Summer, Fall, Winter
            };

        static void Main(){
            
            // System.Console.WriteLine("Hello, World from C#");

            // // memo: 匿名化
            // var a = new { Name = "hirano", Age = 18 };
            // System.Console.WriteLine(a.Age);

            // problem 2
            int x = 123;
            float y = 1.23F;
            System.Console.WriteLine(x);
            System.Console.WriteLine(y);

            // Problem 3
            string money = @"\1,000";
            System.Console.WriteLine(money);
            string money_ = "\\23,000";
            // string s_ = "\23,000"; <- これだとエラーがでる．
            System.Console.WriteLine(money_);

            // Problem 4
            System.Console.WriteLine(Season.Spring);
            System.Console.WriteLine((int)Season.Spring);

            // Problem 5
            var s = new [] { "春", "夏", "秋", "冬" };
            System.Console.WriteLine(s[(int) Season.Spring]);
        }
    }
}