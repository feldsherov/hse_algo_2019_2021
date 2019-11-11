FROM ubuntu:18.04

RUN apt-get -y update

RUN apt-get -y install make gdb g++

RUN apt-get -y install cmake

RUN apt-get -y install git

RUN apt-get -y install python3

COPY ./segments/main.cpp ./segments/segments.cpp ./segments/segments.h ./segments/segments_ut.cpp ./segments/tests.py ./segments/CMakeLists.txt ./segments/CMakeLists.txt.in  /workdir/

WORKDIR /workdir