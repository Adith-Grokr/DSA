FROM gcc:latest
COPY ./2sum.cpp /usr/src/myapp
WORKDIR /usr/src/myapp
RUN gcc -o myapp main.c
CMD ["./myapp"]