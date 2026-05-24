#include <netinet/in.h>
#include <stdlib.h>
#include <sys/socket.h>

int main(int argc, char *argv[]) {

  if (argc != 4) {
    printf("Usage: %s <peer_ip> <peer_port> <message>\n", argv[0]);
    return EXIT_FAILURE;
  }

  const char *peer_ip = argv[1];
  int peer_port = atoi(argv[2]); // stdlib/atois = converts string to integer
  const char *message = argv[3];

  struct sockaddr_in peer_adr = {
      .sin_family =
          AF_INET, // AF_INET = IPv4 address family, can use AF_INET6 for IPv6
      .sin_port = htons(peer_port) // htons = Host to Network Short
  };

  return EXIT_SUCCESS;
}