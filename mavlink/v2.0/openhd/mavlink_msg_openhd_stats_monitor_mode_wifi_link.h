#pragma once
// MESSAGE OPENHD_STATS_MONITOR_MODE_WIFI_LINK PACKING

#define MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK 1212


typedef struct __mavlink_openhd_stats_monitor_mode_wifi_link_t {
 uint64_t count_tx_inj_error_hint; /*<  count_tx_inj_error_hint*/
 uint64_t count_tx_dropped_packets; /*<  count_tx_dropped_packets*/
 uint64_t dummy3; /*<  for future use*/
 int32_t curr_tx_bps; /*<  tx bits per second*/
 int32_t curr_rx_bps; /*<  rx bits per second*/
 int32_t dummy1; /*<  for future use*/
 int32_t dummy2; /*<  for future use*/
 int16_t curr_tx_pps; /*<  tx packets per second*/
 int16_t curr_rx_pps; /*<  rx packets per second*/
 int16_t curr_rx_packet_loss_perc; /*<  curr_rx_packet_loss*/
 uint8_t curr_tx_card_idx; /*<  curr_tx_card_idx*/
 uint8_t curr_tx_mcs_index; /*<  curr tx mcs index used when injecting packets*/
 int8_t dummy0; /*<  for future use*/
} mavlink_openhd_stats_monitor_mode_wifi_link_t;

#define MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN 49
#define MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_MIN_LEN 49
#define MAVLINK_MSG_ID_1212_LEN 49
#define MAVLINK_MSG_ID_1212_MIN_LEN 49

#define MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_CRC 207
#define MAVLINK_MSG_ID_1212_CRC 207



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPENHD_STATS_MONITOR_MODE_WIFI_LINK { \
    1212, \
    "OPENHD_STATS_MONITOR_MODE_WIFI_LINK", \
    13, \
    {  { "curr_tx_pps", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_tx_pps) }, \
         { "curr_rx_pps", NULL, MAVLINK_TYPE_INT16_T, 0, 42, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_rx_pps) }, \
         { "curr_tx_bps", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_tx_bps) }, \
         { "curr_rx_bps", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_rx_bps) }, \
         { "curr_rx_packet_loss_perc", NULL, MAVLINK_TYPE_INT16_T, 0, 44, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_rx_packet_loss_perc) }, \
         { "count_tx_inj_error_hint", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, count_tx_inj_error_hint) }, \
         { "count_tx_dropped_packets", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, count_tx_dropped_packets) }, \
         { "curr_tx_card_idx", NULL, MAVLINK_TYPE_UINT8_T, 0, 46, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_tx_card_idx) }, \
         { "curr_tx_mcs_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 47, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_tx_mcs_index) }, \
         { "dummy0", NULL, MAVLINK_TYPE_INT8_T, 0, 48, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT32_T, 0, 32, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 36, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, dummy2) }, \
         { "dummy3", NULL, MAVLINK_TYPE_UINT64_T, 0, 16, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, dummy3) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPENHD_STATS_MONITOR_MODE_WIFI_LINK { \
    "OPENHD_STATS_MONITOR_MODE_WIFI_LINK", \
    13, \
    {  { "curr_tx_pps", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_tx_pps) }, \
         { "curr_rx_pps", NULL, MAVLINK_TYPE_INT16_T, 0, 42, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_rx_pps) }, \
         { "curr_tx_bps", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_tx_bps) }, \
         { "curr_rx_bps", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_rx_bps) }, \
         { "curr_rx_packet_loss_perc", NULL, MAVLINK_TYPE_INT16_T, 0, 44, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_rx_packet_loss_perc) }, \
         { "count_tx_inj_error_hint", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, count_tx_inj_error_hint) }, \
         { "count_tx_dropped_packets", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, count_tx_dropped_packets) }, \
         { "curr_tx_card_idx", NULL, MAVLINK_TYPE_UINT8_T, 0, 46, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_tx_card_idx) }, \
         { "curr_tx_mcs_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 47, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_tx_mcs_index) }, \
         { "dummy0", NULL, MAVLINK_TYPE_INT8_T, 0, 48, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT32_T, 0, 32, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 36, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, dummy2) }, \
         { "dummy3", NULL, MAVLINK_TYPE_UINT64_T, 0, 16, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, dummy3) }, \
         } \
}
#endif

