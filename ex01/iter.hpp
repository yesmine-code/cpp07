template<typename T>
void	iter(T *array, int arraySize, void (*func)(T &)){
	for (int i = 0; i < arraySize; i++)
		func(array[i]);
}

