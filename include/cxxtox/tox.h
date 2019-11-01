#include "cxxtox/options.h"

#include <tox/tox.h>

namespace cxxtox {

class cxx_tox {
public:
    cxx_tox(const tox_options &options);
    ~cxx_tox();

    size_t get_savedata_size() const;
    void get_savedata(uint8_t *savedata) const;
    bool bootstrap(const char *host, uint16_t port, const uint8_t *public_key, TOX_ERR_BOOTSTRAP *error);
    bool add_tcp_relay(const char *host, uint16_t port, const uint8_t *public_key, TOX_ERR_BOOTSTRAP *error);
    TOX_CONNECTION self_get_connection_status() const;
    void callback_self_connection_status(tox_self_connection_status_cb *callback);
    uint32_t iteration_interval() const;
    void iterate(void *user_data);
    void self_get_address(uint8_t *address) const;
    void self_set_nospam(uint32_t nospam);
    uint32_t self_get_nospam() const;
    void self_get_public_key(uint8_t *public_key) const;
    void self_get_secret_key(uint8_t *secret_key) const;
    bool self_set_name(const uint8_t *name, size_t length, TOX_ERR_SET_INFO *error);
    size_t self_get_name_size() const;
    void self_get_name(uint8_t *name) const;
    bool self_set_status_message(const uint8_t *status_message, size_t length, TOX_ERR_SET_INFO *error);
    size_t self_get_status_message_size() const;
    void self_get_status_message(uint8_t *status_message) const;
    void self_set_status(TOX_USER_STATUS status);
    TOX_USER_STATUS self_get_status() const;