/**
 * @brief Pack a openhd_stats_monitor_mode_wifi_link message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param curr_tx_pps  tx packets per second
 * @param curr_rx_pps  rx packets per second
 * @param curr_tx_bps  tx bits per second
 * @param curr_rx_bps  rx bits per second
 * @param curr_rx_packet_loss_perc  curr_rx_packet_loss
 * @param count_tx_inj_error_hint  count_tx_inj_error_hint
 * @param count_tx_dropped_packets  count_tx_dropped_packets
 * @param curr_tx_card_idx  curr_tx_card_idx
 * @param curr_tx_mcs_index  curr tx mcs index used when injecting packets
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 * @param dummy3  for future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t curr_tx_pps, int16_t curr_rx_pps, int32_t curr_tx_bps, int32_t curr_rx_bps, int16_t curr_rx_packet_loss_perc, uint64_t count_tx_inj_error_hint, uint64_t count_tx_dropped_packets, uint8_t curr_tx_card_idx, uint8_t curr_tx_mcs_index, int8_t dummy0, int32_t dummy1, int32_t dummy2, uint64_t dummy3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN];
    _mav_put_uint64_t(buf, 0, count_tx_inj_error_hint);
    _mav_put_uint64_t(buf, 8, count_tx_dropped_packets);
    _mav_put_uint64_t(buf, 16, dummy3);
    _mav_put_int32_t(buf, 24, curr_tx_bps);
    _mav_put_int32_t(buf, 28, curr_rx_bps);
    _mav_put_int32_t(buf, 32, dummy1);
    _mav_put_int32_t(buf, 36, dummy2);
    _mav_put_int16_t(buf, 40, curr_tx_pps);
    _mav_put_int16_t(buf, 42, curr_rx_pps);
    _mav_put_int16_t(buf, 44, curr_rx_packet_loss_perc);
    _mav_put_uint8_t(buf, 46, curr_tx_card_idx);
    _mav_put_uint8_t(buf, 47, curr_tx_mcs_index);
    _mav_put_int8_t(buf, 48, dummy0);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN);
#else
    mavlink_openhd_stats_monitor_mode_wifi_link_t packet;
    packet.count_tx_inj_error_hint = count_tx_inj_error_hint;
    packet.count_tx_dropped_packets = count_tx_dropped_packets;
    packet.dummy3 = dummy3;
    packet.curr_tx_bps = curr_tx_bps;
    packet.curr_rx_bps = curr_rx_bps;
    packet.dummy1 = dummy1;
    packet.dummy2 = dummy2;
    packet.curr_tx_pps = curr_tx_pps;
    packet.curr_rx_pps = curr_rx_pps;
    packet.curr_rx_packet_loss_perc = curr_rx_packet_loss_perc;
    packet.curr_tx_card_idx = curr_tx_card_idx;
    packet.curr_tx_mcs_index = curr_tx_mcs_index;
    packet.dummy0 = dummy0;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_CRC);
}

/**
 * @brief Pack a openhd_stats_monitor_mode_wifi_link message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param curr_tx_pps  tx packets per second
 * @param curr_rx_pps  rx packets per second
 * @param curr_tx_bps  tx bits per second
 * @param curr_rx_bps  rx bits per second
 * @param curr_rx_packet_loss_perc  curr_rx_packet_loss
 * @param count_tx_inj_error_hint  count_tx_inj_error_hint
 * @param count_tx_dropped_packets  count_tx_dropped_packets
 * @param curr_tx_card_idx  curr_tx_card_idx
 * @param curr_tx_mcs_index  curr tx mcs index used when injecting packets
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 * @param dummy3  for future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t curr_tx_pps,int16_t curr_rx_pps,int32_t curr_tx_bps,int32_t curr_rx_bps,int16_t curr_rx_packet_loss_perc,uint64_t count_tx_inj_error_hint,uint64_t count_tx_dropped_packets,uint8_t curr_tx_card_idx,uint8_t curr_tx_mcs_index,int8_t dummy0,int32_t dummy1,int32_t dummy2,uint64_t dummy3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN];
    _mav_put_uint64_t(buf, 0, count_tx_inj_error_hint);
    _mav_put_uint64_t(buf, 8, count_tx_dropped_packets);
    _mav_put_uint64_t(buf, 16, dummy3);
    _mav_put_int32_t(buf, 24, curr_tx_bps);
    _mav_put_int32_t(buf, 28, curr_rx_bps);
    _mav_put_int32_t(buf, 32, dummy1);
    _mav_put_int32_t(buf, 36, dummy2);
    _mav_put_int16_t(buf, 40, curr_tx_pps);
    _mav_put_int16_t(buf, 42, curr_rx_pps);
    _mav_put_int16_t(buf, 44, curr_rx_packet_loss_perc);
    _mav_put_uint8_t(buf, 46, curr_tx_card_idx);
    _mav_put_uint8_t(buf, 47, curr_tx_mcs_index);
    _mav_put_int8_t(buf, 48, dummy0);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN);
#else
    mavlink_openhd_stats_monitor_mode_wifi_link_t packet;
    packet.count_tx_inj_error_hint = count_tx_inj_error_hint;
    packet.count_tx_dropped_packets = count_tx_dropped_packets;
    packet.dummy3 = dummy3;
    packet.curr_tx_bps = curr_tx_bps;
    packet.curr_rx_bps = curr_rx_bps;
    packet.dummy1 = dummy1;
    packet.dummy2 = dummy2;
    packet.curr_tx_pps = curr_tx_pps;
    packet.curr_rx_pps = curr_rx_pps;
    packet.curr_rx_packet_loss_perc = curr_rx_packet_loss_perc;
    packet.curr_tx_card_idx = curr_tx_card_idx;
    packet.curr_tx_mcs_index = curr_tx_mcs_index;
    packet.dummy0 = dummy0;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_CRC);
}

/**
 * @brief Encode a openhd_stats_monitor_mode_wifi_link struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param openhd_stats_monitor_mode_wifi_link C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_openhd_stats_monitor_mode_wifi_link_t* openhd_stats_monitor_mode_wifi_link)
{
    return mavlink_msg_openhd_stats_monitor_mode_wifi_link_pack(system_id, component_id, msg, openhd_stats_monitor_mode_wifi_link->curr_tx_pps, openhd_stats_monitor_mode_wifi_link->curr_rx_pps, openhd_stats_monitor_mode_wifi_link->curr_tx_bps, openhd_stats_monitor_mode_wifi_link->curr_rx_bps, openhd_stats_monitor_mode_wifi_link->curr_rx_packet_loss_perc, openhd_stats_monitor_mode_wifi_link->count_tx_inj_error_hint, openhd_stats_monitor_mode_wifi_link->count_tx_dropped_packets, openhd_stats_monitor_mode_wifi_link->curr_tx_card_idx, openhd_stats_monitor_mode_wifi_link->curr_tx_mcs_index, openhd_stats_monitor_mode_wifi_link->dummy0, openhd_stats_monitor_mode_wifi_link->dummy1, openhd_stats_monitor_mode_wifi_link->dummy2, openhd_stats_monitor_mode_wifi_link->dummy3);
}

/**
 * @brief Encode a openhd_stats_monitor_mode_wifi_link struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param openhd_stats_monitor_mode_wifi_link C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_openhd_stats_monitor_mode_wifi_link_t* openhd_stats_monitor_mode_wifi_link)
{
    return mavlink_msg_openhd_stats_monitor_mode_wifi_link_pack_chan(system_id, component_id, chan, msg, openhd_stats_monitor_mode_wifi_link->curr_tx_pps, openhd_stats_monitor_mode_wifi_link->curr_rx_pps, openhd_stats_monitor_mode_wifi_link->curr_tx_bps, openhd_stats_monitor_mode_wifi_link->curr_rx_bps, openhd_stats_monitor_mode_wifi_link->curr_rx_packet_loss_perc, openhd_stats_monitor_mode_wifi_link->count_tx_inj_error_hint, openhd_stats_monitor_mode_wifi_link->count_tx_dropped_packets, openhd_stats_monitor_mode_wifi_link->curr_tx_card_idx, openhd_stats_monitor_mode_wifi_link->curr_tx_mcs_index, openhd_stats_monitor_mode_wifi_link->dummy0, openhd_stats_monitor_mode_wifi_link->dummy1, openhd_stats_monitor_mode_wifi_link->dummy2, openhd_stats_monitor_mode_wifi_link->dummy3);
}

/**
 * @brief Send a openhd_stats_monitor_mode_wifi_link message
 * @param chan MAVLink channel to send the message
 *
 * @param curr_tx_pps  tx packets per second
 * @param curr_rx_pps  rx packets per second
 * @param curr_tx_bps  tx bits per second
 * @param curr_rx_bps  rx bits per second
 * @param curr_rx_packet_loss_perc  curr_rx_packet_loss
 * @param count_tx_inj_error_hint  count_tx_inj_error_hint
 * @param count_tx_dropped_packets  count_tx_dropped_packets
 * @param curr_tx_card_idx  curr_tx_card_idx
 * @param curr_tx_mcs_index  curr tx mcs index used when injecting packets
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 * @param dummy3  for future use
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_openhd_stats_monitor_mode_wifi_link_send(mavlink_channel_t chan, int16_t curr_tx_pps, int16_t curr_rx_pps, int32_t curr_tx_bps, int32_t curr_rx_bps, int16_t curr_rx_packet_loss_perc, uint64_t count_tx_inj_error_hint, uint64_t count_tx_dropped_packets, uint8_t curr_tx_card_idx, uint8_t curr_tx_mcs_index, int8_t dummy0, int32_t dummy1, int32_t dummy2, uint64_t dummy3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN];
    _mav_put_uint64_t(buf, 0, count_tx_inj_error_hint);
    _mav_put_uint64_t(buf, 8, count_tx_dropped_packets);
    _mav_put_uint64_t(buf, 16, dummy3);
    _mav_put_int32_t(buf, 24, curr_tx_bps);
    _mav_put_int32_t(buf, 28, curr_rx_bps);
    _mav_put_int32_t(buf, 32, dummy1);
    _mav_put_int32_t(buf, 36, dummy2);
    _mav_put_int16_t(buf, 40, curr_tx_pps);
    _mav_put_int16_t(buf, 42, curr_rx_pps);
    _mav_put_int16_t(buf, 44, curr_rx_packet_loss_perc);
    _mav_put_uint8_t(buf, 46, curr_tx_card_idx);
    _mav_put_uint8_t(buf, 47, curr_tx_mcs_index);
    _mav_put_int8_t(buf, 48, dummy0);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK, buf, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_CRC);
#else
    mavlink_openhd_stats_monitor_mode_wifi_link_t packet;
    packet.count_tx_inj_error_hint = count_tx_inj_error_hint;
    packet.count_tx_dropped_packets = count_tx_dropped_packets;
    packet.dummy3 = dummy3;
    packet.curr_tx_bps = curr_tx_bps;
    packet.curr_rx_bps = curr_rx_bps;
    packet.dummy1 = dummy1;
    packet.dummy2 = dummy2;
    packet.curr_tx_pps = curr_tx_pps;
    packet.curr_rx_pps = curr_rx_pps;
    packet.curr_rx_packet_loss_perc = curr_rx_packet_loss_perc;
    packet.curr_tx_card_idx = curr_tx_card_idx;
    packet.curr_tx_mcs_index = curr_tx_mcs_index;
    packet.dummy0 = dummy0;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK, (const char *)&packet, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_CRC);
#endif
}

/**
 * @brief Send a openhd_stats_monitor_mode_wifi_link message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_openhd_stats_monitor_mode_wifi_link_send_struct(mavlink_channel_t chan, const mavlink_openhd_stats_monitor_mode_wifi_link_t* openhd_stats_monitor_mode_wifi_link)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_stats_monitor_mode_wifi_link_send(chan, openhd_stats_monitor_mode_wifi_link->curr_tx_pps, openhd_stats_monitor_mode_wifi_link->curr_rx_pps, openhd_stats_monitor_mode_wifi_link->curr_tx_bps, openhd_stats_monitor_mode_wifi_link->curr_rx_bps, openhd_stats_monitor_mode_wifi_link->curr_rx_packet_loss_perc, openhd_stats_monitor_mode_wifi_link->count_tx_inj_error_hint, openhd_stats_monitor_mode_wifi_link->count_tx_dropped_packets, openhd_stats_monitor_mode_wifi_link->curr_tx_card_idx, openhd_stats_monitor_mode_wifi_link->curr_tx_mcs_index, openhd_stats_monitor_mode_wifi_link->dummy0, openhd_stats_monitor_mode_wifi_link->dummy1, openhd_stats_monitor_mode_wifi_link->dummy2, openhd_stats_monitor_mode_wifi_link->dummy3);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK, (const char *)openhd_stats_monitor_mode_wifi_link, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_openhd_stats_monitor_mode_wifi_link_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t curr_tx_pps, int16_t curr_rx_pps, int32_t curr_tx_bps, int32_t curr_rx_bps, int16_t curr_rx_packet_loss_perc, uint64_t count_tx_inj_error_hint, uint64_t count_tx_dropped_packets, uint8_t curr_tx_card_idx, uint8_t curr_tx_mcs_index, int8_t dummy0, int32_t dummy1, int32_t dummy2, uint64_t dummy3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, count_tx_inj_error_hint);
    _mav_put_uint64_t(buf, 8, count_tx_dropped_packets);
    _mav_put_uint64_t(buf, 16, dummy3);
    _mav_put_int32_t(buf, 24, curr_tx_bps);
    _mav_put_int32_t(buf, 28, curr_rx_bps);
    _mav_put_int32_t(buf, 32, dummy1);
    _mav_put_int32_t(buf, 36, dummy2);
    _mav_put_int16_t(buf, 40, curr_tx_pps);
    _mav_put_int16_t(buf, 42, curr_rx_pps);
    _mav_put_int16_t(buf, 44, curr_rx_packet_loss_perc);
    _mav_put_uint8_t(buf, 46, curr_tx_card_idx);
    _mav_put_uint8_t(buf, 47, curr_tx_mcs_index);
    _mav_put_int8_t(buf, 48, dummy0);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK, buf, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_CRC);
#else
    mavlink_openhd_stats_monitor_mode_wifi_link_t *packet = (mavlink_openhd_stats_monitor_mode_wifi_link_t *)msgbuf;
    packet->count_tx_inj_error_hint = count_tx_inj_error_hint;
    packet->count_tx_dropped_packets = count_tx_dropped_packets;
    packet->dummy3 = dummy3;
    packet->curr_tx_bps = curr_tx_bps;
    packet->curr_rx_bps = curr_rx_bps;
    packet->dummy1 = dummy1;
    packet->dummy2 = dummy2;
    packet->curr_tx_pps = curr_tx_pps;
    packet->curr_rx_pps = curr_rx_pps;
    packet->curr_rx_packet_loss_perc = curr_rx_packet_loss_perc;
    packet->curr_tx_card_idx = curr_tx_card_idx;
    packet->curr_tx_mcs_index = curr_tx_mcs_index;
    packet->dummy0 = dummy0;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK, (const char *)packet, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_CRC);
#endif
}
#endif

#endif

// MESSAGE OPENHD_STATS_MONITOR_MODE_WIFI_LINK UNPACKING


/**
 * @brief Get field curr_tx_pps from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  tx packets per second
 */
