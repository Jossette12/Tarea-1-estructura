bool busquedaBinaria(int lista[], int cantidad, int dato) {

    int inicio = 0;
    int fin = cantidad - 1;

    while (inicio <= fin) {

        int medio = inicio + (fin - inicio) / 2;

        if (lista[medio] == dato) {
            return true;}

        else if (lista[medio] < dato) {
            inicio = medio + 1;}

        else {
            fin = medio - 1;}}

    return false;}

/*
Mejor caso:
El mejor caso es cuando el elemento a buscar se encuentra justo en la mitad del arreglo.

Complejidad: Como solo se realiza una comparación su complejidad es de O(1).
Big O: O(1).

Peor caso:
El peor caso es cuando el elemento no se encuentra en el arreglo o está en la última posición a revisar.

Complejidad: Como la función divide a la mitad el arreglo hasta que se comparen los n datos da una complejidad de O(log n).
Big O: O(log n). 
*/
