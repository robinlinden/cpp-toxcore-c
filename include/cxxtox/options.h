#include <tox/tox.h>

namespace cxxtox {

struct tox_options {
    tox_options();
    ~tox_options();

    bool get_ipv6_enabled() const;
    void set_ipv6_enabled(bool ipv6_enabled);
    bool get_udp_enabled() const;
    void set_udp_enabled(bool udp_enabled);
    bool get_local_discovery_enabled() const;
    void set_local_discovery_enabled(bool local_discovery_enabled);
    TOX_PROXY_TYPE get_proxy_type() const;
    void set_proxy_type(TOX_PROXY_TYPE type);
    const char *get_proxy_host() const;
    void set_proxy_host(const char *host);
    uint16_t get_proxy_port() const;
    void set_proxy_port(uint16_t port);
    uint16_t get_start_port() const;
    void set_start_port(uint16_t start_port);
    uint16_t get_end_port() const;
    void set_end_port(uint16_t end_port);
    uint16_t get_tcp_port() const;
    void set_tcp_port(uint16_t tcp_port);
    bool get_hole_punching_enabled() const;
    void set_hole_punching_enabled(bool hole_punching_enabled);
    TOX_SAVEDATA_TYPE get_savedata_type() const;
    void set_savedata_type(TOX_SAVEDATA_TYPE type);
    const uint8_t *get_savedata_data() const;
    void set_savedata_data(const uint8_t *data, size_t length);
    size_t get_savedata_length() const;
    void set_savedata_length(size_t length);
    tox_log_cb *get_log_callback() const;
    void set_log_callback(tox_log_cb *callback);
    void *get_log_user_data() const;
    void set_log_user_data(void *user_data);

    struct Tox_Options *const options;
};

}
