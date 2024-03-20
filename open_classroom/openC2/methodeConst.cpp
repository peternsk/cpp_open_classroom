/************************************************/
/**                methode const               **/
/************************************************/

/*
    Les méthodes constantes sont des méthodes de "lecture seule".
    Elles possèdent le mot-clé const à la fin de leur prototype 
    et de leur déclaration.

    Quand vous dites "ma méthode est constante", vous indiquez au compilateur 
    que votre méthode ne modifie pas l'objet, c'est-à-dire qu'elle ne modifie 
    la valeur d'aucun de ses attributs.

    Par exemple :

        une méthode qui se contente d'afficher à l'écran des informations sur 
        l'objet est une méthode constante : elle ne fait que lire les attributs ;

        en revanche, une méthode qui met à jour le niveau de vie
        d'un personnage ne peut pas être constante.

        Dans .hpp : void maMethode(int parametre) const;
        Dans .cpp : void MaClasse::maMethode(int parametre) const;
*/