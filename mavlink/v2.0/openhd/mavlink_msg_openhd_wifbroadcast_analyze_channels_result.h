#pragma once
// MESSAGE OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT PACKING

#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT 1223


typedef struct __mavlink_openhd_wifbroadcast_analyze_channels_result_t {
 int32_t dummy1; /*<  future use*/
 int32_t dummy2; /*<  future use*/
 uint16_t channels_mhz[30]; /*<  List of already scanned channels,set to 0 if not yet scanned.*/
 uint16_t foreign_packets[30]; /*<  for each already scanned channel,the n of foreign packets received.*/
 uint16_t dummy[30]; /*<  future use*/
 uint16_t dummy0; /*<  future use*/
} mavlink_openhd_wifbroadcast_analyze_channels_result_t;

#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_LEN 190
#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_MIN_LEN 190
#define MAVLINK_MSG_ID_1223_LEN 190
#define MAVLINK_MSG_ID_1223_MIN_LEN 190

#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_CRC 158
#define MAVLINK_MSG_ID_1223_CRC 158

#define MAVLINK_MSG_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_FIELD_CHANNELS_MHZ_LEN 30
#define MAVLINK_MSG_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_FIELD_FOREIGN_PACKETS_LEN 30
#define MAVLINK_MSG_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_FIELD_DUMMY_LEN 30

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT { \
    1223, \
    "OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT", \
    6, \
    {  { "channels_mhz", NULL, MAVLINK_TYPE_UINT16_T, 30, 8, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_result_t, channels_mhz) }, \
         { "foreign_packets", NULL, MAVLINK_TYPE_UINT16_T, 30, 68, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_result_t, foreign_packets) }, \
         { "dummy", NULL, MAVLINK_TYPE_UINT16_T, 30, 128, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_result_t, dummy) }, \
         { "dummy0", NULL, MAVLINK_TYPE_UINT16_T, 0, 188, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_result_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_result_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_result_t, dummy2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT { \
    "OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT", \
    6, \
    {  { "channels_mhz", NULL, MAVLINK_TYPE_UINT16_T, 30, 8, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_result_t, channels_mhz) }, \
         { "foreign_packets", NULL, MAVLINK_TYPE_UINT16_T, 30, 68, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_result_t, foreign_packets) }, \
         { "dummy", NULL, MAVLINK_TYPE_UINT16_T, 30, 128, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_result_t, dummy) }, \
         { "dummy0", NULL, MAVLINK_TYPE_UINT16_T, 0, 188, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_result_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_result_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_result_t, dummy2) }, \
         } \
}
#endif

