//Domingos Soares do Carmo Neto
//TIA: 32032889
#ifndef __STATIC_STACK_H__
#define __STATIC_STACK_H__
#include "StaticQueue.h"

StaticQueue::StaticStack Criar();


bool Push(StaticQueue::StaticStack& stack, char elem);

char Pop(StaticQueue::StaticStack& stack);

char Top(const StaticQueue::StaticStack& stack);

int Size(const StaticQueue::StaticStack& stack);

int Count(const StaticQueue::StaticStack& stack);

bool IsEmpty(const StaticQueue::StaticStack& stack);

bool Clear(StaticQueue::StaticStack& stack);

#endif // __STATIC_STACK_H__