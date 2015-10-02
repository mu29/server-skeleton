#include "response.h"

Response::Response(std::string route, 
std::string method, void(*handler)(Request)) {
    route_ = route;
    method_ = method;
    handler_ = handler;
}

std::string Response::GetRoute() {
    return route_;
}

void Response::Execute(Request req) {

}

bool Response::IsMatch(Request& req) {

}

