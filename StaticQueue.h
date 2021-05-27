//Domingos Soares do Carmo Neto
//TIA: 32032889
#ifndef __STATIC_QUEUE_H__
#define __STATIC_QUEUE_H__

const int FilaTamanho = 8;

struct StaticQueue
{
    struct StaticStack
    {
        int count;
        char values[FilaTamanho];
    };
    StaticStack pilha;
};

StaticQueue Create();

bool Enqueue(StaticQueue& queue, char elem);

char Dequeue(StaticQueue& queue);

int Front(const StaticQueue& queue);

int Size(const StaticQueue& queue);

int Count(const StaticQueue& queue);

bool IsEmpty(const StaticQueue& queue);

bool Clear(StaticQueue& queue);

#endif