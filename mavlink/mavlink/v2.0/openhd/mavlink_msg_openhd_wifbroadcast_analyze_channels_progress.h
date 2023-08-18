#pragma once
// MESSAGE OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS PACKING

#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS 1224


typedef struct __mavlink_openhd_wifbroadcast_analyze_channels_progress_t {
 int32_t dummy1; /*<  future use*/
 int32_t dummy2; /*<  future use*/
 uint16_t channel_mhz; /*<  Scanned channel*/
 uint16_t foreign_packets; /*<  foreign packets*/
 uint16_t dummy0; /*<  future use*/
 uint8_t progress; /*<  progress [0..100]*/
 uint8_t channel_width_mhz; /*<  channel width mhz*/
} mavlink_openhd_wifbroadcast_analyze_channels_progress_t;

#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_LEN 16
#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_MIN_LEN 16
#define MAVLINK_MSG_ID_1224_LEN 16
#define MAVLINK_MSG_ID_1224_MIN_LEN 16

#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_CRC 148
#define MAVLINK_MSG_ID_1224_CRC 148



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS { \
    1224, \
    "OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS", \
    7, \
    {  { "progress", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_progress_t, progress) }, \
         { "channel_mhz", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_progress_t, channel_mhz) }, \
         { "channel_width_mhz", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_progress_t, channel_width_mhz) }, \
         { "foreign_packets", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_progress_t, foreign_packets) }, \
         { "dummy0", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_progress_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_progress_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_progress_t, dummy2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS { \
    "OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS", \
    7, \
    {  { "progress", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_progress_t, progress) }, \
         { "channel_mhz", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_progress_t, channel_mhz) }, \
         { "channel_width_mhz", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_progress_t, channel_width_mhz) }, \
         { "foreign_packets", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_progress_t, foreign_packets) }, \
         { "dummy0", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_progress_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_progress_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_openhd_wifbroadcast_analyze_channels_progress_t, dummy2) }, \
         } \
}
#endif

