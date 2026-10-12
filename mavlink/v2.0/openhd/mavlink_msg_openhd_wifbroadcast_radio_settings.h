#pragma once
// MESSAGE OPENHD_WIFBROADCAST_RADIO_SETTINGS PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS 1231


typedef struct __mavlink_openhd_wifbroadcast_radio_settings_t {
 uint8_t target_system; /*<  Target system ID.*/
 uint8_t target_component; /*<  Target component ID; zero addresses all components.*/
 uint8_t enable_rc_openhd_control; /*<  Enable RC-driven radio control: 0 disabled, 1 enabled.*/
 uint8_t mcs_via_rc_channel; /*<  RC channel for MCS selection: 0 disabled, 1 to 18 channel number.*/
 uint8_t bw_via_rc_channel; /*<  RC channel for bandwidth selection: 0 disabled, 1 to 18 channel number.*/
 uint8_t tx_mode_via_rc_channel; /*<  RC channel for transmit-mode selection: 0 disabled, 1 to 18 channel number.*/
} mavlink_openhd_wifbroadcast_radio_settings_t;

#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN 6
#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_MIN_LEN 6
#define MAVLINK_MSG_ID_1231_LEN 6
#define MAVLINK_MSG_ID_1231_MIN_LEN 6

#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_CRC 178
#define MAVLINK_MSG_ID_1231_CRC 178



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPENHD_WIFBROADCAST_RADIO_SETTINGS { \
    1231, \
    "OPENHD_WIFBROADCAST_RADIO_SETTINGS", \
    6, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_openhd_wifbroadcast_radio_settings_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_openhd_wifbroadcast_radio_settings_t, target_component) }, \
         { "enable_rc_openhd_control", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_openhd_wifbroadcast_radio_settings_t, enable_rc_openhd_control) }, \
         { "mcs_via_rc_channel", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_openhd_wifbroadcast_radio_settings_t, mcs_via_rc_channel) }, \
         { "bw_via_rc_channel", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_openhd_wifbroadcast_radio_settings_t, bw_via_rc_channel) }, \
         { "tx_mode_via_rc_channel", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_openhd_wifbroadcast_radio_settings_t, tx_mode_via_rc_channel) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPENHD_WIFBROADCAST_RADIO_SETTINGS { \
    "OPENHD_WIFBROADCAST_RADIO_SETTINGS", \
    6, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_openhd_wifbroadcast_radio_settings_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_openhd_wifbroadcast_radio_settings_t, target_component) }, \
         { "enable_rc_openhd_control", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_openhd_wifbroadcast_radio_settings_t, enable_rc_openhd_control) }, \
         { "mcs_via_rc_channel", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_openhd_wifbroadcast_radio_settings_t, mcs_via_rc_channel) }, \
         { "bw_via_rc_channel", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_openhd_wifbroadcast_radio_settings_t, bw_via_rc_channel) }, \
         { "tx_mode_via_rc_channel", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_openhd_wifbroadcast_radio_settings_t, tx_mode_via_rc_channel) }, \
         } \
}
#endif

