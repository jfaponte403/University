package modelo;

public class Persona {
    private double weight;
    private double height;
    private int age;
    private String name;
    private int id;

    public Persona() {
        
    }
    
    public Persona(double weight, double height, int age, String name, int id) {
        this.weight = weight;
        this.height = height;
        this.age = age;
        this.name = name;
        this.id = id;
    }
    
    public double getWeight() {
        return weight;
    }

    public void setWeight(double weight) {
        this.weight = weight;
    }

    public double getHeight() {
        return height;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }
    
    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }
}
