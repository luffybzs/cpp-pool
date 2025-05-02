/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:41:47 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/20 21:28:09 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

void cleanupMaterias(AMateria* m1, AMateria* m2 = NULL, AMateria* m3 = NULL) {
    if (m1) delete m1;
    if (m2) delete m2;
    if (m3) delete m3;
}

void runSubjectTest() {
    std::cout << "\n===== SUBJECT TEST =====\n";
    IMateriaSource* src = new MateriaSource();
    
    AMateria* learn1 = new Ice();
    AMateria* learn2 = new Cure();
    src->learnMateria(learn1);
    src->learnMateria(learn2);
    cleanupMaterias(learn1, learn2);

    ICharacter* me = new Character("me");
    
    AMateria* tmp1 = src->createMateria("ice");
    AMateria* tmp2 = src->createMateria("cure");
    
    // Manually check inventory before equip
    bool equipped1 = false;
    bool equipped2 = false;
    for (int i = 0; i < 4; i++) {
        if (!me->getMateria(i) && !equipped1 && tmp1) {
            me->equip(tmp1);
            equipped1 = true;
        }
        if (!me->getMateria(i) && !equipped2 && tmp2) {
            me->equip(tmp2);
            equipped2 = true;
        }
    }
    
    // Cleanup unequipped materias
    if (!equipped1) delete tmp1;
    if (!equipped2) delete tmp2;

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;
}

void runExtendedTests() {
    std::cout << "\n===== EXTENDED TESTS =====\n";

    MateriaSource src;
    AMateria* learn1 = new Ice();
    AMateria* learn2 = new Cure();
    src.learnMateria(learn1);
    src.learnMateria(learn2);
    cleanupMaterias(learn1, learn2);

    Character alice("Alice");
    
    AMateria* ice = src.createMateria("ice");
    AMateria* cure = src.createMateria("cure");

    // Manual equip with inventory check
    bool iceEquipped = false;
    bool cureEquipped = false;
    for (int i = 0; i < 4; i++) {
        if (!alice.getMateria(i) && !iceEquipped && ice) {
            alice.equip(ice);
            iceEquipped = true;
        }
        if (!alice.getMateria(i) && !cureEquipped && cure) {
            alice.equip(cure);
            cureEquipped = true;
        }
    }
    if (!iceEquipped) delete ice;
    if (!cureEquipped) delete cure;

    Character bob("Bob");
    alice.use(0, bob);
    
    // Unequip with cleanup
    int idx = 1;
    AMateria* unequipped = alice.getMateria(idx);
    alice.unequip(idx);
    delete unequipped;

    // Test inventory full
    AMateria* extras[6];
    for (int i = 0; i < 6; i++) {
        extras[i] = src.createMateria(i%2 ? "cure" : "ice");
        if (extras[i]) {
            bool equipped = false;
            for (int j = 0; j < 4; j++) {
                if (!alice.getMateria(j)) {
                    alice.equip(extras[i]);
                    equipped = true;
                    break;
                }
            }
            if (!equipped) {
                delete extras[i];
                extras[i] = NULL;
            }
        }
    }
}

void memoryLeakCheck() {
    std::cout << "\n===== MEMORY LEAK CHECK =====\n";
    
    IMateriaSource* src = new MateriaSource();
    AMateria* learn = new Ice();
    src->learnMateria(learn);
    delete learn;
    
    ICharacter* character = new Character("Test");
    AMateria* m = src->createMateria("ice");
    if (m) {
        bool equipped = false;
        for (int i = 0; i < 4; i++) {
            if (!character->getMateria(i)) {
                character->equip(m);
                equipped = true;
                break;
            }
        }
        if (!equipped) delete m;
    }
    
    delete character;
    delete src;
}

int main() {
    runSubjectTest();
    runExtendedTests();
    memoryLeakCheck();

    std::cout << "\n===== END OF TESTS =====\n";
    return 0;
}
// #include <iostream>
// #include "Character.hpp"
// #include "Ice.hpp"
// #include "Cure.hpp"
// #include "MateriaSource.hpp"

// int main()
// {
// 	std::cout << "------------------------- TEST 1 -------------------------" << std::endl;

// 	Character player_1("Bob");

// 	AMateria* cure_1 = new Cure();
// 	AMateria* ice_1 = new Ice();
// 	AMateria* cure_2 = new Cure();
// 	AMateria* ice_2 = new Ice();
// 	AMateria* cure_3 = new Cure();

// 	player_1.equip(cure_1);
// 	player_1.equip(ice_1);
// 	player_1.equip(cure_2);
// 	player_1.equip(ice_2);
// 	player_1.equip(cure_3); // inventaire plein, doit être ignoré
// 	player_1.display_inventory();

// 	player_1.unequip(4); // index invalide
// 	player_1.unequip(-1); // index invalide
// 	player_1.unequip(100000000); // index invalide

// 	player_1.display_inventory();
// 	player_1.empty_inventory();	
// 	player_1.display_inventory();

// 	std::cout << "------------------------- TEST 2 -------------------------" << std::endl;

// 	Character player_2("Jack");

// 	AMateria* cure_4 = new Cure();
// 	AMateria* ice_4 = new Ice();
// 	AMateria* cure_5 = new Cure();
// 	AMateria* ice_5 = new Ice();

// 	player_1.equip(cure_4);
// 	player_1.equip(ice_4);
// 	player_2.equip(cure_5);
// 	player_2.equip(ice_5);

// 	player_1.use(1, player_2);
// 	player_1.use(3, player_2);

// 	player_1.display_inventory();
// 	player_2.unequip(1);

// 	std::cout << "------------------------- TEST 3 -------------------------" << std::endl;

// 	Character player_3(player_1);
// 	AMateria* cure_tmp = new Cure();
// 	player_3.display_inventory();
// 	player_3.equip(cure_tmp);
// 	player_3.display_inventory();

// 	std::cout << "------------------------- TEST 4 -------------------------" << std::endl;
// 	std::cout << "Original Content (player 2):" << std::endl;
// 	player_2.display_inventory();

// 	Character player_4 = player_2;
// 	AMateria* clone_materia = cure_1->clone();

// 	player_4.display_inventory();
// 	player_4.equip(clone_materia);
// 	player_4.display_inventory();
// 	player_4.use(1, player_3);
// 	player_4.display_inventory();

// 	std::cout << "------------------------- TEST 5 -------------------------" << std::endl;

// 	MateriaSource materia_source_1;
// 	MateriaSource materia_source_2;
// 	Character player_5("Alice");
// 	AMateria* base_cure = new Cure();

// 	materia_source_1.learnMateria(base_cure);
// 	player_5.display_inventory();
// 	materia_source_2 = materia_source_1;

// 	std::cout << "---------------------- SUBJECT TEST ----------------------" << std::endl;

// 	IMateriaSource *src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());

// 	ICharacter *me = new Character("me");
// 	AMateria *tmp;

// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	ICharacter *bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	// CLEANUP MEMORY
// 	delete bob;
// 	delete me;
// 	delete src;
// 	delete base_cure;
// 	delete cure_1;
// 	delete ice_1;
// 	delete cure_2;
// 	delete ice_2;
// 	delete cure_3;
// 	delete cure_4;
// 	delete ice_4;
// 	delete cure_5;
// 	delete ice_5;
// }
