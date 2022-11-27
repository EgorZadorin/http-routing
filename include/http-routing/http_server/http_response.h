#ifndef HTTP_ROUTING_HEADER_H
#define HTTP_ROUTING_HEADER_H

#include <string>
#include <map>

namespace server {

    enum method { GET, POST, DEL, PUT, OPTIONS, CONNECT };

    struct http_server {
        std::string name;

        void http_register(const method&) const;
    };

}  // namespace server

#endif //HTTP_ROUTING_HEADER_H