/**
 * @brief Pack a openhd_wifbroadcast_radio_settings message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  Target system ID.
 * @param target_component  Target component ID; zero addresses all components.
 * @param enable_rc_openhd_control  Enable RC-driven radio control: 0 disabled, 1 enabled.
 * @param mcs_via_rc_channel  RC channel for MCS selection: 0 disabled, 1 to 18 channel number.
 * @param bw_via_rc_channel  RC channel for bandwidth selection: 0 disabled, 1 to 18 channel number.
 * @param tx_mode_via_rc_channel  RC channel for transmit-mode selection: 0 disabled, 1 to 18 channel number.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_radio_settings_pack(uint32_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t target_system, uint8_t target_component, uint8_t enable_rc_openhd_control, uint8_t mcs_via_rc_channel, uint8_t bw_via_rc_channel, uint8_t tx_mode_via_rc_channel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN];
    _mav_put_uint8_t(buf, 0, mavlink_msg_target_field(target_system));
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, enable_rc_openhd_control);
    _mav_put_uint8_t(buf, 3, mcs_via_rc_channel);
    _mav_put_uint8_t(buf, 4, bw_via_rc_channel);
    _mav_put_uint8_t(buf, 5, tx_mode_via_rc_channel);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN);
#else
    mavlink_openhd_wifbroadcast_radio_settings_t packet;
    packet.target_system = mavlink_msg_target_field(target_system);
    packet.target_component = target_component;
    packet.enable_rc_openhd_control = enable_rc_openhd_control;
    packet.mcs_via_rc_channel = mcs_via_rc_channel;
    packet.bw_via_rc_channel = bw_via_rc_channel;
    packet.tx_mode_via_rc_channel = tx_mode_via_rc_channel;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS;
    return mavlink_finalize_message_target(msg, system_id, component_id, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_CRC, target_system);
}

/**
 * @brief Pack a openhd_wifbroadcast_radio_settings message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  Target system ID.
 * @param target_component  Target component ID; zero addresses all components.
 * @param enable_rc_openhd_control  Enable RC-driven radio control: 0 disabled, 1 enabled.
 * @param mcs_via_rc_channel  RC channel for MCS selection: 0 disabled, 1 to 18 channel number.
 * @param bw_via_rc_channel  RC channel for bandwidth selection: 0 disabled, 1 to 18 channel number.
 * @param tx_mode_via_rc_channel  RC channel for transmit-mode selection: 0 disabled, 1 to 18 channel number.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_radio_settings_pack_status(uint32_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t target_system, uint8_t target_component, uint8_t enable_rc_openhd_control, uint8_t mcs_via_rc_channel, uint8_t bw_via_rc_channel, uint8_t tx_mode_via_rc_channel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN];
    _mav_put_uint8_t(buf, 0, mavlink_msg_target_field(target_system));
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, enable_rc_openhd_control);
    _mav_put_uint8_t(buf, 3, mcs_via_rc_channel);
    _mav_put_uint8_t(buf, 4, bw_via_rc_channel);
    _mav_put_uint8_t(buf, 5, tx_mode_via_rc_channel);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN);
#else
    mavlink_openhd_wifbroadcast_radio_settings_t packet;
    packet.target_system = mavlink_msg_target_field(target_system);
    packet.target_component = target_component;
    packet.enable_rc_openhd_control = enable_rc_openhd_control;
    packet.mcs_via_rc_channel = mcs_via_rc_channel;
    packet.bw_via_rc_channel = bw_via_rc_channel;
    packet.tx_mode_via_rc_channel = tx_mode_via_rc_channel;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer_target(msg, system_id, component_id, _status, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_CRC, target_system);
#else
    return mavlink_finalize_message_buffer_target(msg, system_id, component_id, _status, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN, 0, target_system);
#endif
}

/**
 * @brief Pack a openhd_wifbroadcast_radio_settings message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  Target system ID.
 * @param target_component  Target component ID; zero addresses all components.
 * @param enable_rc_openhd_control  Enable RC-driven radio control: 0 disabled, 1 enabled.
 * @param mcs_via_rc_channel  RC channel for MCS selection: 0 disabled, 1 to 18 channel number.
 * @param bw_via_rc_channel  RC channel for bandwidth selection: 0 disabled, 1 to 18 channel number.
 * @param tx_mode_via_rc_channel  RC channel for transmit-mode selection: 0 disabled, 1 to 18 channel number.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_radio_settings_pack_chan(uint32_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t target_system,uint8_t target_component,uint8_t enable_rc_openhd_control,uint8_t mcs_via_rc_channel,uint8_t bw_via_rc_channel,uint8_t tx_mode_via_rc_channel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN];
    _mav_put_uint8_t(buf, 0, mavlink_msg_target_field(target_system));
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, enable_rc_openhd_control);
    _mav_put_uint8_t(buf, 3, mcs_via_rc_channel);
    _mav_put_uint8_t(buf, 4, bw_via_rc_channel);
    _mav_put_uint8_t(buf, 5, tx_mode_via_rc_channel);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN);
#else
    mavlink_openhd_wifbroadcast_radio_settings_t packet;
    packet.target_system = mavlink_msg_target_field(target_system);
    packet.target_component = target_component;
    packet.enable_rc_openhd_control = enable_rc_openhd_control;
    packet.mcs_via_rc_channel = mcs_via_rc_channel;
    packet.bw_via_rc_channel = bw_via_rc_channel;
    packet.tx_mode_via_rc_channel = tx_mode_via_rc_channel;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS;
    return mavlink_finalize_message_chan_target(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_CRC, target_system);
}

/**
 * @brief Encode a openhd_wifbroadcast_radio_settings struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param openhd_wifbroadcast_radio_settings C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_radio_settings_encode(uint32_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_openhd_wifbroadcast_radio_settings_t* openhd_wifbroadcast_radio_settings)
{
    return mavlink_msg_openhd_wifbroadcast_radio_settings_pack(system_id, component_id, msg, openhd_wifbroadcast_radio_settings->target_system, openhd_wifbroadcast_radio_settings->target_component, openhd_wifbroadcast_radio_settings->enable_rc_openhd_control, openhd_wifbroadcast_radio_settings->mcs_via_rc_channel, openhd_wifbroadcast_radio_settings->bw_via_rc_channel, openhd_wifbroadcast_radio_settings->tx_mode_via_rc_channel);
}

/**
 * @brief Encode a openhd_wifbroadcast_radio_settings struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param openhd_wifbroadcast_radio_settings C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_radio_settings_encode_chan(uint32_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_openhd_wifbroadcast_radio_settings_t* openhd_wifbroadcast_radio_settings)
{
    return mavlink_msg_openhd_wifbroadcast_radio_settings_pack_chan(system_id, component_id, chan, msg, openhd_wifbroadcast_radio_settings->target_system, openhd_wifbroadcast_radio_settings->target_component, openhd_wifbroadcast_radio_settings->enable_rc_openhd_control, openhd_wifbroadcast_radio_settings->mcs_via_rc_channel, openhd_wifbroadcast_radio_settings->bw_via_rc_channel, openhd_wifbroadcast_radio_settings->tx_mode_via_rc_channel);
}

/**
 * @brief Encode a openhd_wifbroadcast_radio_settings struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param openhd_wifbroadcast_radio_settings C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_radio_settings_encode_status(uint32_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_openhd_wifbroadcast_radio_settings_t* openhd_wifbroadcast_radio_settings)
{
    return mavlink_msg_openhd_wifbroadcast_radio_settings_pack_status(system_id, component_id, _status, msg,  openhd_wifbroadcast_radio_settings->target_system, openhd_wifbroadcast_radio_settings->target_component, openhd_wifbroadcast_radio_settings->enable_rc_openhd_control, openhd_wifbroadcast_radio_settings->mcs_via_rc_channel, openhd_wifbroadcast_radio_settings->bw_via_rc_channel, openhd_wifbroadcast_radio_settings->tx_mode_via_rc_channel);
}

/**
 * @brief Send a openhd_wifbroadcast_radio_settings message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  Target system ID.
 * @param target_component  Target component ID; zero addresses all components.
 * @param enable_rc_openhd_control  Enable RC-driven radio control: 0 disabled, 1 enabled.
 * @param mcs_via_rc_channel  RC channel for MCS selection: 0 disabled, 1 to 18 channel number.
 * @param bw_via_rc_channel  RC channel for bandwidth selection: 0 disabled, 1 to 18 channel number.
 * @param tx_mode_via_rc_channel  RC channel for transmit-mode selection: 0 disabled, 1 to 18 channel number.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_openhd_wifbroadcast_radio_settings_send(mavlink_channel_t chan, uint32_t target_system, uint8_t target_component, uint8_t enable_rc_openhd_control, uint8_t mcs_via_rc_channel, uint8_t bw_via_rc_channel, uint8_t tx_mode_via_rc_channel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN];
    _mav_put_uint8_t(buf, 0, mavlink_msg_target_field(target_system));
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, enable_rc_openhd_control);
    _mav_put_uint8_t(buf, 3, mcs_via_rc_channel);
    _mav_put_uint8_t(buf, 4, bw_via_rc_channel);
    _mav_put_uint8_t(buf, 5, tx_mode_via_rc_channel);

    _mav_finalize_message_chan_send_target(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS, buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_CRC, target_system);
#else
    mavlink_openhd_wifbroadcast_radio_settings_t packet;
    packet.target_system = mavlink_msg_target_field(target_system);
    packet.target_component = target_component;
    packet.enable_rc_openhd_control = enable_rc_openhd_control;
    packet.mcs_via_rc_channel = mcs_via_rc_channel;
    packet.bw_via_rc_channel = bw_via_rc_channel;
    packet.tx_mode_via_rc_channel = tx_mode_via_rc_channel;

    _mav_finalize_message_chan_send_target(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS, (const char *)&packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_CRC, target_system);
#endif
}

/**
 * @brief Send a openhd_wifbroadcast_radio_settings message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_openhd_wifbroadcast_radio_settings_send_struct(mavlink_channel_t chan, const mavlink_openhd_wifbroadcast_radio_settings_t* openhd_wifbroadcast_radio_settings)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_wifbroadcast_radio_settings_send(chan, openhd_wifbroadcast_radio_settings->target_system, openhd_wifbroadcast_radio_settings->target_component, openhd_wifbroadcast_radio_settings->enable_rc_openhd_control, openhd_wifbroadcast_radio_settings->mcs_via_rc_channel, openhd_wifbroadcast_radio_settings->bw_via_rc_channel, openhd_wifbroadcast_radio_settings->tx_mode_via_rc_channel);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS, (const char *)openhd_wifbroadcast_radio_settings, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_openhd_wifbroadcast_radio_settings_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t target_system, uint8_t target_component, uint8_t enable_rc_openhd_control, uint8_t mcs_via_rc_channel, uint8_t bw_via_rc_channel, uint8_t tx_mode_via_rc_channel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, mavlink_msg_target_field(target_system));
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, enable_rc_openhd_control);
    _mav_put_uint8_t(buf, 3, mcs_via_rc_channel);
    _mav_put_uint8_t(buf, 4, bw_via_rc_channel);
    _mav_put_uint8_t(buf, 5, tx_mode_via_rc_channel);

    _mav_finalize_message_chan_send_target(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS, buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_CRC, target_system);
#else
    mavlink_openhd_wifbroadcast_radio_settings_t *packet = (mavlink_openhd_wifbroadcast_radio_settings_t *)msgbuf;
    packet->target_system = mavlink_msg_target_field(target_system);
    packet->target_component = target_component;
    packet->enable_rc_openhd_control = enable_rc_openhd_control;
    packet->mcs_via_rc_channel = mcs_via_rc_channel;
    packet->bw_via_rc_channel = bw_via_rc_channel;
    packet->tx_mode_via_rc_channel = tx_mode_via_rc_channel;

    _mav_finalize_message_chan_send_target(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS, (const char *)packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_CRC, target_system);
#endif
}
#endif

#endif

// MESSAGE OPENHD_WIFBROADCAST_RADIO_SETTINGS UNPACKING


/**
 * @brief Get field target_component from openhd_wifbroadcast_radio_settings message
 *
 * @return  Target component ID; zero addresses all components.
 */
