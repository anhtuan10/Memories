/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author hantu
 */
public class CownTestDrive {
    public static void main(String [] args){
       Cow c1 = new Cow();
       Cow c2 = new Cow();
    }
}

public class CowTestDrive {
    public static void main(String[] args){
        Cow c1 = new Cow();
        Cow c2 = new Cow();
        System.out.println("Total: "+ Cow.numOfCows);
    }
}
