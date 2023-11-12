FROM gcc:latest

RUN apt-get update && apt-get install -y libgflags-dev cmake

WORKDIR /app

COPY include/ include/
COPY src/ src/
COPY images/ images/
COPY CMakeLists.txt .

RUN mkdir build && cd build && cmake .. && make

CMD ["/app/build/acw"]
