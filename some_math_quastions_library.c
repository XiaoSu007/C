
#define WAY 1
float CTP(float aday,float bday) 
{
    float as,bs;
    float abs;
    float abday;
    as=WAY/aday;
    bs=WAY/bday;
    abs=as+bs;
    abday=WAY/abs;
    return abday;
}
void krq(int legs,int h,int rl,int kl,int* r,int* k)
{
    
    
    for (*r = 1; *r <= h;*r+=1)
    {
        for (*k = 1; *k <= h;*k+=1)
        {
            if (*r*rl+*k*kl == legs && *k+*r == h)
            {
                break;
            }
        }
        if (*r*rl+*k*kl == legs && *k+*r == h) 
        {
            break;
        }
    }
    if (*r*rl+*k*kl != legs && *k+*r != h)
    {
        *r=0;
        *k=0;
    }
}
float calculator(float num1,float num2,char symbol)
{
    float sum=0;
    switch (symbol)
    {
    case '+':
        sum=num1+num2;break;
    case '-':
        sum=num1-num2;break;
    case '*':
        sum=num1*num2;break;
    case '/':
        sum=num1/num2;break;
    default:
        break;
    }
    return sum;
}


