/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex3.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosma <bosma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:50:55 by mohamed_lak       #+#    #+#             */
/*   Updated: 2025/03/10 13:54:42 by bosma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;


int main()
{
	ssize_t  i;
	long count = 0 ;
	long  sum = 0 ;
	while(1)
	{
		cout << "veuillez entrer un nombre positif (NB : si t'arrive a la fin entrer 0)" << endl;
		cin >> i;
		sum +=i;
		if(i == 0)
			break;
		if(i < 0)
		{
			cout << "ERROR" << endl << "attention just les positif" << endl ;
			sum -= i;
			continue;
		}
		count++;
	}
	if(count == 0)
		cout << "Aucun nombre positif n'a été saisi." << endl;
	else
{
	double moyen = sum / (float)count;
	cout << moyen << " le moyen de votre nombres entier positif " << endl;
	}
}
