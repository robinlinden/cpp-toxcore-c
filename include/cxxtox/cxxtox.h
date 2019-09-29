#include <tox/tox.h>

namespace cxxtox {

struct tox_options {
    tox_options();
    ~tox_options();

    bool get_ipv6_enabled();
    void set_ipv6_enabled(bool ipv6_enabled);
    bool get_udp_enabled();
    void set_udp_enabled(bool udp_enabled);
    bool get_local_discovery_enabled();
    void set_local_discovery_enabled(bool local_discovery_enabled);
    TOX_PROXY_TYPE get_proxy_type();
    void set_proxy_type(TOX_PROXY_TYPE type);
    const char *get_proxy_host();
    void set_proxy_host(const char *host);
    uint16_t get_proxy_port();
    void set_proxy_port(uint16_t port);
    uint16_t get_start_port();
    void set_start_port(uint16_t start_port);
    uint16_t get_end_port();
    void set_end_port(uint16_t end_port);
    uint16_t get_tcp_port();
    void set_tcp_port(uint16_t tcp_port);
    bool get_hole_punching_enabled();
    void set_hole_punching_enabled(bool hole_punching_enabled);
    TOX_SAVEDATA_TYPE get_savedata_type();
    void set_savedata_type(TOX_SAVEDATA_TYPE type);
    const uint8_t *get_savedata_data();
    void set_savedata_data(const uint8_t *data, size_t length);
    size_t get_savedata_length();
    void set_savedata_length(size_t length);
    tox_log_cb *get_log_callback();
    void set_log_callback(tox_log_cb *callback);
    void *get_log_user_data();
    void set_log_user_data(void *user_data);

    struct Tox_Options *const options;
};

class cxx_tox {
public:
    cxx_tox(const tox_options &options);
    ~cxx_tox();

private:
    Tox *const tox_;
};

}

