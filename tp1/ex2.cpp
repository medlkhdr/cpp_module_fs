/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ex2.cpp                                                                  */
/*                                                                            */
/*   By: mohamed_lakhdar <m.lakhdar4918@uca.ac.ma>                            */
/*                                                                            */
/*   Created: 2025/02/21 17:47:02 by mohamed_lakhd                            */
/*   Updated: 2025/02/21 17:47:02 by mohamed_lakhd                            */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
using namespace std;

bool nichan(int n)
{
	if (n <= 1)
		return false;
    if (n == 2)
		return true;
    if (n % 2 == 0)
		return false;
	int i = 3;
	for (; i <= sqrt(n); i += 2)
	{
		if (n % i == 0)
			return false;
    }
    return true;
}

int main()
{
    int N;
    cout << "Entrez un nombre entier N: ";
    cin >> N;
    int count = 0;
    for (int j = 2; j <= N; j++)
	{
        if (nichan(j))
		{
			cout <<"nombre permier : " <<j << endl;
			count++;
		}
    }
    cout << count << " nombres premiers inférieurs ou égaux à " << N << endl;
    return 0;
}
