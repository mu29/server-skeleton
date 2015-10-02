#include "router.h"

Router::Router() {
    responses_.clear();
}

void Router::Handle(Request& req) {

}

void Router::AddResponse(Response res) {

}

Router* Router::GetInstance() {

}

Router* Router::instance_ = NULL;

