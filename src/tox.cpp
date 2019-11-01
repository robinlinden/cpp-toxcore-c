#include "cxxtox/tox.h"

namespace cxxtox {

cxx_tox::cxx_tox(const tox_options &options) : tox_(tox_new(options.options, nullptr)) {
}
cxx_tox::~cxx_tox() {
    tox_kill(tox_);
}

size_t cxx_tox::get_savedata_size() const {
    return tox_get_savedata_size(tox_);
}

void cxx_tox::get_savedata(uint8_t *savedata) const {
    tox_get_savedata(tox_, savedata);
}

bool cxx_tox::bootstrap(const char *host, uint16_t port, const uint8_t *public_key, TOX_ERR_BOOTSTRAP *error) {
    return tox_bootstrap(tox_, host, port, public_key, error);
}

bool cxx_tox::add_tcp_relay(const char *host, uint16_t port, const uint8_t *public_key, TOX_ERR_BOOTSTRAP *error) {
    return tox_add_tcp_relay(tox_, host, port, public_key, error);
}

TOX_CONNECTION cxx_tox::self_get_connection_status() const {
    return tox_self_get_connection_status(tox_);
}

void cxx_tox::callback_self_connection_status(tox_self_connection_status_cb *callback) {
    tox_callback_self_connection_status(tox_, callback);
}

uint32_t cxx_tox::iteration_interval() const {
    return tox_iteration_interval(tox_);
}

void cxx_tox::iterate(void *user_data) {
    tox_iterate(tox_, user_data);
}

void cxx_tox::self_get_address(uint8_t *address) const {
    tox_self_get_address(tox_, address);
}

void cxx_tox::self_set_nospam(uint32_t nospam) {
    tox_self_set_nospam(tox_, nospam);
}

uint32_t cxx_tox::self_get_nospam() const {
    return tox_self_get_nospam(tox_);
}

void cxx_tox::self_get_public_key(uint8_t *public_key) const {
    tox_self_get_public_key(tox_, public_key);
}

void cxx_tox::self_get_secret_key(uint8_t *secret_key) const {
    tox_self_get_secret_key(tox_, secret_key);
}

bool cxx_tox::self_set_name(const uint8_t *name, size_t length, TOX_ERR_SET_INFO *error) {
    return tox_self_set_name(tox_, name, length, error);
}

size_t cxx_tox::self_get_name_size() const {
    return tox_self_get_name_size(tox_);
}

void cxx_tox::self_get_name(uint8_t *name) const {
    tox_self_get_name(tox_, name);
}

bool cxx_tox::self_set_status_message(const uint8_t *status_message, size_t length, TOX_ERR_SET_INFO *error) {
    return tox_self_set_status_message(tox_, status_message, length, error);
}

size_t cxx_tox::self_get_status_message_size() const {
    return tox_self_get_status_message_size(tox_);
}

void cxx_tox::self_get_status_message(uint8_t *status_message) const {
    tox_self_get_status_message(tox_, status_message);
}

void cxx_tox::self_set_status(TOX_USER_STATUS status) {
    tox_self_set_status(tox_, status);
}

TOX_USER_STATUS cxx_tox::self_get_status() const {
    return tox_self_get_status(tox_);
}

}
