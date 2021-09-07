package com.company;

import java.util.Scanner;

public class MinToYearsAndDays {
    public static void main(String[] args) {
        long min;
        int year, day, rem;
        System.out.println("Input the number of minutes : ");
        Scanner s = new Scanner(System.in);
        min = s.nextLong();
        year = (int)min/525600;
        rem = (int)min%525600;
        if(rem!=0) {
            day = rem/1440;
        }
        else {
            day = 0;
        }
        System.out.println(+min+" minutes is approximately "+year+"years and "+day+" days");
    }
}
