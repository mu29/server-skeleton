#include "request.h"

Request::Request() {

}

std::string Request::GetRoute() { 
    return route_; 
}

std::string Request::GetMethod() {
    return method_;
}

Json::Object& Request::GetParameter() {
    return parameter_;
}

Json::Object Request::GetBody() {
    return body_;
}

