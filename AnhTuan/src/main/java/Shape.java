/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author hantu
 */
abstract public class Shape {
    protected int x,y;
    protected Shape (int _x, int _y) { x= _x; y = _y;}
    
    abstract public void draw();
    abstract public void erase();
    
    public void moveTo(int _x, int _y){
        erase();
        x = _x;
        y = _y;
        draw();
    }
}