// TODO:
// size_t tox_get_savedata_size(const Tox *tox);
// void tox_get_savedata(const Tox *tox, uint8_t *savedata);
// bool tox_bootstrap(Tox *tox, const char *host, uint16_t port, const uint8_t *public_key, TOX_ERR_BOOTSTRAP *error);
// bool tox_add_tcp_relay(Tox *tox, const char *host, uint16_t port, const uint8_t *public_key, TOX_ERR_BOOTSTRAP *error);
// TOX_CONNECTION tox_self_get_connection_status(const Tox *tox);
// void tox_callback_self_connection_status(Tox *tox, tox_self_connection_status_cb *callback);
// uint32_t tox_iteration_interval(const Tox *tox);
// void tox_iterate(Tox *tox, void *user_data);
// void tox_self_get_address(const Tox *tox, uint8_t *address);
// void tox_self_set_nospam(Tox *tox, uint32_t nospam);
// uint32_t tox_self_get_nospam(const Tox *tox);
// void tox_self_get_public_key(const Tox *tox, uint8_t *public_key);
// void tox_self_get_secret_key(const Tox *tox, uint8_t *secret_key);
// bool tox_self_set_name(Tox *tox, const uint8_t *name, size_t length, TOX_ERR_SET_INFO *error);
// size_t tox_self_get_name_size(const Tox *tox);
// void tox_self_get_name(const Tox *tox, uint8_t *name);
// bool tox_self_set_status_message(Tox *tox, const uint8_t *status_message, size_t length, TOX_ERR_SET_INFO *error);
// size_t tox_self_get_status_message_size(const Tox *tox);
// void tox_self_get_status_message(const Tox *tox, uint8_t *status_message);
// void tox_self_set_status(Tox *tox, TOX_USER_STATUS status);
// TOX_USER_STATUS tox_self_get_status(const Tox *tox);
// uint32_t tox_friend_add(Tox *tox, const uint8_t *address, const uint8_t *message, size_t length,
//                         TOX_ERR_FRIEND_ADD *error);
// uint32_t tox_friend_add_norequest(Tox *tox, const uint8_t *public_key, TOX_ERR_FRIEND_ADD *error);
// bool tox_friend_delete(Tox *tox, uint32_t friend_number, TOX_ERR_FRIEND_DELETE *error);
// uint32_t tox_friend_by_public_key(const Tox *tox, const uint8_t *public_key, TOX_ERR_FRIEND_BY_PUBLIC_KEY *error);
// bool tox_friend_exists(const Tox *tox, uint32_t friend_number);
// size_t tox_self_get_friend_list_size(const Tox *tox);
// void tox_self_get_friend_list(const Tox *tox, uint32_t *friend_list);
// bool tox_friend_get_public_key(const Tox *tox, uint32_t friend_number, uint8_t *public_key,
//                                TOX_ERR_FRIEND_GET_PUBLIC_KEY *error);
// uint64_t tox_friend_get_last_online(const Tox *tox, uint32_t friend_number, TOX_ERR_FRIEND_GET_LAST_ONLINE *error);
// size_t tox_friend_get_name_size(const Tox *tox, uint32_t friend_number, TOX_ERR_FRIEND_QUERY *error);
// bool tox_friend_get_name(const Tox *tox, uint32_t friend_number, uint8_t *name, TOX_ERR_FRIEND_QUERY *error);
// void tox_callback_friend_name(Tox *tox, tox_friend_name_cb *callback);
// size_t tox_friend_get_status_message_size(const Tox *tox, uint32_t friend_number, TOX_ERR_FRIEND_QUERY *error);
// bool tox_friend_get_status_message(const Tox *tox, uint32_t friend_number, uint8_t *status_message,
//                                    TOX_ERR_FRIEND_QUERY *error);
// void tox_callback_friend_status_message(Tox *tox, tox_friend_status_message_cb *callback);
// TOX_USER_STATUS tox_friend_get_status(const Tox *tox, uint32_t friend_number, TOX_ERR_FRIEND_QUERY *error);
// void tox_callback_friend_status(Tox *tox, tox_friend_status_cb *callback);
// TOX_CONNECTION tox_friend_get_connection_status(const Tox *tox, uint32_t friend_number, TOX_ERR_FRIEND_QUERY *error);
// void tox_callback_friend_connection_status(Tox *tox, tox_friend_connection_status_cb *callback);
// bool tox_friend_get_typing(const Tox *tox, uint32_t friend_number, TOX_ERR_FRIEND_QUERY *error);
// void tox_callback_friend_typing(Tox *tox, tox_friend_typing_cb *callback);
// bool tox_self_set_typing(Tox *tox, uint32_t friend_number, bool typing, TOX_ERR_SET_TYPING *error);
// uint32_t tox_friend_send_message(Tox *tox, uint32_t friend_number, TOX_MESSAGE_TYPE type, const uint8_t *message,
//                                  size_t length, TOX_ERR_FRIEND_SEND_MESSAGE *error);
// void tox_callback_friend_read_receipt(Tox *tox, tox_friend_read_receipt_cb *callback);
// void tox_callback_friend_request(Tox *tox, tox_friend_request_cb *callback);
// void tox_callback_friend_message(Tox *tox, tox_friend_message_cb *callback);
// bool tox_hash(uint8_t *hash, const uint8_t *data, size_t length);
// bool tox_file_control(Tox *tox, uint32_t friend_number, uint32_t file_number, TOX_FILE_CONTROL control,
//                       TOX_ERR_FILE_CONTROL *error);
// void tox_callback_file_recv_control(Tox *tox, tox_file_recv_control_cb *callback);
// bool tox_file_seek(Tox *tox, uint32_t friend_number, uint32_t file_number, uint64_t position, TOX_ERR_FILE_SEEK *error);
// bool tox_file_get_file_id(const Tox *tox, uint32_t friend_number, uint32_t file_number, uint8_t *file_id,
//                           TOX_ERR_FILE_GET *error);
// uint32_t tox_file_send(Tox *tox, uint32_t friend_number, uint32_t kind, uint64_t file_size, const uint8_t *file_id,
//                        const uint8_t *filename, size_t filename_length, TOX_ERR_FILE_SEND *error);
// bool tox_file_send_chunk(Tox *tox, uint32_t friend_number, uint32_t file_number, uint64_t position, const uint8_t *data,
//                          size_t length, TOX_ERR_FILE_SEND_CHUNK *error);
// void tox_callback_file_chunk_request(Tox *tox, tox_file_chunk_request_cb *callback);
// void tox_callback_file_recv(Tox *tox, tox_file_recv_cb *callback);
// void tox_callback_file_recv_chunk(Tox *tox, tox_file_recv_chunk_cb *callback);
// void tox_callback_conference_invite(Tox *tox, tox_conference_invite_cb *callback);
// void tox_callback_conference_connected(Tox *tox, tox_conference_connected_cb *callback);
// void tox_callback_conference_message(Tox *tox, tox_conference_message_cb *callback);
// void tox_callback_conference_title(Tox *tox, tox_conference_title_cb *callback);
// void tox_callback_conference_peer_name(Tox *tox, tox_conference_peer_name_cb *callback);
// void tox_callback_conference_peer_list_changed(Tox *tox, tox_conference_peer_list_changed_cb *callback);
// uint32_t tox_conference_new(Tox *tox, TOX_ERR_CONFERENCE_NEW *error);
// bool tox_conference_delete(Tox *tox, uint32_t conference_number, TOX_ERR_CONFERENCE_DELETE *error);
// uint32_t tox_conference_peer_count(const Tox *tox, uint32_t conference_number, TOX_ERR_CONFERENCE_PEER_QUERY *error);
// size_t tox_conference_peer_get_name_size(const Tox *tox, uint32_t conference_number, uint32_t peer_number,
//         TOX_ERR_CONFERENCE_PEER_QUERY *error);
// bool tox_conference_peer_get_name(const Tox *tox, uint32_t conference_number, uint32_t peer_number, uint8_t *name,
//                                   TOX_ERR_CONFERENCE_PEER_QUERY *error);
// bool tox_conference_peer_get_public_key(const Tox *tox, uint32_t conference_number, uint32_t peer_number,
//                                         uint8_t *public_key, TOX_ERR_CONFERENCE_PEER_QUERY *error);
// bool tox_conference_peer_number_is_ours(const Tox *tox, uint32_t conference_number, uint32_t peer_number,
//                                         TOX_ERR_CONFERENCE_PEER_QUERY *error);
// uint32_t tox_conference_offline_peer_count(const Tox *tox, uint32_t conference_number,
//         TOX_ERR_CONFERENCE_PEER_QUERY *error);
// size_t tox_conference_offline_peer_get_name_size(const Tox *tox, uint32_t conference_number,
//         uint32_t offline_peer_number, TOX_ERR_CONFERENCE_PEER_QUERY *error);
// bool tox_conference_offline_peer_get_name(const Tox *tox, uint32_t conference_number, uint32_t offline_peer_number,
//         uint8_t *name, TOX_ERR_CONFERENCE_PEER_QUERY *error);
// bool tox_conference_offline_peer_get_public_key(const Tox *tox, uint32_t conference_number,
//         uint32_t offline_peer_number, uint8_t *public_key, TOX_ERR_CONFERENCE_PEER_QUERY *error);
// uint64_t tox_conference_offline_peer_get_last_active(const Tox *tox, uint32_t conference_number,
//         uint32_t offline_peer_number, TOX_ERR_CONFERENCE_PEER_QUERY *error);
// bool tox_conference_set_max_offline(Tox *tox, uint32_t conference_number, uint32_t max_offline_peers,
//                                     TOX_ERR_CONFERENCE_SET_MAX_OFFLINE *error);
// bool tox_conference_invite(Tox *tox, uint32_t friend_number, uint32_t conference_number,
//                            TOX_ERR_CONFERENCE_INVITE *error);
// uint32_t tox_conference_join(Tox *tox, uint32_t friend_number, const uint8_t *cookie, size_t length,
//                              TOX_ERR_CONFERENCE_JOIN *error);
// bool tox_conference_send_message(Tox *tox, uint32_t conference_number, TOX_MESSAGE_TYPE type, const uint8_t *message,
//                                  size_t length, TOX_ERR_CONFERENCE_SEND_MESSAGE *error);
// size_t tox_conference_get_title_size(const Tox *tox, uint32_t conference_number, TOX_ERR_CONFERENCE_TITLE *error);
// bool tox_conference_get_title(const Tox *tox, uint32_t conference_number, uint8_t *title,
//                               TOX_ERR_CONFERENCE_TITLE *error);
// bool tox_conference_set_title(Tox *tox, uint32_t conference_number, const uint8_t *title, size_t length,
//                               TOX_ERR_CONFERENCE_TITLE *error);
// size_t tox_conference_get_chatlist_size(const Tox *tox);
// void tox_conference_get_chatlist(const Tox *tox, uint32_t *chatlist);
// TOX_CONFERENCE_TYPE tox_conference_get_type(const Tox *tox, uint32_t conference_number,
//         TOX_ERR_CONFERENCE_GET_TYPE *error);
// bool tox_conference_get_id(const Tox *tox, uint32_t conference_number, uint8_t *id);
// uint32_t tox_conference_by_id(const Tox *tox, const uint8_t *id, TOX_ERR_CONFERENCE_BY_ID *error);
// bool tox_conference_get_uid(const Tox *tox, uint32_t conference_number, uint8_t *uid);
// uint32_t tox_conference_by_uid(const Tox *tox, const uint8_t *uid, TOX_ERR_CONFERENCE_BY_UID *error);
// bool tox_friend_send_lossy_packet(Tox *tox, uint32_t friend_number, const uint8_t *data, size_t length,
//                                   TOX_ERR_FRIEND_CUSTOM_PACKET *error);
// bool tox_friend_send_lossless_packet(Tox *tox, uint32_t friend_number, const uint8_t *data, size_t length,
//                                      TOX_ERR_FRIEND_CUSTOM_PACKET *error);
// void tox_callback_friend_lossy_packet(Tox *tox, tox_friend_lossy_packet_cb *callback);
// void tox_callback_friend_lossless_packet(Tox *tox, tox_friend_lossless_packet_cb *callback);
// void tox_self_get_dht_id(const Tox *tox, uint8_t *dht_id);
// uint16_t tox_self_get_udp_port(const Tox *tox, TOX_ERR_GET_PORT *error);
// uint16_t tox_self_get_tcp_port(const Tox *tox, TOX_ERR_GET_PORT *error);
