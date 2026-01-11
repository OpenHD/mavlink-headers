#pragma once
// MESSAGE OPENHD_RTSP_CONFIGURATION PACKING

#define MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION 1230


typedef struct __mavlink_openhd_rtsp_configuration_t {
 char stream_uri[255]; /*<  RTSP Stream URI*/
} mavlink_openhd_rtsp_configuration_t;

#define MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_LEN 255
#define MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_MIN_LEN 255
#define MAVLINK_MSG_ID_1230_LEN 255
#define MAVLINK_MSG_ID_1230_MIN_LEN 255

#define MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_CRC 47
#define MAVLINK_MSG_ID_1230_CRC 47

#define MAVLINK_MSG_OPENHD_RTSP_CONFIGURATION_FIELD_STREAM_URI_LEN 255

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPENHD_RTSP_CONFIGURATION { \
    1230, \
    "OPENHD_RTSP_CONFIGURATION", \
    1, \
    {  { "stream_uri", NULL, MAVLINK_TYPE_CHAR, 255, 0, offsetof(mavlink_openhd_rtsp_configuration_t, stream_uri) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPENHD_RTSP_CONFIGURATION { \
    "OPENHD_RTSP_CONFIGURATION", \
    1, \
    {  { "stream_uri", NULL, MAVLINK_TYPE_CHAR, 255, 0, offsetof(mavlink_openhd_rtsp_configuration_t, stream_uri) }, \
         } \
}
#endif

/**
 * @brief Pack a openhd_rtsp_configuration message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param stream_uri  RTSP Stream URI
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_rtsp_configuration_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *stream_uri)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_LEN];

    _mav_put_char_array(buf, 0, stream_uri, 255);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_LEN);
#else
    mavlink_openhd_rtsp_configuration_t packet;

    mav_array_memcpy(packet.stream_uri, stream_uri, sizeof(char)*255);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_MIN_LEN, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_LEN, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_CRC);
}

/**
 * @brief Pack a openhd_rtsp_configuration message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param stream_uri  RTSP Stream URI
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_rtsp_configuration_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *stream_uri)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_LEN];

    _mav_put_char_array(buf, 0, stream_uri, 255);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_LEN);
#else
    mavlink_openhd_rtsp_configuration_t packet;

    mav_array_memcpy(packet.stream_uri, stream_uri, sizeof(char)*255);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_MIN_LEN, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_LEN, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_CRC);
}

/**
 * @brief Encode a openhd_rtsp_configuration struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param openhd_rtsp_configuration C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_rtsp_configuration_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_openhd_rtsp_configuration_t* openhd_rtsp_configuration)
{
    return mavlink_msg_openhd_rtsp_configuration_pack(system_id, component_id, msg, openhd_rtsp_configuration->stream_uri);
}

/**
 * @brief Encode a openhd_rtsp_configuration struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param openhd_rtsp_configuration C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_rtsp_configuration_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_openhd_rtsp_configuration_t* openhd_rtsp_configuration)
{
    return mavlink_msg_openhd_rtsp_configuration_pack_chan(system_id, component_id, chan, msg, openhd_rtsp_configuration->stream_uri);
}

/**
 * @brief Send a openhd_rtsp_configuration message
 * @param chan MAVLink channel to send the message
 *
 * @param stream_uri  RTSP Stream URI
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_openhd_rtsp_configuration_send(mavlink_channel_t chan, const char *stream_uri)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_LEN];

    _mav_put_char_array(buf, 0, stream_uri, 255);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION, buf, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_MIN_LEN, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_LEN, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_CRC);
#else
    mavlink_openhd_rtsp_configuration_t packet;

    mav_array_memcpy(packet.stream_uri, stream_uri, sizeof(char)*255);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION, (const char *)&packet, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_MIN_LEN, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_LEN, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_CRC);
#endif
}

/**
 * @brief Send a openhd_rtsp_configuration message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_openhd_rtsp_configuration_send_struct(mavlink_channel_t chan, const mavlink_openhd_rtsp_configuration_t* openhd_rtsp_configuration)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_rtsp_configuration_send(chan, openhd_rtsp_configuration->stream_uri);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION, (const char *)openhd_rtsp_configuration, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_MIN_LEN, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_LEN, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_openhd_rtsp_configuration_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *stream_uri)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_char_array(buf, 0, stream_uri, 255);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION, buf, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_MIN_LEN, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_LEN, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_CRC);
#else
    mavlink_openhd_rtsp_configuration_t *packet = (mavlink_openhd_rtsp_configuration_t *)msgbuf;

    mav_array_memcpy(packet->stream_uri, stream_uri, sizeof(char)*255);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION, (const char *)packet, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_MIN_LEN, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_LEN, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_CRC);
#endif
}
#endif

#endif

// MESSAGE OPENHD_RTSP_CONFIGURATION UNPACKING


/**
 * @brief Get field stream_uri from openhd_rtsp_configuration message
 *
 * @return  RTSP Stream URI
 */
static inline uint16_t mavlink_msg_openhd_rtsp_configuration_get_stream_uri(const mavlink_message_t* msg, char *stream_uri)
{
    return _MAV_RETURN_char_array(msg, stream_uri, 255,  0);
}

/**
 * @brief Decode a openhd_rtsp_configuration message into a struct
 *
 * @param msg The message to decode
 * @param openhd_rtsp_configuration C-struct to decode the message contents into
 */
static inline void mavlink_msg_openhd_rtsp_configuration_decode(const mavlink_message_t* msg, mavlink_openhd_rtsp_configuration_t* openhd_rtsp_configuration)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_rtsp_configuration_get_stream_uri(msg, openhd_rtsp_configuration->stream_uri);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_LEN? msg->len : MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_LEN;
        memset(openhd_rtsp_configuration, 0, MAVLINK_MSG_ID_OPENHD_RTSP_CONFIGURATION_LEN);
    memcpy(openhd_rtsp_configuration, _MAV_PAYLOAD(msg), len);
#endif
}
