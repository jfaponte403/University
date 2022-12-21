/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package numerosqueserepiten;

/**
 *
 * @author Jhonattan
 */
public class NumOfRepeated {
    public int numOfRep(int[] vec, int tamVec){
        int count = 0;
        
        for (int i = 0; i < tamVec; i++) {
            for (int j = 0; j < tamVec; j++) {
                if (vec[j] == vec[i] && j != i) {
                    count++;
                }
            }    
        }
        return count;
                
    }
}
