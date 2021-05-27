//Domingos Soares do Carmo Neto
//TIA: 32032889
#include "StaticQueue.h"
#include "StaticStack.h"

StaticQueue Create()
{
	StaticQueue queue = { Criar() };

	return queue;
}

bool Enqueue(StaticQueue& queue, char elem)
{
	if (queue.pilha.count == Size(queue))
	{
		return false;
	}
	Push(queue.pilha, elem);
	return true;
}

char Dequeue(StaticQueue& queue)
{
	if (IsEmpty(queue))
	{
		return '\0';
	}
	int x = Top(queue.pilha);
	Pop(queue.pilha);
	if (IsEmpty(queue.pilha))
		return x;
	int i = Dequeue(queue);
	Push(queue.pilha, x);
	return i;
}

int Front(const StaticQueue& queue)
{
	return IsEmpty(queue) ? '\0' : queue.pilha.values[0];
}

int Size(const StaticQueue& queue)
{
	return sizeof(queue.pilha.values) / sizeof(queue.pilha.values[0]);
}

int Count(const StaticQueue& queue)
{
	return queue.pilha.count;
}

bool IsEmpty(const StaticQueue& queue)
{
	return queue.pilha.count == 0;
}

bool Clear(StaticQueue& queue)
{
	while (!IsEmpty(queue))
	{
		Dequeue(queue);
	}

	return IsEmpty(queue);
}