/**
 * @brief Pack a openhd_wifbroadcast_analyze_channels_progress message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param progress  progress [0..100]
 * @param channel_mhz  Scanned channel
 * @param channel_width_mhz  channel width mhz
 * @param foreign_packets  foreign packets
 * @param dummy0  future use
 * @param dummy1  future use
 * @param dummy2  future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t progress, uint16_t channel_mhz, uint8_t channel_width_mhz, uint16_t foreign_packets, uint16_t dummy0, int32_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_LEN];
    _mav_put_int32_t(buf, 0, dummy1);
    _mav_put_int32_t(buf, 4, dummy2);
    _mav_put_uint16_t(buf, 8, channel_mhz);
    _mav_put_uint16_t(buf, 10, foreign_packets);
    _mav_put_uint16_t(buf, 12, dummy0);
    _mav_put_uint8_t(buf, 14, progress);
    _mav_put_uint8_t(buf, 15, channel_width_mhz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_LEN);
#else
    mavlink_openhd_wifbroadcast_analyze_channels_progress_t packet;
    packet.dummy1 = dummy1;
    packet.dummy2 = dummy2;
    packet.channel_mhz = channel_mhz;
    packet.foreign_packets = foreign_packets;
    packet.dummy0 = dummy0;
    packet.progress = progress;
    packet.channel_width_mhz = channel_width_mhz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_CRC);
}

/**
 * @brief Pack a openhd_wifbroadcast_analyze_channels_progress message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param progress  progress [0..100]
 * @param channel_mhz  Scanned channel
 * @param channel_width_mhz  channel width mhz
 * @param foreign_packets  foreign packets
 * @param dummy0  future use
 * @param dummy1  future use
 * @param dummy2  future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t progress,uint16_t channel_mhz,uint8_t channel_width_mhz,uint16_t foreign_packets,uint16_t dummy0,int32_t dummy1,int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_LEN];
    _mav_put_int32_t(buf, 0, dummy1);
    _mav_put_int32_t(buf, 4, dummy2);
    _mav_put_uint16_t(buf, 8, channel_mhz);
    _mav_put_uint16_t(buf, 10, foreign_packets);
    _mav_put_uint16_t(buf, 12, dummy0);
    _mav_put_uint8_t(buf, 14, progress);
    _mav_put_uint8_t(buf, 15, channel_width_mhz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_LEN);
#else
    mavlink_openhd_wifbroadcast_analyze_channels_progress_t packet;
    packet.dummy1 = dummy1;
    packet.dummy2 = dummy2;
    packet.channel_mhz = channel_mhz;
    packet.foreign_packets = foreign_packets;
    packet.dummy0 = dummy0;
    packet.progress = progress;
    packet.channel_width_mhz = channel_width_mhz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_CRC);
}

/**
 * @brief Encode a openhd_wifbroadcast_analyze_channels_progress struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param openhd_wifbroadcast_analyze_channels_progress C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_openhd_wifbroadcast_analyze_channels_progress_t* openhd_wifbroadcast_analyze_channels_progress)
{
    return mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_pack(system_id, component_id, msg, openhd_wifbroadcast_analyze_channels_progress->progress, openhd_wifbroadcast_analyze_channels_progress->channel_mhz, openhd_wifbroadcast_analyze_channels_progress->channel_width_mhz, openhd_wifbroadcast_analyze_channels_progress->foreign_packets, openhd_wifbroadcast_analyze_channels_progress->dummy0, openhd_wifbroadcast_analyze_channels_progress->dummy1, openhd_wifbroadcast_analyze_channels_progress->dummy2);
}

/**
 * @brief Encode a openhd_wifbroadcast_analyze_channels_progress struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param openhd_wifbroadcast_analyze_channels_progress C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_openhd_wifbroadcast_analyze_channels_progress_t* openhd_wifbroadcast_analyze_channels_progress)
{
    return mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_pack_chan(system_id, component_id, chan, msg, openhd_wifbroadcast_analyze_channels_progress->progress, openhd_wifbroadcast_analyze_channels_progress->channel_mhz, openhd_wifbroadcast_analyze_channels_progress->channel_width_mhz, openhd_wifbroadcast_analyze_channels_progress->foreign_packets, openhd_wifbroadcast_analyze_channels_progress->dummy0, openhd_wifbroadcast_analyze_channels_progress->dummy1, openhd_wifbroadcast_analyze_channels_progress->dummy2);
}

/**
 * @brief Send a openhd_wifbroadcast_analyze_channels_progress message
 * @param chan MAVLink channel to send the message
 *
 * @param progress  progress [0..100]
 * @param channel_mhz  Scanned channel
 * @param channel_width_mhz  channel width mhz
 * @param foreign_packets  foreign packets
 * @param dummy0  future use
 * @param dummy1  future use
 * @param dummy2  future use
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_send(mavlink_channel_t chan, uint8_t progress, uint16_t channel_mhz, uint8_t channel_width_mhz, uint16_t foreign_packets, uint16_t dummy0, int32_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_LEN];
    _mav_put_int32_t(buf, 0, dummy1);
    _mav_put_int32_t(buf, 4, dummy2);
    _mav_put_uint16_t(buf, 8, channel_mhz);
    _mav_put_uint16_t(buf, 10, foreign_packets);
    _mav_put_uint16_t(buf, 12, dummy0);
    _mav_put_uint8_t(buf, 14, progress);
    _mav_put_uint8_t(buf, 15, channel_width_mhz);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS, buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_CRC);
#else
    mavlink_openhd_wifbroadcast_analyze_channels_progress_t packet;
    packet.dummy1 = dummy1;
    packet.dummy2 = dummy2;
    packet.channel_mhz = channel_mhz;
    packet.foreign_packets = foreign_packets;
    packet.dummy0 = dummy0;
    packet.progress = progress;
    packet.channel_width_mhz = channel_width_mhz;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS, (const char *)&packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_CRC);
#endif
}

/**
 * @brief Send a openhd_wifbroadcast_analyze_channels_progress message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_send_struct(mavlink_channel_t chan, const mavlink_openhd_wifbroadcast_analyze_channels_progress_t* openhd_wifbroadcast_analyze_channels_progress)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_send(chan, openhd_wifbroadcast_analyze_channels_progress->progress, openhd_wifbroadcast_analyze_channels_progress->channel_mhz, openhd_wifbroadcast_analyze_channels_progress->channel_width_mhz, openhd_wifbroadcast_analyze_channels_progress->foreign_packets, openhd_wifbroadcast_analyze_channels_progress->dummy0, openhd_wifbroadcast_analyze_channels_progress->dummy1, openhd_wifbroadcast_analyze_channels_progress->dummy2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS, (const char *)openhd_wifbroadcast_analyze_channels_progress, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t progress, uint16_t channel_mhz, uint8_t channel_width_mhz, uint16_t foreign_packets, uint16_t dummy0, int32_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, dummy1);
    _mav_put_int32_t(buf, 4, dummy2);
    _mav_put_uint16_t(buf, 8, channel_mhz);
    _mav_put_uint16_t(buf, 10, foreign_packets);
    _mav_put_uint16_t(buf, 12, dummy0);
    _mav_put_uint8_t(buf, 14, progress);
    _mav_put_uint8_t(buf, 15, channel_width_mhz);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS, buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_CRC);
#else
    mavlink_openhd_wifbroadcast_analyze_channels_progress_t *packet = (mavlink_openhd_wifbroadcast_analyze_channels_progress_t *)msgbuf;
    packet->dummy1 = dummy1;
    packet->dummy2 = dummy2;
    packet->channel_mhz = channel_mhz;
    packet->foreign_packets = foreign_packets;
    packet->dummy0 = dummy0;
    packet->progress = progress;
    packet->channel_width_mhz = channel_width_mhz;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS, (const char *)packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_CRC);
#endif
}
#endif

#endif

// MESSAGE OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS UNPACKING


/**
 * @brief Get field progress from openhd_wifbroadcast_analyze_channels_progress message
 *
 * @return  progress [0..100]
 */
