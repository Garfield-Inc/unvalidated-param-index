int global_array[9];

void foobar(int x)
{
    int local_array[7];
    local_array[x] = 0;
	global_array[x] = 0;
}

int main() {
    foobar(15);
    return 0;
}