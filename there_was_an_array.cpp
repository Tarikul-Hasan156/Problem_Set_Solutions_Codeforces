#include <iostream>
#define sp " "
using namespace std;

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int y;
        cin >> y;
       
            y -= 2;
            int arr[y];
            for (int i = 0; i < y; i++)
            {
                cin >> arr[i];
            }
        
            bool found = false;
            for (int i = 0; i < y-2; i++)
            {
                if (arr[i] == 1 && arr[i + 1] == 0 && arr[i + 2] == 1)
                {
                    found = true;
                    break;
                }
            }
            if (found)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        
    }
    return 0;
}