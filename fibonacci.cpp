//
// Created by Mykola on 4/14/21.
//
int fibonacci(int number){
    if(number==0)
        return 0;
    if (number == 1)
        return 1;
    return fibonacci(number - 2)+ fibonacci(number - 2);

}
