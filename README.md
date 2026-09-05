# C HTTP Server

## Overview
This project is a showcase of a simple HTTP server built in C. The goal is to understand how servers work internally by exploring the foundations: HTTP parsing, TCP, and sockets.
<br> <br>
Over time, this project will evolve into a fully functional end-to-end HTTP server capable of handling real-world requests.

## Features
- Basic HTTP request parsing
- TCP socket handling
- Simple response generation

## Project Structure
```
http-server/
├── src/
│   ├── Makefile
│   ├── index.html
│   ├── main
│   ├── main.c
│   ├── main.o
│   ├── request.c
│   ├── request.h
│   └── request.o
├── README.md
└── LICENSE
```

## Example Usage

### Using curl:
```bash
curl http://localhost:8080/
```

### Using browser:
```bash
http://localhost:8080/
```
