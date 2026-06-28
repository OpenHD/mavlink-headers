#pragma once
// MESSAGE OPENHD_WIFBROADCAST_RADIO_SETTINGS PACKING

#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS 1231

typedef struct __mavlink_openhd_wifbroadcast_radio_settings_t {
 uint8_t target_system; /*<  System ID to apply these radio settings to*/
 uint8_t target_component; /*<  Component ID to apply these radio settings to, 0 for all components*/
 uint8_t enable_rc_openhd_control; /*<  Enable RC-driven OpenHD radio control, 0=disabled, 1=enabled*/
 uint8_t mcs_via_rc_channel; /*<  RC channel number for MCS control, 0=disabled, 1..18=RC channel*/
 uint8_t bw_via_rc_channel; /*<  RC channel number for bandwidth control, 0=disabled, 1..18=RC channel*/
 uint8_t tx_mode_via_rc_channel; /*<  RC channel number for TX mode control, 0=disabled, 1..18=RC channel*/
} mavlink_openhd_wifbroadcast_radio_settings_t;

#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN 6
#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_MIN_LEN 6
#define MAVLINK_MSG_ID_1231_LEN 6
#define MAVLINK_MSG_ID_1231_MIN_LEN 6

#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_CRC 177
#define MAVLINK_MSG_ID_1231_CRC 177

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

static inline uint16_t mavlink_msg_openhd_wifbroadcast_radio_settings_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t enable_rc_openhd_control, uint8_t mcs_via_rc_channel, uint8_t bw_via_rc_channel, uint8_t tx_mode_via_rc_channel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, enable_rc_openhd_control);
    _mav_put_uint8_t(buf, 3, mcs_via_rc_channel);
    _mav_put_uint8_t(buf, 4, bw_via_rc_channel);
    _mav_put_uint8_t(buf, 5, tx_mode_via_rc_channel);
    memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN);
#else
    mavlink_openhd_wifbroadcast_radio_settings_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.enable_rc_openhd_control = enable_rc_openhd_control;
    packet.mcs_via_rc_channel = mcs_via_rc_channel;
    packet.bw_via_rc_channel = bw_via_rc_channel;
    packet.tx_mode_via_rc_channel = tx_mode_via_rc_channel;
    memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_CRC);
}

static inline uint16_t mavlink_msg_openhd_wifbroadcast_radio_settings_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint8_t enable_rc_openhd_control,uint8_t mcs_via_rc_channel,uint8_t bw_via_rc_channel,uint8_t tx_mode_via_rc_channel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, enable_rc_openhd_control);
    _mav_put_uint8_t(buf, 3, mcs_via_rc_channel);
    _mav_put_uint8_t(buf, 4, bw_via_rc_channel);
    _mav_put_uint8_t(buf, 5, tx_mode_via_rc_channel);
    memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN);
#else
    mavlink_openhd_wifbroadcast_radio_settings_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.enable_rc_openhd_control = enable_rc_openhd_control;
    packet.mcs_via_rc_channel = mcs_via_rc_channel;
    packet.bw_via_rc_channel = bw_via_rc_channel;
    packet.tx_mode_via_rc_channel = tx_mode_via_rc_channel;
    memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_CRC);
}

static inline uint16_t mavlink_msg_openhd_wifbroadcast_radio_settings_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_openhd_wifbroadcast_radio_settings_t* openhd_wifbroadcast_radio_settings)
{
    return mavlink_msg_openhd_wifbroadcast_radio_settings_pack(system_id, component_id, msg, openhd_wifbroadcast_radio_settings->target_system, openhd_wifbroadcast_radio_settings->target_component, openhd_wifbroadcast_radio_settings->enable_rc_openhd_control, openhd_wifbroadcast_radio_settings->mcs_via_rc_channel, openhd_wifbroadcast_radio_settings->bw_via_rc_channel, openhd_wifbroadcast_radio_settings->tx_mode_via_rc_channel);
}

static inline uint16_t mavlink_msg_openhd_wifbroadcast_radio_settings_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_openhd_wifbroadcast_radio_settings_t* openhd_wifbroadcast_radio_settings)
{
    return mavlink_msg_openhd_wifbroadcast_radio_settings_pack_chan(system_id, component_id, chan, msg, openhd_wifbroadcast_radio_settings->target_system, openhd_wifbroadcast_radio_settings->target_component, openhd_wifbroadcast_radio_settings->enable_rc_openhd_control, openhd_wifbroadcast_radio_settings->mcs_via_rc_channel, openhd_wifbroadcast_radio_settings->bw_via_rc_channel, openhd_wifbroadcast_radio_settings->tx_mode_via_rc_channel);
}

