FROM debian
COPY 7361LGV_lab2.s ./ 
COPY 7361LGV_lab2.cc ./
RUN apt-get update
RUN apt-get install -y vim
RUN apt-get install -y gdb
RUN apt-get install -y build-essential