static inline uint8_t mavlink_msg_openhd_wifbroadcast_radio_settings_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field enable_rc_openhd_control from openhd_wifbroadcast_radio_settings message
 *
 * @return  Enable RC-driven radio control: 0 disabled, 1 enabled.
 */
static inline uint8_t mavlink_msg_openhd_wifbroadcast_radio_settings_get_enable_rc_openhd_control(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field mcs_via_rc_channel from openhd_wifbroadcast_radio_settings message
 *
 * @return  RC channel for MCS selection: 0 disabled, 1 to 18 channel number.
 */
static inline uint8_t mavlink_msg_openhd_wifbroadcast_radio_settings_get_mcs_via_rc_channel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field bw_via_rc_channel from openhd_wifbroadcast_radio_settings message
 *
 * @return  RC channel for bandwidth selection: 0 disabled, 1 to 18 channel number.
 */
static inline uint8_t mavlink_msg_openhd_wifbroadcast_radio_settings_get_bw_via_rc_channel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field tx_mode_via_rc_channel from openhd_wifbroadcast_radio_settings message
 *
 * @return  RC channel for transmit-mode selection: 0 disabled, 1 to 18 channel number.
 */
static inline uint8_t mavlink_msg_openhd_wifbroadcast_radio_settings_get_tx_mode_via_rc_channel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Decode a openhd_wifbroadcast_radio_settings message into a struct
 *
 * @param msg The message to decode
 * @param openhd_wifbroadcast_radio_settings C-struct to decode the message contents into
 */
static inline void mavlink_msg_openhd_wifbroadcast_radio_settings_decode(const mavlink_message_t* msg, mavlink_openhd_wifbroadcast_radio_settings_t* openhd_wifbroadcast_radio_settings)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    openhd_wifbroadcast_radio_settings->target_system = _MAV_RETURN_uint8_t(msg, 0);
    openhd_wifbroadcast_radio_settings->target_component = mavlink_msg_openhd_wifbroadcast_radio_settings_get_target_component(msg);
    openhd_wifbroadcast_radio_settings->enable_rc_openhd_control = mavlink_msg_openhd_wifbroadcast_radio_settings_get_enable_rc_openhd_control(msg);
    openhd_wifbroadcast_radio_settings->mcs_via_rc_channel = mavlink_msg_openhd_wifbroadcast_radio_settings_get_mcs_via_rc_channel(msg);
    openhd_wifbroadcast_radio_settings->bw_via_rc_channel = mavlink_msg_openhd_wifbroadcast_radio_settings_get_bw_via_rc_channel(msg);
    openhd_wifbroadcast_radio_settings->tx_mode_via_rc_channel = mavlink_msg_openhd_wifbroadcast_radio_settings_get_tx_mode_via_rc_channel(msg);
    if (msg->incompat_flags & MAVLINK_IFLAG_TARGET32) {
        // This uint8_t field cannot retain a wide target. The sentinel is NOT reserved.
        // For routing use mavlink_msg_get_target_sysid(msg, mavlink_get_msg_entry(msg->msgid)).
        // To relay after edits, pass that full target to _pack*(); _encode*() loses it.
        openhd_wifbroadcast_radio_settings->target_system = mavlink_msg_target_field(msg->target_sysid);
    }

#else
    mavlink_msg_decode_target(msg, openhd_wifbroadcast_radio_settings, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN, 0);
#endif
}
