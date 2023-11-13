public class Cuenta{
    protected Cliente titular;
    protected double saldo;
    protected double movimientos;

    public Cuenta(Cliente titular, double saldo. double movimientos){
        this.titular = titular;
        this.saldo = saldo;
        this.movimientos = movimientos;
    }
    public void retiro(){ // saldo solo puede ser modificado por retiro y deposito

    }
    public void deposito(){

    }
    public String toString(){ //to string

    }
    public void registrarMovimiento(){

    }
    public Cliente getTitular(){
        return this.titular;
    }
    public void setTitular(Cliente setTitular){
        this.titular = SetTitular;
    }
    public double getSaldo(){
        return this.saldo;
    }
    public void setSaldo(double setSaldo){
        this.saldo = setSaldo;
    }
    public double getMovimientos(){
        return this.movimientos;
    }
    public void  setMovimientos(double setMovimientos){
        this.movimientos = setMovimientos;
    }


}