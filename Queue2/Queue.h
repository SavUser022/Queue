#pragma once
template <typename cherg> 
class Queue
{
private:
	int count;
	cherg* arr;
	int size;
public:
	Queue() : size(10), count(0)
	{
		arr = new cherg[size];
	}
	Queue(int size) : count(0), size(size)
	{
		arr = new cherg[size];
	}
	~Queue()
	{
		delete[] arr;
	}
	Queue(const Queue& cherga)
	{
		this->count = cherga.count;
		this->size = cherga.size;
		this-> arr = new cherg[cherga.size];
		for (int i = 0; i < cherga.size; i++)
		{
			this->arr[i] = cherga.arr[i];
		}
	}
	bool isEmpty()
	{
		return (count == 0);
	}
	bool isFull()
	{
		return (count == size);
	}
	void display()
	{
		for (int i = count - 1; i >= 0; i--)
		{
			std::cout << arr[i] << " ";
		}
	}
	void  push( const cherg& item)
	{
		if (isFull())
		{
			std::cout << "The stack is full" << std::endl;
		}
		else
		{
			 arr[count++] = item;
		}

	}
	void clear()
	{
		count = 0;
	}
	cherg front() const
	{
		std::cout << arr[0] << std::endl;
		return arr[0];
	}

	cherg back() const
	{
		std::cout << arr[size - 1] << std::endl;
		return arr[size - 1];
	}
	cherg pop()
	{
		if (isEmpty())
		{
			std::cout << "The Queue is full." << std::endl;
			return NULL;
		}
		else
		{
			return arr[0]--; 
		}
	}
};