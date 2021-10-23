package shellsort;

/**
 *
 * @author Luis Gerardo Sánchez Díaz
 */
public class ShellSort {

    public static void main(String[] args) {
        // TODO code application logic here
        
        int[] numeros = {56, 89, 87, 56, 45};
        
        System.out.print("Array no ordenado: ");
        Impresion(numeros);//impresión del array no ordenado
        System.out.println("");
        System.out.println("");
        
        shell(numeros);//llamada del metodo shell
        
        System.out.print("Array ordenado: ");
        Impresion(numeros);//impresión del array ordenado
        System.out.println("");
        
        
    }
    
    //Metodo del ordenamiento Shell Sort
    public static void shell(int array[]) {

        int salto, aux, i;
        boolean cambios;
  
        for (salto = array.length / 2; salto != 0; salto /= 2) {
            cambios = true;
            while (cambios) {   // Ciclo para ir intercambiando los elementos del array                                         
                cambios = false;
                for (i = salto; i < array.length; i++)   // se recorre el array elemento por elemento
                {
                    if (array[i - salto] > array[i]) {       // condición para determinar el orden de los elementos
                        aux = array[i];                  // se ordenan los elemnetos
                        array[i] = array[i - salto];
                        array[i - salto] = aux;
                        cambios = true;              // activamos la bandera para confirmar el cambio                                   
                    }
                }
            }
        }
    }
    
    //Metodo para la impreción del array
    static void Impresion (int[] numeros){
        for (int i = 0; i < numeros.length; i++) {
        System.out.print("["+numeros[i]+"]");
        }
    }
}