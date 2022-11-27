#include "http-routing/http_server/http_response.h"
#include <iostream>

namespace server {

    void http_server::http_register(const method &met) const {
        std::cout << "THIS IS HTTP_SERVER'S NAME: " << name << std::endl
                  << "AND METHOD: " << met << std::endl;
    }
}