// void foobar(int x)
// {
    // int local_array[7];
    // // verify the parameter is in range
	// if (x < (int)(sizeof(int)/sizeof(int)))
		// local_array[x] = 0;
// }

// int main() {
    // foobar(15);
    // return 0;
// }

#include <assert.h>

void foobar(int n, int z)
{
	int local_array[7];
	assert(z!=0 || n==0);
	local_array[n] = 9;
}

int main()
{
	foobar(15, 15);
	return 0;
}