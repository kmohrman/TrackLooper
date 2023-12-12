
#CXX = nvcc
LD = g++
#LD = nvcc
FILES = main.cc
EXECUTABLES = main

CUDA_HOME=/usr/local/cuda

all:
	#$(LD) $(FILES) -o $(EXECUTABLES)
	#$(LD) $(FILES) -I ../code  -I ../code/core -o $(EXECUTABLES)
	#$(LD) $(FILES) -I ../SDL -I ../code/cppitertools -o $(EXECUTABLES)
	#$(LD) $(FILES) -I ../SDL  -o $(EXECUTABLES)
	#$(LD) $(FILES) -I ../SDL  -I${CUDA_HOME}/include -o $(EXECUTABLES)
	#$(LD) $(FILES) -I ../SDL --cudart shared -I${CUDA_HOME}/include -o $(EXECUTABLES)

	#$(LD) $(FILES) -I ../SDL -o $(EXECUTABLES)
	#$(LD) $(FILES) -I ../SDL -I${CUDA_HOME}/include -o $(EXECUTABLES)
	#$(LD) $(FILES) -std=c++17 -I ../SDL -I${CUDA_HOME}/include -o $(EXECUTABLES)

	# Works
	$(LD) $(FILES) -lsdl -L ../SDL/ -std=c++17 -I ../SDL -I${CUDA_HOME}/include -o $(EXECUTABLES)