static inline int16_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_tx_pps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  40);
}

/**
 * @brief Get field curr_rx_pps from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  rx packets per second
 */
static inline int16_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_rx_pps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  42);
}

/**
 * @brief Get field curr_tx_bps from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  tx bits per second
 */
static inline int32_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_tx_bps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  24);
}

/**
 * @brief Get field curr_rx_bps from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  rx bits per second
 */
static inline int32_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_rx_bps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  28);
}

/**
 * @brief Get field curr_rx_packet_loss_perc from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  curr_rx_packet_loss
 */
static inline int16_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_rx_packet_loss_perc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  44);
}

/**
 * @brief Get field count_tx_inj_error_hint from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  count_tx_inj_error_hint
 */
static inline uint64_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_count_tx_inj_error_hint(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field count_tx_dropped_packets from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  count_tx_dropped_packets
 */
static inline uint64_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_count_tx_dropped_packets(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field curr_tx_card_idx from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  curr_tx_card_idx
 */
static inline uint8_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_tx_card_idx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  46);
}

/**
 * @brief Get field curr_tx_mcs_index from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  curr tx mcs index used when injecting packets
 */
static inline uint8_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_tx_mcs_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  47);
}

/**
 * @brief Get field dummy0 from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  for future use
 */
static inline int8_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_dummy0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  48);
}

