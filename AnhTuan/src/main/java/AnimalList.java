/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author hantu
 */

public class AnimalList {
    private Shape[] animals = new Shape[5];
    private int nextIndex = 0;
    
    public Shape get(int index){
        return animals[index];
    }
    public void add(Shape a){
        if (nextIndex< animals.length){
            animals[nextIndex] = a;
            System.out.print("Animal added at" + nextIndex);
            nextIndex++;
        }
    }
}
