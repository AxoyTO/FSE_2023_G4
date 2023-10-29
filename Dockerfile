FROM ubuntu:23.04

RUN apt-get update && apt-get install -y --no-install-recommends \
					build-essential \
     					cmake \
					git \
     					python3.10 \
					python3-pip \
					&& apt-get clean

RUN git clone https://github.com/AxoyTO/FSE_2023_G4 && cd FSE_2023_G4

WORKDIR /FSE_2023_G4
RUN make -f Makefile

ENTRYPOINT ["bash"]