/**
 * @brief Get field dummy1 from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  for future use
 */
static inline int32_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_dummy1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  32);
}

/**
 * @brief Get field dummy2 from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  for future use
 */
static inline int32_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_dummy2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  36);
}

/**
 * @brief Get field dummy3 from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  for future use
 */
static inline uint64_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_dummy3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  16);
}

/**
 * @brief Decode a openhd_stats_monitor_mode_wifi_link message into a struct
 *
 * @param msg The message to decode
 * @param openhd_stats_monitor_mode_wifi_link C-struct to decode the message contents into
 */
static inline void mavlink_msg_openhd_stats_monitor_mode_wifi_link_decode(const mavlink_message_t* msg, mavlink_openhd_stats_monitor_mode_wifi_link_t* openhd_stats_monitor_mode_wifi_link)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    openhd_stats_monitor_mode_wifi_link->count_tx_inj_error_hint = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_count_tx_inj_error_hint(msg);
    openhd_stats_monitor_mode_wifi_link->count_tx_dropped_packets = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_count_tx_dropped_packets(msg);
    openhd_stats_monitor_mode_wifi_link->dummy3 = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_dummy3(msg);
    openhd_stats_monitor_mode_wifi_link->curr_tx_bps = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_tx_bps(msg);
    openhd_stats_monitor_mode_wifi_link->curr_rx_bps = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_rx_bps(msg);
    openhd_stats_monitor_mode_wifi_link->dummy1 = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_dummy1(msg);
    openhd_stats_monitor_mode_wifi_link->dummy2 = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_dummy2(msg);
    openhd_stats_monitor_mode_wifi_link->curr_tx_pps = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_tx_pps(msg);
    openhd_stats_monitor_mode_wifi_link->curr_rx_pps = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_rx_pps(msg);
    openhd_stats_monitor_mode_wifi_link->curr_rx_packet_loss_perc = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_rx_packet_loss_perc(msg);
    openhd_stats_monitor_mode_wifi_link->curr_tx_card_idx = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_tx_card_idx(msg);
    openhd_stats_monitor_mode_wifi_link->curr_tx_mcs_index = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_tx_mcs_index(msg);
    openhd_stats_monitor_mode_wifi_link->dummy0 = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_dummy0(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN? msg->len : MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN;
        memset(openhd_stats_monitor_mode_wifi_link, 0, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN);
    memcpy(openhd_stats_monitor_mode_wifi_link, _MAV_PAYLOAD(msg), len);
#endif
}
