package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        // local maximum - the number which is larger than its 2 neighbors. For example: 2 7 3 1, there is 7 is local maximum
        // code will equal the local maximum to 0
        Scanner in = new Scanner(System.in);
        System.out.print("n = ");
        int n = in.nextInt();
        int arr[] = new int[n];

        for (int i = 0; i < n; i++){
            System.out.print("arr["+i+"] = ");
            arr[i] = in.nextInt();
        }

        System.out.print("Changed array: ");

        for (int i = 1; i<n-1; i++){
            if (arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                arr[i] = 0;
            }

            System.out.println(arr[i]+"; ");
        }
    }
}