/**
 * @brief Pack a openhd_wifbroadcast_analyze_channels_result message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param channels_mhz  List of already scanned channels,set to 0 if not yet scanned.
 * @param foreign_packets  for each already scanned channel,the n of foreign packets received.
 * @param dummy  future use
 * @param dummy0  future use
 * @param dummy1  future use
 * @param dummy2  future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_analyze_channels_result_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const uint16_t *channels_mhz, const uint16_t *foreign_packets, const uint16_t *dummy, uint16_t dummy0, int32_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_LEN];
    _mav_put_int32_t(buf, 0, dummy1);
    _mav_put_int32_t(buf, 4, dummy2);
    _mav_put_uint16_t(buf, 188, dummy0);
    _mav_put_uint16_t_array(buf, 8, channels_mhz, 30);
    _mav_put_uint16_t_array(buf, 68, foreign_packets, 30);
    _mav_put_uint16_t_array(buf, 128, dummy, 30);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_LEN);
#else
    mavlink_openhd_wifbroadcast_analyze_channels_result_t packet;
    packet.dummy1 = dummy1;
    packet.dummy2 = dummy2;
    packet.dummy0 = dummy0;
    mav_array_memcpy(packet.channels_mhz, channels_mhz, sizeof(uint16_t)*30);
    mav_array_memcpy(packet.foreign_packets, foreign_packets, sizeof(uint16_t)*30);
    mav_array_memcpy(packet.dummy, dummy, sizeof(uint16_t)*30);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_CRC);
}

/**
 * @brief Pack a openhd_wifbroadcast_analyze_channels_result message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param channels_mhz  List of already scanned channels,set to 0 if not yet scanned.
 * @param foreign_packets  for each already scanned channel,the n of foreign packets received.
 * @param dummy  future use
 * @param dummy0  future use
 * @param dummy1  future use
 * @param dummy2  future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_analyze_channels_result_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const uint16_t *channels_mhz,const uint16_t *foreign_packets,const uint16_t *dummy,uint16_t dummy0,int32_t dummy1,int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_LEN];
    _mav_put_int32_t(buf, 0, dummy1);
    _mav_put_int32_t(buf, 4, dummy2);
    _mav_put_uint16_t(buf, 188, dummy0);
    _mav_put_uint16_t_array(buf, 8, channels_mhz, 30);
    _mav_put_uint16_t_array(buf, 68, foreign_packets, 30);
    _mav_put_uint16_t_array(buf, 128, dummy, 30);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_LEN);
#else
    mavlink_openhd_wifbroadcast_analyze_channels_result_t packet;
    packet.dummy1 = dummy1;
    packet.dummy2 = dummy2;
    packet.dummy0 = dummy0;
    mav_array_memcpy(packet.channels_mhz, channels_mhz, sizeof(uint16_t)*30);
    mav_array_memcpy(packet.foreign_packets, foreign_packets, sizeof(uint16_t)*30);
    mav_array_memcpy(packet.dummy, dummy, sizeof(uint16_t)*30);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_CRC);
}

/**
 * @brief Encode a openhd_wifbroadcast_analyze_channels_result struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param openhd_wifbroadcast_analyze_channels_result C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_analyze_channels_result_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_openhd_wifbroadcast_analyze_channels_result_t* openhd_wifbroadcast_analyze_channels_result)
{
    return mavlink_msg_openhd_wifbroadcast_analyze_channels_result_pack(system_id, component_id, msg, openhd_wifbroadcast_analyze_channels_result->channels_mhz, openhd_wifbroadcast_analyze_channels_result->foreign_packets, openhd_wifbroadcast_analyze_channels_result->dummy, openhd_wifbroadcast_analyze_channels_result->dummy0, openhd_wifbroadcast_analyze_channels_result->dummy1, openhd_wifbroadcast_analyze_channels_result->dummy2);
}

/**
 * @brief Encode a openhd_wifbroadcast_analyze_channels_result struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param openhd_wifbroadcast_analyze_channels_result C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_analyze_channels_result_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_openhd_wifbroadcast_analyze_channels_result_t* openhd_wifbroadcast_analyze_channels_result)
{
    return mavlink_msg_openhd_wifbroadcast_analyze_channels_result_pack_chan(system_id, component_id, chan, msg, openhd_wifbroadcast_analyze_channels_result->channels_mhz, openhd_wifbroadcast_analyze_channels_result->foreign_packets, openhd_wifbroadcast_analyze_channels_result->dummy, openhd_wifbroadcast_analyze_channels_result->dummy0, openhd_wifbroadcast_analyze_channels_result->dummy1, openhd_wifbroadcast_analyze_channels_result->dummy2);
}

/**
 * @brief Send a openhd_wifbroadcast_analyze_channels_result message
 * @param chan MAVLink channel to send the message
 *
 * @param channels_mhz  List of already scanned channels,set to 0 if not yet scanned.
 * @param foreign_packets  for each already scanned channel,the n of foreign packets received.
 * @param dummy  future use
 * @param dummy0  future use
 * @param dummy1  future use
 * @param dummy2  future use
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_openhd_wifbroadcast_analyze_channels_result_send(mavlink_channel_t chan, const uint16_t *channels_mhz, const uint16_t *foreign_packets, const uint16_t *dummy, uint16_t dummy0, int32_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_LEN];
    _mav_put_int32_t(buf, 0, dummy1);
    _mav_put_int32_t(buf, 4, dummy2);
    _mav_put_uint16_t(buf, 188, dummy0);
    _mav_put_uint16_t_array(buf, 8, channels_mhz, 30);
    _mav_put_uint16_t_array(buf, 68, foreign_packets, 30);
    _mav_put_uint16_t_array(buf, 128, dummy, 30);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT, buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_CRC);
#else
    mavlink_openhd_wifbroadcast_analyze_channels_result_t packet;
    packet.dummy1 = dummy1;
    packet.dummy2 = dummy2;
    packet.dummy0 = dummy0;
    mav_array_memcpy(packet.channels_mhz, channels_mhz, sizeof(uint16_t)*30);
    mav_array_memcpy(packet.foreign_packets, foreign_packets, sizeof(uint16_t)*30);
    mav_array_memcpy(packet.dummy, dummy, sizeof(uint16_t)*30);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT, (const char *)&packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_CRC);
#endif
}

/**
 * @brief Send a openhd_wifbroadcast_analyze_channels_result message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_openhd_wifbroadcast_analyze_channels_result_send_struct(mavlink_channel_t chan, const mavlink_openhd_wifbroadcast_analyze_channels_result_t* openhd_wifbroadcast_analyze_channels_result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_wifbroadcast_analyze_channels_result_send(chan, openhd_wifbroadcast_analyze_channels_result->channels_mhz, openhd_wifbroadcast_analyze_channels_result->foreign_packets, openhd_wifbroadcast_analyze_channels_result->dummy, openhd_wifbroadcast_analyze_channels_result->dummy0, openhd_wifbroadcast_analyze_channels_result->dummy1, openhd_wifbroadcast_analyze_channels_result->dummy2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT, (const char *)openhd_wifbroadcast_analyze_channels_result, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_openhd_wifbroadcast_analyze_channels_result_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const uint16_t *channels_mhz, const uint16_t *foreign_packets, const uint16_t *dummy, uint16_t dummy0, int32_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, dummy1);
    _mav_put_int32_t(buf, 4, dummy2);
    _mav_put_uint16_t(buf, 188, dummy0);
    _mav_put_uint16_t_array(buf, 8, channels_mhz, 30);
    _mav_put_uint16_t_array(buf, 68, foreign_packets, 30);
    _mav_put_uint16_t_array(buf, 128, dummy, 30);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT, buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_CRC);
#else
    mavlink_openhd_wifbroadcast_analyze_channels_result_t *packet = (mavlink_openhd_wifbroadcast_analyze_channels_result_t *)msgbuf;
    packet->dummy1 = dummy1;
    packet->dummy2 = dummy2;
    packet->dummy0 = dummy0;
    mav_array_memcpy(packet->channels_mhz, channels_mhz, sizeof(uint16_t)*30);
    mav_array_memcpy(packet->foreign_packets, foreign_packets, sizeof(uint16_t)*30);
    mav_array_memcpy(packet->dummy, dummy, sizeof(uint16_t)*30);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT, (const char *)packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_CRC);
#endif
}
#endif

#endif

// MESSAGE OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT UNPACKING


/**
 * @brief Get field channels_mhz from openhd_wifbroadcast_analyze_channels_result message
 *
 * @return  List of already scanned channels,set to 0 if not yet scanned.
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_analyze_channels_result_get_channels_mhz(const mavlink_message_t* msg, uint16_t *channels_mhz)
{
    return _MAV_RETURN_uint16_t_array(msg, channels_mhz, 30,  8);
}

/**
 * @brief Get field foreign_packets from openhd_wifbroadcast_analyze_channels_result message
 *
 * @return  for each already scanned channel,the n of foreign packets received.
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_analyze_channels_result_get_foreign_packets(const mavlink_message_t* msg, uint16_t *foreign_packets)
{
    return _MAV_RETURN_uint16_t_array(msg, foreign_packets, 30,  68);
}

/**
 * @brief Get field dummy from openhd_wifbroadcast_analyze_channels_result message
 *
 * @return  future use
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_analyze_channels_result_get_dummy(const mavlink_message_t* msg, uint16_t *dummy)
{
    return _MAV_RETURN_uint16_t_array(msg, dummy, 30,  128);
}

/**
 * @brief Get field dummy0 from openhd_wifbroadcast_analyze_channels_result message
 *
 * @return  future use
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_analyze_channels_result_get_dummy0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  188);
}

/**
 * @brief Get field dummy1 from openhd_wifbroadcast_analyze_channels_result message
 *
 * @return  future use
 */
