package com.company;

import java.util.Scanner;

public class Grade {
    public static void main(String[] args) {
        int marks;
        System.out.println("Enter your marks : ");
        Scanner s = new Scanner(System.in);
        marks = s.nextInt();
        switch (marks/10){
            case 10:
            case 9:
                System.out.println("Grade O");
                break;
            case 8:
                System.out.println("Grade E");
                break;
            case 7:
                System.out.println("Grade A");
                break;
            case 6:
                System.out.println("Grade B");
                break;
            case 5:
                System.out.println("Grade C");
                break;
            case 4:
                System.out.println("Fail");
                break;
            default:
                System.out.println("Invalid Marks, try again later");
                break;
        }
    }
}
