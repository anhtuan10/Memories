/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author hantu
 */
public class Circle extends Shape{
    private double radius;
    public Circle(int _x, int _y, double _r){
        super(_x, _y);
        radius = _r;
    }
public void draw(){
    System.out.println("Draw circle");
}
public void erase(){
    System.out.println("Erase circle");
}
}