static inline int32_t mavlink_msg_openhd_wifbroadcast_analyze_channels_result_get_dummy1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field dummy2 from openhd_wifbroadcast_analyze_channels_result message
 *
 * @return  future use
 */
static inline int32_t mavlink_msg_openhd_wifbroadcast_analyze_channels_result_get_dummy2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Decode a openhd_wifbroadcast_analyze_channels_result message into a struct
 *
 * @param msg The message to decode
 * @param openhd_wifbroadcast_analyze_channels_result C-struct to decode the message contents into
 */
static inline void mavlink_msg_openhd_wifbroadcast_analyze_channels_result_decode(const mavlink_message_t* msg, mavlink_openhd_wifbroadcast_analyze_channels_result_t* openhd_wifbroadcast_analyze_channels_result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    openhd_wifbroadcast_analyze_channels_result->dummy1 = mavlink_msg_openhd_wifbroadcast_analyze_channels_result_get_dummy1(msg);
    openhd_wifbroadcast_analyze_channels_result->dummy2 = mavlink_msg_openhd_wifbroadcast_analyze_channels_result_get_dummy2(msg);
    mavlink_msg_openhd_wifbroadcast_analyze_channels_result_get_channels_mhz(msg, openhd_wifbroadcast_analyze_channels_result->channels_mhz);
    mavlink_msg_openhd_wifbroadcast_analyze_channels_result_get_foreign_packets(msg, openhd_wifbroadcast_analyze_channels_result->foreign_packets);
    mavlink_msg_openhd_wifbroadcast_analyze_channels_result_get_dummy(msg, openhd_wifbroadcast_analyze_channels_result->dummy);
    openhd_wifbroadcast_analyze_channels_result->dummy0 = mavlink_msg_openhd_wifbroadcast_analyze_channels_result_get_dummy0(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_LEN? msg->len : MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_LEN;
        memset(openhd_wifbroadcast_analyze_channels_result, 0, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_RESULT_LEN);
    memcpy(openhd_wifbroadcast_analyze_channels_result, _MAV_PAYLOAD(msg), len);
#endif
}
