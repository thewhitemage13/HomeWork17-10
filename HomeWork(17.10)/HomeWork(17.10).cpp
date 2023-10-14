#include <iostream>
using namespace std;
int main()
{
    //1
    //<summary>
    //function reverses the number(1234-4321)
    //<summary>
    //<param name="a">enter our number that we're</param>
    void Sum(int a)
    {
        if (a > 0)
        {
            cout << a % 10;
            Sum(a / 10);
        }
    }

    int main()
    {
        int a;
        cin >> a;
        Sum(a);
    }
    //2
    //<summary>
    //sum of all numbers in the range 
    //<summary>
    //<param name="a">range start</param>
    //<param name="b">end range</param>
    //<returns>if a is greater than b, the function returns 0</returns>
    int Sum(int a, int b)
    {
        if (a > b)return 0;
        return a + Sum(a + 1, b);
    }

    int main() {
        int a;
        int b;
        cout << "Enter the first number in the range: ";
        cin >> a;
        cout << "Enter a lower number in the range of: ";
        cin >> b;
        int sum = Sum(a, b);
        cout << sum;
    }
    //3
    //<summary>
    //function increments
    //<summary>
    //<param name="number">number</param>
    //<param name="degree">degree</param>
    //<returns>if degree is 0, we return 1</returns>
    int degreeofnumber(int number, int degree) {

        if (degree == 0)return 1;
        return number * degreeofnumber(number, degree - 1);
    }
    int main() {
        int number;
        int degree;
        cout << "enter a number: ";
        cin >> number;
        cout << "enter the degree: ";
        cin >> degree;
        int result = degreeofnumber(number, degree);
        cout << result;
    }
    //4
    //<summary>
    //function outputs all numbers from 1 to a
    //<summary>
    //<param name="a">enter our number</param>
    void sum(int a)
    {
        a--;
        if (a > 0)
        {
            sum(a);
        }
        cout << a + 1 << " ";
    }

    int main()
    {
        int a;
        cin >> a;
        sum(a);
    }
    //5
    //<summary>
    //the function outputs numbers in ascending order if a<b and in ascending order if a>b
    //<summary>
    //<param name="b">first number in the range</param>
    //<param name="a">second number in the range</param>
    int main()
    {
        static int b = 5;
        static int a = 1;

        if (b < a)
        {
            cout << b;
            b++;
            if (b != a)
            {
                main();
            }
        }

        else if (b > a)
        {
            b--;
            cout << b;
            if (a < b)
            {
                main();
            }
        }
    }
    //6
    //<summary>
    //function checks the exact degree 2
    //<summary>
    //<param name="a">degree</param>
    void degree(int a)
    {
        if (a < 2)
        {
            cout << "no";
        }
        if (a == 2)
        {
            cout << "yes" << "\n";
        }

        int b = 0;

        if (a > 2)
        {
            b++;
            degree(a / 2);
        }
    }

    int main()
    {
        int a;
        cin >> a;
        degree(a);
    }
    //7
    //<summary>
    //sum of all numbers
    //<summary>
    //<param name="a">enter the numbers whose sum you want to calculate</param>
    //<returns>return the last digit and add the sum of the other numbers</returns>
    int Sum(int a)
    {
        if (a > 0)
        {
            return(a % 10) + Sum(a / 10);
        }
    }

    int main()
    {
        int a;
        cin >> a;
        int sum = Sum(a);
        cout << "Sum: " << sum - 1;
    }
    //8
    //<summary>
    //function reverses the number(1234-4321)
    //<summary>
    //<param name="a">enter our number that we're</param>
    void Sum(int a)
    {
        if (a > 0)
        {
            cout << a % 10 << " ";
            Sum(a / 10);
        }
    }

    int main()
    {
        int a;
        cin >> a;
        Sum(a);
    }
    //9
    //<summary>
    //function outputs numbers with a space between them
    //<summary>
    //<param name="a">enter our number that we're</param>
    void Sum(int a)
    {
        if (a > 0)
        {
            Sum(a / 10);
            cout << a % 10 << " ";
        }
    }

    int main()
    {
        int a;
        cin >> a;
        Sum(a);
    }
}