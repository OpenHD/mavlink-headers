#pragma once
// MESSAGE OPENHD_POWER_STATUS PACKING

#define MAVLINK_MSG_ID_OPENHD_POWER_STATUS 1228


typedef struct __mavlink_openhd_power_status_t {
 uint16_t voltage_mv; /*< [mV] Voltage in millivolts*/
 int16_t current_ma; /*< [mA] Current in milliamperes*/
 uint8_t charging_status; /*<  0=Unknown, 1=Charging, 2=Discharging, 3=Not Charging*/
 uint8_t battery_percent; /*< [%] Battery percentage (0-100)*/
} mavlink_openhd_power_status_t;

#define MAVLINK_MSG_ID_OPENHD_POWER_STATUS_LEN 6
#define MAVLINK_MSG_ID_OPENHD_POWER_STATUS_MIN_LEN 6
#define MAVLINK_MSG_ID_1228_LEN 6
#define MAVLINK_MSG_ID_1228_MIN_LEN 6

#define MAVLINK_MSG_ID_OPENHD_POWER_STATUS_CRC 218
#define MAVLINK_MSG_ID_1228_CRC 218



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPENHD_POWER_STATUS { \
    1228, \
    "OPENHD_POWER_STATUS", \
    4, \
    {  { "voltage_mv", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_openhd_power_status_t, voltage_mv) }, \
         { "current_ma", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_openhd_power_status_t, current_ma) }, \
         { "charging_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_openhd_power_status_t, charging_status) }, \
         { "battery_percent", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_openhd_power_status_t, battery_percent) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPENHD_POWER_STATUS { \
    "OPENHD_POWER_STATUS", \
    4, \
    {  { "voltage_mv", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_openhd_power_status_t, voltage_mv) }, \
         { "current_ma", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_openhd_power_status_t, current_ma) }, \
         { "charging_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_openhd_power_status_t, charging_status) }, \
         { "battery_percent", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_openhd_power_status_t, battery_percent) }, \
         } \
}
#endif

