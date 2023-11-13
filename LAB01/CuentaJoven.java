public class CuentaJoven extends Cuenta{
    private Double bonus;


    public CuentaJoven(Double bonus){
        this.bonus = bonus;
        super(titular, saldo, movimientos);
    }

    public void setBonus(){
        System.out.println("TEST");
    }
    public void getBonus(){
        System.out.println("TEST");
    }
    public void esTitularV(int edad){
        System.out.println("TEST");
    }
    public void bonificar(){
        System.out.println("TEST");
    }
    public void toString(){
        System.out.println("TEST");
    }
}