/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package numerosqueserepiten;

/**
 *
 * @author Jhonattan
 */
public class Repeated {
    public int[] isRepeated(int[] vec, int tamVec, int numOfRep){
        int aux = 0;
        int posRepeated[];
        posRepeated = new int[numOfRep*2];

        for (int i = 0; i < tamVec; i++) {
            for (int j = 0; j < tamVec; j++) {
                if (vec[j] == vec[i] && j != i) {
                    posRepeated[aux] = i;
                    posRepeated[aux + 1] = j;
                    aux += 2;
                }
            }    
        }
        
        return posRepeated;
    }
}
