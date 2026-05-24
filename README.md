# UDP Packet Sender & Receiver

A simple UDP packet sender and receiver written in C to learn how UDP packets are sent to addresses, requiring no pre-existing connection.

## Structure

```text
sender/
└── main.c

receiver/
└── main.c
```
## COMPILE
```
gcc sender/main.c -o sender_app
gcc receiver/main.c -o receiver_app
```
## RUN
``` RECIEVER
./receiver_app <PORT>
./receiver_app 8080
```

``` SENDER
./sender_app <IP_ADDRESS> <PORT> <MESSAGE>
./sender_app 127.0.0.1 8080 "Hello from the other sidddeeee!"
```
