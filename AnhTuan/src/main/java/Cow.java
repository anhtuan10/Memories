/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author hantu
 */
public class Cow {
   private String name;
   public static int numOfCows = 0;
   
  public Cow(String theName){
      name = theName;
      numOfCows++;
      System.out.println("Cow #" + numOfCows+"created.");
  }
    }
