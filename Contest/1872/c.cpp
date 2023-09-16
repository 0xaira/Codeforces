

#include <bits/stdc++.h>

using namespace std;

#define lld long long int

bool coprime(int a, int b)
{
  
if (gcd(a, b) == 1)
return 1;
   else
    return 0;
    
}

int main()
{

   int t;

    cin >> t;

    while (t--)
    {
       
 lld l, r;
        cin >> l >> r;

       lld firsteven = -1;

        for (lld i = l; i <= r; i++)
        {
            if (i % 2 == 0 && i != 2)
            {
               firsteven = i;
             break;
             
            }
           
        }

      if (firsteven != -1)
        {
          cout << firsteven / 2 << " " << firsteven / 2 << endl;
           continue;
            
        }

     bool flag = false;

      for (lld i = 2; i <= sqrt(r); i++)
        {
       if (gcd(i, r - i) != 1)
            {
               cout << i << " " << r - i << endl;
                flag = true;
                 break;
               
            }
           
        }

         if (!flag)
        {
             cout << -1 << endl;
            
        }

    
    }

    return 0;
}