#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_openhd_wifbroadcast_radio_settings_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint8_t enable_rc_openhd_control, uint8_t mcs_via_rc_channel, uint8_t bw_via_rc_channel, uint8_t tx_mode_via_rc_channel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, enable_rc_openhd_control);
    _mav_put_uint8_t(buf, 3, mcs_via_rc_channel);
    _mav_put_uint8_t(buf, 4, bw_via_rc_channel);
    _mav_put_uint8_t(buf, 5, tx_mode_via_rc_channel);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS, buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_CRC);
#else
    mavlink_openhd_wifbroadcast_radio_settings_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.enable_rc_openhd_control = enable_rc_openhd_control;
    packet.mcs_via_rc_channel = mcs_via_rc_channel;
    packet.bw_via_rc_channel = bw_via_rc_channel;
    packet.tx_mode_via_rc_channel = tx_mode_via_rc_channel;
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS, (const char *)&packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_CRC);
#endif
}

static inline void mavlink_msg_openhd_wifbroadcast_radio_settings_send_struct(mavlink_channel_t chan, const mavlink_openhd_wifbroadcast_radio_settings_t* openhd_wifbroadcast_radio_settings)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_wifbroadcast_radio_settings_send(chan, openhd_wifbroadcast_radio_settings->target_system, openhd_wifbroadcast_radio_settings->target_component, openhd_wifbroadcast_radio_settings->enable_rc_openhd_control, openhd_wifbroadcast_radio_settings->mcs_via_rc_channel, openhd_wifbroadcast_radio_settings->bw_via_rc_channel, openhd_wifbroadcast_radio_settings->tx_mode_via_rc_channel);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS, (const char *)openhd_wifbroadcast_radio_settings, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_CRC);
#endif
}

#endif

static inline uint8_t mavlink_msg_openhd_wifbroadcast_radio_settings_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

static inline uint8_t mavlink_msg_openhd_wifbroadcast_radio_settings_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

static inline uint8_t mavlink_msg_openhd_wifbroadcast_radio_settings_get_enable_rc_openhd_control(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

static inline uint8_t mavlink_msg_openhd_wifbroadcast_radio_settings_get_mcs_via_rc_channel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

static inline uint8_t mavlink_msg_openhd_wifbroadcast_radio_settings_get_bw_via_rc_channel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

static inline uint8_t mavlink_msg_openhd_wifbroadcast_radio_settings_get_tx_mode_via_rc_channel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

static inline void mavlink_msg_openhd_wifbroadcast_radio_settings_decode(const mavlink_message_t* msg, mavlink_openhd_wifbroadcast_radio_settings_t* openhd_wifbroadcast_radio_settings)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    openhd_wifbroadcast_radio_settings->target_system = mavlink_msg_openhd_wifbroadcast_radio_settings_get_target_system(msg);
    openhd_wifbroadcast_radio_settings->target_component = mavlink_msg_openhd_wifbroadcast_radio_settings_get_target_component(msg);
    openhd_wifbroadcast_radio_settings->enable_rc_openhd_control = mavlink_msg_openhd_wifbroadcast_radio_settings_get_enable_rc_openhd_control(msg);
    openhd_wifbroadcast_radio_settings->mcs_via_rc_channel = mavlink_msg_openhd_wifbroadcast_radio_settings_get_mcs_via_rc_channel(msg);
    openhd_wifbroadcast_radio_settings->bw_via_rc_channel = mavlink_msg_openhd_wifbroadcast_radio_settings_get_bw_via_rc_channel(msg);
    openhd_wifbroadcast_radio_settings->tx_mode_via_rc_channel = mavlink_msg_openhd_wifbroadcast_radio_settings_get_tx_mode_via_rc_channel(msg);
#else
    uint8_t len = msg->len < MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN? msg->len : MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN;
    memset(openhd_wifbroadcast_radio_settings, 0, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_RADIO_SETTINGS_LEN);
    memcpy(openhd_wifbroadcast_radio_settings, _MAV_PAYLOAD(msg), len);
#endif
}
