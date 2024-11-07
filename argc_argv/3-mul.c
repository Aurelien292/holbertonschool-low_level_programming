

/**
 * main - Multiplie deux nombres passés en arguments
 * @argc: Le nombre d'arguments passés au programme
 * @argv: Un tableau de chaînes de caractères représentant les arguments
 *
 * Description: Ce programme prend deux arguments passés à la
 * ligne de commande,
 * les convertit en entiers, effectue une multiplication et affiche
 * le résultat.
 * Si le nombre d'arguments est incorrect (pas exactement 2 arguments
 * supplémentaires),
 * le programme affiche un message d'erreur.
 *
 * Return: Retourne 0 si l'exécution se fait sans erreur, sinon retourne 1
 */
int main(int argc, char *argv[])
{
int num1;
int num2;
int result;
if (argc != 3)
{
printf("Error"),
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;
printf("%d", result);
return (0);
}
