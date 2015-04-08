/*
 * menus.h
 *
 *  Created on: 20/03/2015
 *      Author: luis
 */


#ifndef MENUS_H_
#define MENUS_H_



string item[5]={"a","b","c","d","e"};


void opciones(){

}


void menu(){


	int op;
do{

	cout << "\n--------------------------------------------------------------------------\n\n1 - item1\n2 - item1\n3 - item1\n4 - item1\n5 - item1\n---------------------\nSeleciona una opción del menú:" << endl;

		cin >> op;
		switch(op){

		case 1:

			fflush(stdin);
		break;

		case 2:

			fflush(stdin);
			break;

		case 3:

			fflush(stdin);
		break;
		case 4:

			fflush(stdin);
		break;
		case 5:
			cout << "El programa se cerrara" << endl;
		break;

	  }
}while(op !=5);

}

#endif /* MENUS_H_ */
