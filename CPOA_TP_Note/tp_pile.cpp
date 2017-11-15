#include "pile.h"
#include "pileoper.h"

int main()
{


	PileInt pi;
    pi.push(9);
    pi.push(7);


	std::cout << pi << std::endl;
    std::cout << "Tete = "<< pi.head()<< std::endl;

    pi.pop();
	std::cout << pi << std::endl;


   for (int i=0; i< 11; ++i)
		pi.push(i);

	std::cout << "after 11 push ..."<< std::endl;
    std::cout << pi << std::endl;


	PileInt pi2(pi);
	std::cout << "copy constructor"<< std::endl;
    std::cout << "pi2 : " << pi2 << std::endl;


	for (unsigned int i=0; i< 6; ++i)
	{
		pi.pop();
		pi2.pop();
	}

	std::cout << "depile 6 fois ..."<< std::endl;
    std::cout << "nouveau pi : " << pi<< std::endl;
    std::cout <<  "nouveau pi2 : "<<  pi2<< std::endl;

    std::cout << "Deuxieme en partant du haut dans pi2: " << pi2(1)<< std::endl;

   // PileInt pi3 = pi+pi2;

    /*
	std::cout << "pi + pi2 ="<< std::endl;
	std::cout << pi3<< std::endl;

    */

    //PileInt pi4;


    /*
    pi4 = pi;
	std::cout << "affectation"<< std::endl;
	std::cout << pi4<< std::endl;



	PileString ps;

	ps.push("riri");
	ps.push("fifi");
	ps.push("loulou");
	ps.push("dingo");

	std::cout << ps << std::endl;



    std::cout << "Deuxieme en partant du haut: "<< ps<< std::endl;


	ps.pop(); ps.pop();
	std::cout << ps << std::endl;
	ps.pop();


    */

    Pile<float> pf = Pile<float>();
    pf.push(1.);
    pf.push(2.);
    pf.push(3.);
    std::cout << pf << std::endl;
	// Question: Pourquoi peut-on mettre un seul paramètre template ?
    /*
	std::cout << "conversion en float "<< std::endl;
	std::cout << pf << std::endl;
    */

    PileOper po1(pf);
    std::cout << "po 1 : " << po1 << std::endl;
    bool testempty = po1.empty();
    std::cout << "po1 empty ? " << testempty << std::endl;
    double sum = po1.compactSomme();
    std::cout << "Sum po 1 : " << sum << std::endl;

    PileOper po2 = PileOper();
    po2.push(2.);
    po2.push(2.);
    po2.push(2.);

    std::cout << "po 2 : " << po2 << std::endl;
   // po2*po1;

    /*
	std::cout << "scalaire de "<< po1 << std::endl;
	std::cout << "par "<< po2 << std::endl;
	std::cout << "donne "<< scalaire(po1,po2)<< std::endl;
    */
	return 0;
}
