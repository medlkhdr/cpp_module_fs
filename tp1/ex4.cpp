/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex4.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhdar <mlakhdar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:50:01 by mohamed_lak       #+#    #+#             */
/*   Updated: 2025/02/28 16:58:38 by mlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void afficher_menu()
{
	cout << "================================================" << endl;
	cout << "                   Menu                         " << endl;
	cout << "================================================" << endl;
	cout << "1. Taper 1 pour incrémenter l’entier par un     " << endl;
	cout << "2. Taper 2 pour décrémenter l’entier par 2      " << endl;
	cout << "3. Taper 3 pour multiplier l’entier par 10      " << endl;
	cout << "4. Taper 4 pour quitter                         " << endl;
}

int main()
{
    int i = 0;
    cout << i << " : la valeur initiale du nombre" << endl;

    while (1)
    {
        int choix;
        afficher_menu();
        cout << "Entrez votre choix : ";
        cin >> choix;

        switch (choix)
        {
        case 1:
            i++;
            break;
        case 2:
            i -= 2;
            break;
        case 3:
            i *= 10;
            break;
        case 4:
            cout << "Programme terminé. Au revoir !" << endl;
            return 0;
        default:
            cout << "Choix invalide ! Lisez le menu attentivement." << endl;
            continue;
        }

        cout << "La valeur du nombre après l'opération " << choix << " est : " << i << endl;
    }

    return 0;
}
