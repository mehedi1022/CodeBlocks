import java.util.Scanner;

public class First {

    public static void main(String[] args) {
        String name = "farhan"; //%s
        String country = "Bangladesh";
        int age = 26; //%d
        String company = "freeCodeCamp";
        double gpa = 3.8; //%f
        char percentSign = '%';  //%c
        boolean amTruth = false; //%b

        // String formattedString = String.format("My name  is %s. I am from %s. I am %d years old. I work for %s. My GPA %f. I have 100%c. This are all %b claims", name, country, age, company, gpa, percentSign, amTruth);
        // System.out.println("Hello Eveyone. I am " + name + ". I am from " + country + ". I am " + age + " I work in " + company);

        System.out.println(String.format("My name  is %s. I am from %s. I am %d years old. I work for %s. My GPA %f. I have 100%c. This are all %b claims", name, country, age, company, gpa, percentSign, amTruth));

    }
}