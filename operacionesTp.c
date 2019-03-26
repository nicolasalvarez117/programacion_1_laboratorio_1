

int suma(int n1, int n2);
int multiplicar(int n1,int n2);
int restar(int n1,int n2);
float dividir(int n1,int n2);
int factorial(int n1);



int suma(int n1,int n2)
{
    int res;
    res = n1 + n2;
    return res;
}
int multiplicar(int n1, int n2)
{
    int res;
    res = n1 * n2;
    return res;
}
int restar (int n1, int n2)
{
    int res;
    res = n1 - n2;
    return res;
}
float dividir(int n1, int n2)
{
    int res;
    res = n1 / n2;
    return res;

}
int factorial(int n1)
{
    int resp;
    if(n1==1)
    {
        return 1;
    }
    resp=n1*factorial(n1-1);
    return resp;

}