/**
 * @brief Pack a openhd_power_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param voltage_mv [mV] Voltage in millivolts
 * @param current_ma [mA] Current in milliamperes
 * @param charging_status  0=Unknown, 1=Charging, 2=Discharging, 3=Not Charging
 * @param battery_percent [%] Battery percentage (0-100)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_power_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t voltage_mv, int16_t current_ma, uint8_t charging_status, uint8_t battery_percent)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_POWER_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, voltage_mv);
    _mav_put_int16_t(buf, 2, current_ma);
    _mav_put_uint8_t(buf, 4, charging_status);
    _mav_put_uint8_t(buf, 5, battery_percent);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_LEN);
#else
    mavlink_openhd_power_status_t packet;
    packet.voltage_mv = voltage_mv;
    packet.current_ma = current_ma;
    packet.charging_status = charging_status;
    packet.battery_percent = battery_percent;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_POWER_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_CRC);
}

/**
 * @brief Pack a openhd_power_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param voltage_mv [mV] Voltage in millivolts
 * @param current_ma [mA] Current in milliamperes
 * @param charging_status  0=Unknown, 1=Charging, 2=Discharging, 3=Not Charging
 * @param battery_percent [%] Battery percentage (0-100)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_power_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t voltage_mv,int16_t current_ma,uint8_t charging_status,uint8_t battery_percent)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_POWER_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, voltage_mv);
    _mav_put_int16_t(buf, 2, current_ma);
    _mav_put_uint8_t(buf, 4, charging_status);
    _mav_put_uint8_t(buf, 5, battery_percent);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_LEN);
#else
    mavlink_openhd_power_status_t packet;
    packet.voltage_mv = voltage_mv;
    packet.current_ma = current_ma;
    packet.charging_status = charging_status;
    packet.battery_percent = battery_percent;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_POWER_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_CRC);
}

/**
 * @brief Encode a openhd_power_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param openhd_power_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_power_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_openhd_power_status_t* openhd_power_status)
{
    return mavlink_msg_openhd_power_status_pack(system_id, component_id, msg, openhd_power_status->voltage_mv, openhd_power_status->current_ma, openhd_power_status->charging_status, openhd_power_status->battery_percent);
}

/**
 * @brief Encode a openhd_power_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param openhd_power_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_power_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_openhd_power_status_t* openhd_power_status)
{
    return mavlink_msg_openhd_power_status_pack_chan(system_id, component_id, chan, msg, openhd_power_status->voltage_mv, openhd_power_status->current_ma, openhd_power_status->charging_status, openhd_power_status->battery_percent);
}

/**
 * @brief Send a openhd_power_status message
 * @param chan MAVLink channel to send the message
 *
 * @param voltage_mv [mV] Voltage in millivolts
 * @param current_ma [mA] Current in milliamperes
 * @param charging_status  0=Unknown, 1=Charging, 2=Discharging, 3=Not Charging
 * @param battery_percent [%] Battery percentage (0-100)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_openhd_power_status_send(mavlink_channel_t chan, uint16_t voltage_mv, int16_t current_ma, uint8_t charging_status, uint8_t battery_percent)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_POWER_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, voltage_mv);
    _mav_put_int16_t(buf, 2, current_ma);
    _mav_put_uint8_t(buf, 4, charging_status);
    _mav_put_uint8_t(buf, 5, battery_percent);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_POWER_STATUS, buf, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_CRC);
#else
    mavlink_openhd_power_status_t packet;
    packet.voltage_mv = voltage_mv;
    packet.current_ma = current_ma;
    packet.charging_status = charging_status;
    packet.battery_percent = battery_percent;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_POWER_STATUS, (const char *)&packet, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_CRC);
#endif
}

/**
 * @brief Send a openhd_power_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_openhd_power_status_send_struct(mavlink_channel_t chan, const mavlink_openhd_power_status_t* openhd_power_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_power_status_send(chan, openhd_power_status->voltage_mv, openhd_power_status->current_ma, openhd_power_status->charging_status, openhd_power_status->battery_percent);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_POWER_STATUS, (const char *)openhd_power_status, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPENHD_POWER_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_openhd_power_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t voltage_mv, int16_t current_ma, uint8_t charging_status, uint8_t battery_percent)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, voltage_mv);
    _mav_put_int16_t(buf, 2, current_ma);
    _mav_put_uint8_t(buf, 4, charging_status);
    _mav_put_uint8_t(buf, 5, battery_percent);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_POWER_STATUS, buf, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_CRC);
#else
    mavlink_openhd_power_status_t *packet = (mavlink_openhd_power_status_t *)msgbuf;
    packet->voltage_mv = voltage_mv;
    packet->current_ma = current_ma;
    packet->charging_status = charging_status;
    packet->battery_percent = battery_percent;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_POWER_STATUS, (const char *)packet, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE OPENHD_POWER_STATUS UNPACKING


/**
 * @brief Get field voltage_mv from openhd_power_status message
 *
 * @return [mV] Voltage in millivolts
 */
static inline uint16_t mavlink_msg_openhd_power_status_get_voltage_mv(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field current_ma from openhd_power_status message
 *
 * @return [mA] Current in milliamperes
 */
static inline int16_t mavlink_msg_openhd_power_status_get_current_ma(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field charging_status from openhd_power_status message
 *
 * @return  0=Unknown, 1=Charging, 2=Discharging, 3=Not Charging
 */
static inline uint8_t mavlink_msg_openhd_power_status_get_charging_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field battery_percent from openhd_power_status message
 *
 * @return [%] Battery percentage (0-100)
 */
static inline uint8_t mavlink_msg_openhd_power_status_get_battery_percent(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Decode a openhd_power_status message into a struct
 *
 * @param msg The message to decode
 * @param openhd_power_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_openhd_power_status_decode(const mavlink_message_t* msg, mavlink_openhd_power_status_t* openhd_power_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    openhd_power_status->voltage_mv = mavlink_msg_openhd_power_status_get_voltage_mv(msg);
    openhd_power_status->current_ma = mavlink_msg_openhd_power_status_get_current_ma(msg);
    openhd_power_status->charging_status = mavlink_msg_openhd_power_status_get_charging_status(msg);
    openhd_power_status->battery_percent = mavlink_msg_openhd_power_status_get_battery_percent(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OPENHD_POWER_STATUS_LEN? msg->len : MAVLINK_MSG_ID_OPENHD_POWER_STATUS_LEN;
        memset(openhd_power_status, 0, MAVLINK_MSG_ID_OPENHD_POWER_STATUS_LEN);
    memcpy(openhd_power_status, _MAV_PAYLOAD(msg), len);
#endif
}
