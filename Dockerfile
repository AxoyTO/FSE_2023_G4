FROM ubuntu:23.04

RUN apt-get update && apt-get install -y --no-install-recommends \
					build-essential \
					cmake \
					git \
					&& apt-get clean

RUN git clone https://github.com/AxoyTO/FSE_2023_G4 && cd FSE_2023_G4

WORKDIR /FSE_2023_G4
RUN cmake CMakeLists.txt
RUN make -f Makefile

ENTRYPOINT ["bash"]

