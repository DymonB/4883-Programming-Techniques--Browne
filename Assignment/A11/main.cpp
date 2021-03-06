/**
* Name      Dymon Browne 
* Class     4883 - Programming Techniques.
* Program   P108
* Email     dymonbrowne@gmail.com
*/


#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;


int main ()
{  


    int n;
    int values[101][101], sum[101][101];  // N × N array of integers
	
    cin >> n;

    //read the data
    for (int a = 1; a <= n; a++)

        for (int b = 1; b <= n; b++)

	        cin >> values[a][b];

    //compute the data
    for (int c = 1; c <= n; c++)
        for (int d = 1; d <= n; d++)
        
	        sum[c][d] = values[c][d] + sum[c-1][d] + sum[c][d-1] - sum[c-1][d-1];

    //determine output
    int max = 0, temp;
    for (int w = 1; w <= n; w++)

        for (int x = 1; x <= n; x++)

            for (int y = w; y <= n; y++)
	            for (int z = x; z <= n; z++)
	                {
	                    temp = sum[y][z] - sum[w - 1][z] - sum[y][x -1] + sum [w - 1][x - 1];
	                    if(temp > max) 
                            max = temp;
	                }

    cout << max;
}
