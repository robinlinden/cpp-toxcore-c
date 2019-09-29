#include "cxxtox/cxxtox.h"

namespace cxxtox {

cxx_tox::cxx_tox(const tox_options &options) : tox_(tox_new(options.options, nullptr)) {
}
cxx_tox::~cxx_tox() {
    tox_kill(tox_);
}

tox_options::tox_options() : options(tox_options_new(nullptr)) {
    tox_options_default(options);
}
tox_options::~tox_options() {
    tox_options_free(options);
}

bool tox_options::get_ipv6_enabled() {
    return tox_options_get_ipv6_enabled(options);
}
void tox_options::set_ipv6_enabled(bool ipv6_enabled) {
    tox_options_set_ipv6_enabled(options, ipv6_enabled);
}
bool tox_options::get_udp_enabled() {
    return tox_options_get_udp_enabled(options);
}
void tox_options::set_udp_enabled(bool udp_enabled) {
    tox_options_set_udp_enabled(options, udp_enabled);
}
bool tox_options::get_local_discovery_enabled() {
    return tox_options_get_local_discovery_enabled(options);
}
void tox_options::set_local_discovery_enabled(bool local_discovery_enabled) {
    tox_options_set_local_discovery_enabled(options, local_discovery_enabled);
}
TOX_PROXY_TYPE tox_options::get_proxy_type() {
    return tox_options_get_proxy_type(options);
}
void tox_options::set_proxy_type(TOX_PROXY_TYPE type) {
    tox_options_set_proxy_type(options, type);
}
const char *tox_options::get_proxy_host() {
    return tox_options_get_proxy_host(options);
}
void tox_options::set_proxy_host(const char *host) {
    tox_options_set_proxy_host(options, host);
}
uint16_t tox_options::get_proxy_port() {
    return tox_options_get_proxy_port(options);
}
void tox_options::set_proxy_port(uint16_t port) {
    tox_options_set_proxy_port(options, port);
}
uint16_t tox_options::get_start_port() {
    return tox_options_get_start_port(options);
}
void tox_options::set_start_port(uint16_t start_port) {
    tox_options_set_start_port(options, start_port);
}
uint16_t tox_options::get_end_port() {
    return tox_options_get_end_port(options);
}
void tox_options::set_end_port(uint16_t end_port) {
    tox_options_set_end_port(options, end_port);
}
uint16_t tox_options::get_tcp_port() {
    return tox_options_get_tcp_port(options);
}
void tox_options::set_tcp_port(uint16_t tcp_port) {
    tox_options_set_tcp_port(options, tcp_port);
}
bool tox_options::get_hole_punching_enabled() {
    return tox_options_get_hole_punching_enabled(options);
}
void tox_options::set_hole_punching_enabled(bool hole_punching_enabled) {
    tox_options_set_hole_punching_enabled(options, hole_punching_enabled);
}
TOX_SAVEDATA_TYPE tox_options::get_savedata_type() {
    return tox_options_get_savedata_type(options);
}
void tox_options::set_savedata_type(TOX_SAVEDATA_TYPE type) {
    tox_options_set_savedata_type(options, type);
}
const uint8_t *tox_options::get_savedata_data() {
    return tox_options_get_savedata_data(options);
}
void tox_options::set_savedata_data(const uint8_t *data, size_t length) {
    tox_options_set_savedata_data(options, data, length);
}
size_t tox_options::get_savedata_length() {
    return tox_options_get_savedata_length(options);
}
void tox_options::set_savedata_length(size_t length) {
    tox_options_set_savedata_length(options, length);
}
tox_log_cb *tox_options::get_log_callback() {
    return tox_options_get_log_callback(options);
}
void tox_options::set_log_callback(tox_log_cb *callback) {
    tox_options_set_log_callback(options, callback);
}
void *tox_options::get_log_user_data() {
    return tox_options_get_log_user_data(options);
}
void tox_options::set_log_user_data(void *user_data) {
    tox_options_set_log_user_data(options, user_data);
}

}
