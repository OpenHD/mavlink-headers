#pragma once
// MESSAGE OPENHD_MICROHARD_STATUS PACKING

#define MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS 1229


typedef struct __mavlink_openhd_microhard_status_t {
 uint32_t frequency; /*< [Hz] Frequency*/
 uint8_t enabled; /*<  Enabled status*/
 int8_t rssi; /*< [dBm] RSSI*/
 uint8_t tx_power; /*<  TX Power*/
 uint8_t bandwidth; /*<  Bandwidth*/
 int8_t noise; /*<  Noise*/
 uint8_t snr; /*<  SNR*/
} mavlink_openhd_microhard_status_t;

#define MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_LEN 10
#define MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_MIN_LEN 10
#define MAVLINK_MSG_ID_1229_LEN 10
#define MAVLINK_MSG_ID_1229_MIN_LEN 10

#define MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_CRC 224
#define MAVLINK_MSG_ID_1229_CRC 224



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPENHD_MICROHARD_STATUS { \
    1229, \
    "OPENHD_MICROHARD_STATUS", \
    7, \
    {  { "enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_openhd_microhard_status_t, enabled) }, \
         { "rssi", NULL, MAVLINK_TYPE_INT8_T, 0, 5, offsetof(mavlink_openhd_microhard_status_t, rssi) }, \
         { "tx_power", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_openhd_microhard_status_t, tx_power) }, \
         { "bandwidth", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_openhd_microhard_status_t, bandwidth) }, \
         { "frequency", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_openhd_microhard_status_t, frequency) }, \
         { "noise", NULL, MAVLINK_TYPE_INT8_T, 0, 8, offsetof(mavlink_openhd_microhard_status_t, noise) }, \
         { "snr", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_openhd_microhard_status_t, snr) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPENHD_MICROHARD_STATUS { \
    "OPENHD_MICROHARD_STATUS", \
    7, \
    {  { "enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_openhd_microhard_status_t, enabled) }, \
         { "rssi", NULL, MAVLINK_TYPE_INT8_T, 0, 5, offsetof(mavlink_openhd_microhard_status_t, rssi) }, \
         { "tx_power", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_openhd_microhard_status_t, tx_power) }, \
         { "bandwidth", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_openhd_microhard_status_t, bandwidth) }, \
         { "frequency", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_openhd_microhard_status_t, frequency) }, \
         { "noise", NULL, MAVLINK_TYPE_INT8_T, 0, 8, offsetof(mavlink_openhd_microhard_status_t, noise) }, \
         { "snr", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_openhd_microhard_status_t, snr) }, \
         } \
}
#endif

