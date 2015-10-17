# perfregion
C++ API for applying linux perf to regions of code

## Installation
add /path/to/perfregion/bin to your PATH

## Usage
See test.c for an example of how to use it.

## MPI
perfregion depends on fork currently, so it does not play nice with some MPI implementations.
If you get a warning, you can try setting environment variable `OMPI_MCA_mpi_warn_on_fork=0` but it's not guarenteed to work.