    // uint32_t friend_add(const uint8_t *address, const uint8_t *message, size_t length, TOX_ERR_FRIEND_ADD *error);
    // uint32_t friend_add_norequest(const uint8_t *public_key, TOX_ERR_FRIEND_ADD *error);
    // bool friend_delete(uint32_t friend_number, TOX_ERR_FRIEND_DELETE *error);
    // uint32_t friend_by_public_key(const uint8_t *public_key, TOX_ERR_FRIEND_BY_PUBLIC_KEY *error) const;
    // bool friend_exists(uint32_t friend_number) const;
    // size_t self_get_friend_list_size(const Tox *tox);
    // void self_get_friend_list(uint32_t *friend_list) const;
    // bool friend_get_public_key(uint32_t friend_number, uint8_t *public_key, TOX_ERR_FRIEND_GET_PUBLIC_KEY *error) const;
    // uint64_t friend_get_last_online(uint32_t friend_number, TOX_ERR_FRIEND_GET_LAST_ONLINE *error) const;
    // size_t friend_get_name_size(uint32_t friend_number, TOX_ERR_FRIEND_QUERY *error) const;
    // bool friend_get_name(uint32_t friend_number, uint8_t *name, TOX_ERR_FRIEND_QUERY *error) const;
    // void callback_friend_name(tox_friend_name_cb *callback);
    // size_t friend_get_status_message_size(uint32_t friend_number, TOX_ERR_FRIEND_QUERY *error) const;
    // bool friend_get_status_message(uint32_t friend_number, uint8_t *status_message, TOX_ERR_FRIEND_QUERY *error) const;
    // void callback_friend_status_message(tox_friend_status_message_cb *callback);
    // TOX_USER_STATUS friend_get_status(uint32_t friend_number, TOX_ERR_FRIEND_QUERY *error) const;
    // void callback_friend_status(tox_friend_status_cb *callback);
    // TOX_CONNECTION friend_get_connection_status(uint32_t friend_number, TOX_ERR_FRIEND_QUERY *error) const;
    // void callback_friend_connection_status(tox_friend_connection_status_cb *callback);
    // bool friend_get_typing(uint32_t friend_number, TOX_ERR_FRIEND_QUERY *error) const;
    // void callback_friend_typing(tox_friend_typing_cb *callback);
    // bool self_set_typing(uint32_t friend_number, bool typing, TOX_ERR_SET_TYPING *error);
    // uint32_t friend_send_message(uint32_t friend_number, TOX_MESSAGE_TYPE type, const uint8_t *message, size_t length, TOX_ERR_FRIEND_SEND_MESSAGE *error);
    // void callback_friend_read_receipt(tox_friend_read_receipt_cb *callback);
    // void callback_friend_request(tox_friend_request_cb *callback);
    // void callback_friend_message(tox_friend_message_cb *callback);
    // bool hash(uint8_t *hash, const uint8_t *data, size_t length);
    // bool file_control(uint32_t friend_number, uint32_t file_number, TOX_FILE_CONTROL control, TOX_ERR_FILE_CONTROL *error);
    // void callback_file_recv_control(tox_file_recv_control_cb *callback);
    // bool file_seek(uint32_t friend_number, uint32_t file_number, uint64_t position, TOX_ERR_FILE_SEEK *error);
    // bool file_get_file_id(uint32_t friend_number, uint32_t file_number, uint8_t *file_id, TOX_ERR_FILE_GET *error) const;
    // uint32_t file_send(uint32_t friend_number, uint32_t kind, uint64_t file_size, const uint8_t *file_id, const uint8_t *filename, size_t filename_length, TOX_ERR_FILE_SEND *error);
    // bool file_send_chunk(uint32_t friend_number, uint32_t file_number, uint64_t position, const uint8_t *data, size_t length, TOX_ERR_FILE_SEND_CHUNK *error);
    // void callback_file_chunk_request(tox_file_chunk_request_cb *callback);
    // void callback_file_recv(tox_file_recv_cb *callback);
    // void callback_file_recv_chunk(tox_file_recv_chunk_cb *callback);
    // void callback_conference_invite(tox_conference_invite_cb *callback);
    // void callback_conference_connected(tox_conference_connected_cb *callback);
    // void callback_conference_message(tox_conference_message_cb *callback);
    // void callback_conference_title(tox_conference_title_cb *callback);
    // void callback_conference_peer_name(tox_conference_peer_name_cb *callback);
    // void callback_conference_peer_list_changed(tox_conference_peer_list_changed_cb *callback);
    // uint32_t conference_new(TOX_ERR_CONFERENCE_NEW *error);
    // bool conference_delete(uint32_t conference_number, TOX_ERR_CONFERENCE_DELETE *error);
    // uint32_t conference_peer_count(uint32_t conference_number, TOX_ERR_CONFERENCE_PEER_QUERY *error) const;
    // size_t conference_peer_get_name_size(uint32_t conference_number, uint32_t peer_number, TOX_ERR_CONFERENCE_PEER_QUERY *error) const;
    // bool conference_peer_get_name(uint32_t conference_number, uint32_t peer_number, uint8_t *name, TOX_ERR_CONFERENCE_PEER_QUERY *error) const;
    // bool conference_peer_get_public_key(uint32_t conference_number, uint32_t peer_number, uint8_t *public_key, TOX_ERR_CONFERENCE_PEER_QUERY *error) const;
    // bool conference_peer_number_is_ours(uint32_t conference_number, uint32_t peer_number, TOX_ERR_CONFERENCE_PEER_QUERY *error) const;
    // uint32_t conference_offline_peer_count(uint32_t conference_number, TOX_ERR_CONFERENCE_PEER_QUERY *error) const;
    // size_t conference_offline_peer_get_name_size(uint32_t conference_number, uint32_t offline_peer_number, TOX_ERR_CONFERENCE_PEER_QUERY *error) const;
    // bool conference_offline_peer_get_name(uint32_t conference_number, uint32_t offline_peer_number, uint8_t *name, TOX_ERR_CONFERENCE_PEER_QUERY *error) const;
    // bool conference_offline_peer_get_public_key(uint32_t conference_number, uint32_t offline_peer_number, uint8_t *public_key, TOX_ERR_CONFERENCE_PEER_QUERY *error) const;
    // uint64_t conference_offline_peer_get_last_active(uint32_t conference_number, uint32_t offline_peer_number, TOX_ERR_CONFERENCE_PEER_QUERY *error) const;
    // bool conference_set_max_offline(uint32_t conference_number, uint32_t max_offline_peers, TOX_ERR_CONFERENCE_SET_MAX_OFFLINE *error);
    // bool conference_invite(uint32_t friend_number, uint32_t conference_number, TOX_ERR_CONFERENCE_INVITE *error);
    // uint32_t conference_join(uint32_t friend_number, const uint8_t *cookie, size_t length, TOX_ERR_CONFERENCE_JOIN *error);
    // bool conference_send_message(uint32_t conference_number, TOX_MESSAGE_TYPE type, const uint8_t *message, size_t length, TOX_ERR_CONFERENCE_SEND_MESSAGE *error);
    // size_t conference_get_title_size(uint32_t conference_number, TOX_ERR_CONFERENCE_TITLE *error) const;
    // bool conference_get_title(uint32_t conference_number, uint8_t *title, TOX_ERR_CONFERENCE_TITLE *error) const;
    // bool conference_set_title(uint32_t conference_number, const uint8_t *title, size_t length, TOX_ERR_CONFERENCE_TITLE *error);
    // size_t conference_get_chatlist_size(const Tox *tox);
    // void conference_get_chatlist(uint32_t *chatlist) const;
    // TOX_CONFERENCE_TYPE conference_get_type(uint32_t conference_number, TOX_ERR_CONFERENCE_GET_TYPE *error) const;
    // bool conference_get_id(uint32_t conference_number, uint8_t *id) const;
    // uint32_t conference_by_id(const uint8_t *id, TOX_ERR_CONFERENCE_BY_ID *error) const;
    // bool conference_get_uid(uint32_t conference_number, uint8_t *uid) const;
    // uint32_t conference_by_uid(const uint8_t *uid, TOX_ERR_CONFERENCE_BY_UID *error) const;
    // bool friend_send_lossy_packet(uint32_t friend_number, const uint8_t *data, size_t length, TOX_ERR_FRIEND_CUSTOM_PACKET *error);
    // bool friend_send_lossless_packet(uint32_t friend_number, const uint8_t *data, size_t length, TOX_ERR_FRIEND_CUSTOM_PACKET *error);
    // void callback_friend_lossy_packet(tox_friend_lossy_packet_cb *callback);
    // void callback_friend_lossless_packet(tox_friend_lossless_packet_cb *callback);
    // void self_get_dht_id(uint8_t *dht_id) const;
    // uint16_t self_get_udp_port(TOX_ERR_GET_PORT *error) const;
    // uint16_t self_get_tcp_port(TOX_ERR_GET_PORT *error) const;

private:
    Tox *const tox_;
};

}
