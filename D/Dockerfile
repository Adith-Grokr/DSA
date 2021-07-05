FROM gcc:11.1.0
COPY . /usr/src/myapp
WORKDIR /usr/src/myapp
RUN g++ -o myapp main.cpp
CMD ["./myapp"]