/**
 * @brief Pack a openhd_microhard_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param enabled  Enabled status
 * @param rssi [dBm] RSSI
 * @param tx_power  TX Power
 * @param bandwidth  Bandwidth
 * @param frequency [Hz] Frequency
 * @param noise  Noise
 * @param snr  SNR
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_microhard_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t enabled, int8_t rssi, uint8_t tx_power, uint8_t bandwidth, uint32_t frequency, int8_t noise, uint8_t snr)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, frequency);
    _mav_put_uint8_t(buf, 4, enabled);
    _mav_put_int8_t(buf, 5, rssi);
    _mav_put_uint8_t(buf, 6, tx_power);
    _mav_put_uint8_t(buf, 7, bandwidth);
    _mav_put_int8_t(buf, 8, noise);
    _mav_put_uint8_t(buf, 9, snr);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_LEN);
#else
    mavlink_openhd_microhard_status_t packet;
    packet.frequency = frequency;
    packet.enabled = enabled;
    packet.rssi = rssi;
    packet.tx_power = tx_power;
    packet.bandwidth = bandwidth;
    packet.noise = noise;
    packet.snr = snr;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_CRC);
}

/**
 * @brief Pack a openhd_microhard_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param enabled  Enabled status
 * @param rssi [dBm] RSSI
 * @param tx_power  TX Power
 * @param bandwidth  Bandwidth
 * @param frequency [Hz] Frequency
 * @param noise  Noise
 * @param snr  SNR
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_microhard_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t enabled,int8_t rssi,uint8_t tx_power,uint8_t bandwidth,uint32_t frequency,int8_t noise,uint8_t snr)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, frequency);
    _mav_put_uint8_t(buf, 4, enabled);
    _mav_put_int8_t(buf, 5, rssi);
    _mav_put_uint8_t(buf, 6, tx_power);
    _mav_put_uint8_t(buf, 7, bandwidth);
    _mav_put_int8_t(buf, 8, noise);
    _mav_put_uint8_t(buf, 9, snr);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_LEN);
#else
    mavlink_openhd_microhard_status_t packet;
    packet.frequency = frequency;
    packet.enabled = enabled;
    packet.rssi = rssi;
    packet.tx_power = tx_power;
    packet.bandwidth = bandwidth;
    packet.noise = noise;
    packet.snr = snr;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_CRC);
}

/**
 * @brief Encode a openhd_microhard_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param openhd_microhard_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_microhard_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_openhd_microhard_status_t* openhd_microhard_status)
{
    return mavlink_msg_openhd_microhard_status_pack(system_id, component_id, msg, openhd_microhard_status->enabled, openhd_microhard_status->rssi, openhd_microhard_status->tx_power, openhd_microhard_status->bandwidth, openhd_microhard_status->frequency, openhd_microhard_status->noise, openhd_microhard_status->snr);
}

/**
 * @brief Encode a openhd_microhard_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param openhd_microhard_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_microhard_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_openhd_microhard_status_t* openhd_microhard_status)
{
    return mavlink_msg_openhd_microhard_status_pack_chan(system_id, component_id, chan, msg, openhd_microhard_status->enabled, openhd_microhard_status->rssi, openhd_microhard_status->tx_power, openhd_microhard_status->bandwidth, openhd_microhard_status->frequency, openhd_microhard_status->noise, openhd_microhard_status->snr);
}

/**
 * @brief Send a openhd_microhard_status message
 * @param chan MAVLink channel to send the message
 *
 * @param enabled  Enabled status
 * @param rssi [dBm] RSSI
 * @param tx_power  TX Power
 * @param bandwidth  Bandwidth
 * @param frequency [Hz] Frequency
 * @param noise  Noise
 * @param snr  SNR
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_openhd_microhard_status_send(mavlink_channel_t chan, uint8_t enabled, int8_t rssi, uint8_t tx_power, uint8_t bandwidth, uint32_t frequency, int8_t noise, uint8_t snr)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, frequency);
    _mav_put_uint8_t(buf, 4, enabled);
    _mav_put_int8_t(buf, 5, rssi);
    _mav_put_uint8_t(buf, 6, tx_power);
    _mav_put_uint8_t(buf, 7, bandwidth);
    _mav_put_int8_t(buf, 8, noise);
    _mav_put_uint8_t(buf, 9, snr);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS, buf, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_CRC);
#else
    mavlink_openhd_microhard_status_t packet;
    packet.frequency = frequency;
    packet.enabled = enabled;
    packet.rssi = rssi;
    packet.tx_power = tx_power;
    packet.bandwidth = bandwidth;
    packet.noise = noise;
    packet.snr = snr;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS, (const char *)&packet, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_CRC);
#endif
}

/**
 * @brief Send a openhd_microhard_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_openhd_microhard_status_send_struct(mavlink_channel_t chan, const mavlink_openhd_microhard_status_t* openhd_microhard_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_microhard_status_send(chan, openhd_microhard_status->enabled, openhd_microhard_status->rssi, openhd_microhard_status->tx_power, openhd_microhard_status->bandwidth, openhd_microhard_status->frequency, openhd_microhard_status->noise, openhd_microhard_status->snr);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS, (const char *)openhd_microhard_status, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_openhd_microhard_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t enabled, int8_t rssi, uint8_t tx_power, uint8_t bandwidth, uint32_t frequency, int8_t noise, uint8_t snr)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, frequency);
    _mav_put_uint8_t(buf, 4, enabled);
    _mav_put_int8_t(buf, 5, rssi);
    _mav_put_uint8_t(buf, 6, tx_power);
    _mav_put_uint8_t(buf, 7, bandwidth);
    _mav_put_int8_t(buf, 8, noise);
    _mav_put_uint8_t(buf, 9, snr);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS, buf, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_CRC);
#else
    mavlink_openhd_microhard_status_t *packet = (mavlink_openhd_microhard_status_t *)msgbuf;
    packet->frequency = frequency;
    packet->enabled = enabled;
    packet->rssi = rssi;
    packet->tx_power = tx_power;
    packet->bandwidth = bandwidth;
    packet->noise = noise;
    packet->snr = snr;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS, (const char *)packet, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE OPENHD_MICROHARD_STATUS UNPACKING


/**
 * @brief Get field enabled from openhd_microhard_status message
 *
 * @return  Enabled status
 */
static inline uint8_t mavlink_msg_openhd_microhard_status_get_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field rssi from openhd_microhard_status message
 *
 * @return [dBm] RSSI
 */
static inline int8_t mavlink_msg_openhd_microhard_status_get_rssi(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  5);
}

/**
 * @brief Get field tx_power from openhd_microhard_status message
 *
 * @return  TX Power
 */
static inline uint8_t mavlink_msg_openhd_microhard_status_get_tx_power(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field bandwidth from openhd_microhard_status message
 *
 * @return  Bandwidth
 */
static inline uint8_t mavlink_msg_openhd_microhard_status_get_bandwidth(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field frequency from openhd_microhard_status message
 *
 * @return [Hz] Frequency
 */
static inline uint32_t mavlink_msg_openhd_microhard_status_get_frequency(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field noise from openhd_microhard_status message
 *
 * @return  Noise
 */
static inline int8_t mavlink_msg_openhd_microhard_status_get_noise(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  8);
}

/**
 * @brief Get field snr from openhd_microhard_status message
 *
 * @return  SNR
 */
static inline uint8_t mavlink_msg_openhd_microhard_status_get_snr(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Decode a openhd_microhard_status message into a struct
 *
 * @param msg The message to decode
 * @param openhd_microhard_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_openhd_microhard_status_decode(const mavlink_message_t* msg, mavlink_openhd_microhard_status_t* openhd_microhard_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    openhd_microhard_status->frequency = mavlink_msg_openhd_microhard_status_get_frequency(msg);
    openhd_microhard_status->enabled = mavlink_msg_openhd_microhard_status_get_enabled(msg);
    openhd_microhard_status->rssi = mavlink_msg_openhd_microhard_status_get_rssi(msg);
    openhd_microhard_status->tx_power = mavlink_msg_openhd_microhard_status_get_tx_power(msg);
    openhd_microhard_status->bandwidth = mavlink_msg_openhd_microhard_status_get_bandwidth(msg);
    openhd_microhard_status->noise = mavlink_msg_openhd_microhard_status_get_noise(msg);
    openhd_microhard_status->snr = mavlink_msg_openhd_microhard_status_get_snr(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_LEN? msg->len : MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_LEN;
        memset(openhd_microhard_status, 0, MAVLINK_MSG_ID_OPENHD_MICROHARD_STATUS_LEN);
    memcpy(openhd_microhard_status, _MAV_PAYLOAD(msg), len);
#endif
}
