# Metodo de ordenamiento Shellsort 

def shellSort(alist):
    subLista = len(alist)//2
    while subLista > 0:
      for posicionInicial in range(subLista):
        gap_InsertionSort(alist, posicionInicial, subLista)

      subLista = subLista // 2


def gap_InsertionSort(nlist,start,gap):
    for i in range(start+gap,len(nlist),gap):

        current_value = nlist[i]
        posicion = i

        
        while posicion>=gap and nlist[posicion-gap]>current_value: 
            nlist[posicion]=nlist[posicion-gap]
            posicion = posicion-gap

        nlist[posicion]=current_value


nlist = [14,46,43,27,57,41,45,21,70]
shellSort(nlist)
print(nlist)