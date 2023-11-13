public class Cliente extends Persona{
    private String password;
    private String[] productos;

    public Cliente(String name, String birth, int rut, String dVerificador, String password, String[] productos){
        super(name, birth, rut, dVerificador);
        this.password = password;
        this.productos = productos;
    }

    
}