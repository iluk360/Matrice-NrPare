#include <iostream>

using namespace std;

// inserarea unei matrice si calcularea sumei valorilor pare

int main()
{
    int mat[100][100], m, n, i, j, S = 0;
    cin >> n >> m;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (mat[i][j] % 2 == 0)
            {
                S = mat[i][j] + S;
            }
        }
    }
    cout << S;
    return 0;
}
