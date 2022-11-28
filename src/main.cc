#include <cista/serialization.h>
#include "http-routing/http_server/http_response.h"

using namespace server;

int main() {
    server::http_server s = {.name = "server"};
    s.http_register(method::GET) ;
}