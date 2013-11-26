OpenGLMathTP1
=============

Repo. du projet OpenGL du TP1 de Math

_Le code a été compilé sous linux_

## Commandes ##
| **Rotation**              		| **Translation**       |   **Scale**     		| **Autres** 		|
| -------------             		| --------------        | ------------          |----------			|
| Up[8]/Down[2] : Rotation X      	| Q/D : Translation X   | +/- : Scale homogene  | R : Reset forme	|
| Left[4]/Right[6] : Rotation Y  	| Z/S : Translation Y   | I/K : Scale X         | f : Fullscreen ON	|
| 7/9 : Rotation Z     	    	   	| A/E : Translation Z   | O/L : Scale Y         | F	: Fullscreen OFF|
|                       		    |                       | P/M : Scale Z         |					|

##Fonctionnement##

Le fonctionnement principal est relativement simple. On utilise une matrice identité (matrice de transformation) à laquelle on applique les matrices de rotation, translation et de mise a l'échelle (scale). Une fois la matrice calculée on l'applique à chaque points de la figure.

### Classes ###
Plusieurs classes composent le projet, voici une breve description de ces dernières:

| **Nom**		| 							**Description**											|
|----------		| --------------																	|
| Matrice3D		| Permet de gérer les matrices en coord. homogène (donc une matrice 4x4).			|
| Point3D		| Permet de gérer les points en coord. homogène (donc un tableau de 4 éléments)		|
| DrawText		| Automatise le dessin d'un texte (en mode HUD) à l'écran							|

### Autre ###

| **Nom**		|						**Description**											|
|----------		|-------------------															|
|MatrixGenerator| _Namespace_ Ensemble de fonctions de génération de matrice de transformation 	|
