#include <iostream>
#include <mpi.h>

using namespace std;

int main(int argc, char *argv[])
{
	int num, rank;

	MPI_Init(&argc, &argv);

	MPI_Comm_size(MPI_COMM_WORLD, &num);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);

	cout << "Hello MPI " << rank+1 << "/" << num << endl;

	MPI_Finalize();

    return 0;
}