static inline uint8_t mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_get_progress(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field channel_mhz from openhd_wifbroadcast_analyze_channels_progress message
 *
 * @return  Scanned channel
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_get_channel_mhz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field channel_width_mhz from openhd_wifbroadcast_analyze_channels_progress message
 *
 * @return  channel width mhz
 */
static inline uint8_t mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_get_channel_width_mhz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  15);
}

/**
 * @brief Get field foreign_packets from openhd_wifbroadcast_analyze_channels_progress message
 *
 * @return  foreign packets
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_get_foreign_packets(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field dummy0 from openhd_wifbroadcast_analyze_channels_progress message
 *
 * @return  future use
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_get_dummy0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field dummy1 from openhd_wifbroadcast_analyze_channels_progress message
 *
 * @return  future use
 */
static inline int32_t mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_get_dummy1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field dummy2 from openhd_wifbroadcast_analyze_channels_progress message
 *
 * @return  future use
 */
static inline int32_t mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_get_dummy2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Decode a openhd_wifbroadcast_analyze_channels_progress message into a struct
 *
 * @param msg The message to decode
 * @param openhd_wifbroadcast_analyze_channels_progress C-struct to decode the message contents into
 */
static inline void mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_decode(const mavlink_message_t* msg, mavlink_openhd_wifbroadcast_analyze_channels_progress_t* openhd_wifbroadcast_analyze_channels_progress)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    openhd_wifbroadcast_analyze_channels_progress->dummy1 = mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_get_dummy1(msg);
    openhd_wifbroadcast_analyze_channels_progress->dummy2 = mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_get_dummy2(msg);
    openhd_wifbroadcast_analyze_channels_progress->channel_mhz = mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_get_channel_mhz(msg);
    openhd_wifbroadcast_analyze_channels_progress->foreign_packets = mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_get_foreign_packets(msg);
    openhd_wifbroadcast_analyze_channels_progress->dummy0 = mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_get_dummy0(msg);
    openhd_wifbroadcast_analyze_channels_progress->progress = mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_get_progress(msg);
    openhd_wifbroadcast_analyze_channels_progress->channel_width_mhz = mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_get_channel_width_mhz(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_LEN? msg->len : MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_LEN;
        memset(openhd_wifbroadcast_analyze_channels_progress, 0, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_LEN);
    memcpy(openhd_wifbroadcast_analyze_channels_progress, _MAV_PAYLOAD(msg), len);
#endif
}
