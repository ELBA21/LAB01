public class Persona{
    protected String name;
    protected String birth;
    protected int rut;
    protected String dVerificador;

    public Persona(String name, String birth, int rut, String dVerificador){
        this.name = name;
        this.birth = birth;
        this.rut = rut;
        this.dVerificador = dVerificador;
    }

    public String toString(){
        return "elpepe";
    }

    public void esMayorDeEdad(){
        System.out.println("ete sech");
    }
    // getters & setters nya
    public String getName(){
        return this.name;
    }
    public void setName(String setName){
        this.name = setName;
    }
    public String getBirth(){
        return this.birth;
    }
    public void setBirth(String setBirth){
        this.birth = setBirth;
    }
    public int getRut(){
        return this.rut;
    }
    public void setRut(int setRut){ //Persona.java:38: error: incompatible types: int cannot be converted to String
        this.rut = setRut;
    }
    public String getDVerificador(){
        return this.dVerificador;
    }
    public void setDVerificador(String setDVerificador){
        this.dVerificador = setDVerificador;
    }
}