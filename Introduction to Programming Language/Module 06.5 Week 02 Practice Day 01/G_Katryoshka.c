#include<stdio.h>
int main ()
{
    long long int eye,mouth,body;
    scanf("%lld %lld %lld",&eye ,&mouth ,&body);
    long long int Katryoshka=0;
    if (eye < body && eye < mouth)
    {
        Katryoshka+=eye;
        body-=eye;
        mouth-=eye;
        eye-=eye;
    }
    if (mouth < body && mouth < eye)
    {
        Katryoshka+=mouth;
        body-=mouth;
        eye-=mouth;
        mouth-=mouth;
    }
    if (body < mouth &&  body < eye)
    {
        Katryoshka+=body;
        mouth-=body;
        eye-=eye;
        body-=body;
    }
    if (eye/2 < body)
    {
        Katryoshka+=eye/2;
        body-=eye/2;
        eye-=eye/2*2;
    }
    if (body < eye/2)
    {
        Katryoshka+=body;
        eye-=body;
        body-=body;
    }
    printf("%lld",Katryoshka);
    return 0;
}

//     if (eye < mouth && eye < body)
//     {
//         Katryoshka+=eye;
//         eye-=eye;
//         mouth-=eye;
//         body-=eye;
//     }
//     if (body < eye/2)
//     {
//         Katryoshka+=body;
//         body-=body;
//         eye-=body;
//     }







// for (int i = 1; i <= body; i++)
//     {
//         if (mouth>0  && eye>0 )
//         {
//             Katryoshka++;
//             eye--;
//             mouth--;
//         }
//         else if (eye >= 2 )
//         {
//             Katryoshka++;
//             eye=eye-2;
//         }
//     }