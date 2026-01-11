#pragma once
// MESSAGE OPENHD_CORE_STATUS PACKING

#define MAVLINK_MSG_ID_OPENHD_CORE_STATUS 1227


typedef struct __mavlink_openhd_core_status_t {
 uint32_t storage_left_mb; /*< [MiB] Storage space left*/
 uint16_t cpu_clock; /*< [MHz] CPU clock*/
 uint16_t isp_clock; /*< [MHz] ISP clock*/
 uint16_t h264_clock; /*< [MHz] H264 clock*/
 uint16_t core_clock; /*< [MHz] Core clock*/
 uint16_t v3d_clock; /*< [MHz] V3D clock*/
 int8_t cpu_temp; /*< [degC] CPU temperature*/
 int8_t wifi0_temp; /*< [degC] Wifi card 0 temperature*/
 int8_t wifi1_temp; /*< [degC] Wifi card 1 temperature*/
 uint8_t undervolt_status; /*<  Undervolt status (0=false, 1=true)*/
 uint8_t platform_type; /*<  Platform type*/
 uint8_t encryption_enabled; /*<  Encryption enabled (0=false, 1=true)*/
 uint8_t fc_sys_id; /*<  Flight controller system ID*/
 uint8_t operating_mode; /*<  Operating mode*/
} mavlink_openhd_core_status_t;

#define MAVLINK_MSG_ID_OPENHD_CORE_STATUS_LEN 22
#define MAVLINK_MSG_ID_OPENHD_CORE_STATUS_MIN_LEN 22
#define MAVLINK_MSG_ID_1227_LEN 22
#define MAVLINK_MSG_ID_1227_MIN_LEN 22

#define MAVLINK_MSG_ID_OPENHD_CORE_STATUS_CRC 59
#define MAVLINK_MSG_ID_1227_CRC 59



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPENHD_CORE_STATUS { \
    1227, \
    "OPENHD_CORE_STATUS", \
    14, \
    {  { "cpu_temp", NULL, MAVLINK_TYPE_INT8_T, 0, 14, offsetof(mavlink_openhd_core_status_t, cpu_temp) }, \
         { "wifi0_temp", NULL, MAVLINK_TYPE_INT8_T, 0, 15, offsetof(mavlink_openhd_core_status_t, wifi0_temp) }, \
         { "wifi1_temp", NULL, MAVLINK_TYPE_INT8_T, 0, 16, offsetof(mavlink_openhd_core_status_t, wifi1_temp) }, \
         { "cpu_clock", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_openhd_core_status_t, cpu_clock) }, \
         { "isp_clock", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_openhd_core_status_t, isp_clock) }, \
         { "h264_clock", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_openhd_core_status_t, h264_clock) }, \
         { "core_clock", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_openhd_core_status_t, core_clock) }, \
         { "v3d_clock", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_openhd_core_status_t, v3d_clock) }, \
         { "storage_left_mb", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_openhd_core_status_t, storage_left_mb) }, \
         { "undervolt_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_openhd_core_status_t, undervolt_status) }, \
         { "platform_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_openhd_core_status_t, platform_type) }, \
         { "encryption_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_openhd_core_status_t, encryption_enabled) }, \
         { "fc_sys_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_openhd_core_status_t, fc_sys_id) }, \
         { "operating_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_openhd_core_status_t, operating_mode) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPENHD_CORE_STATUS { \
    "OPENHD_CORE_STATUS", \
    14, \
    {  { "cpu_temp", NULL, MAVLINK_TYPE_INT8_T, 0, 14, offsetof(mavlink_openhd_core_status_t, cpu_temp) }, \
         { "wifi0_temp", NULL, MAVLINK_TYPE_INT8_T, 0, 15, offsetof(mavlink_openhd_core_status_t, wifi0_temp) }, \
         { "wifi1_temp", NULL, MAVLINK_TYPE_INT8_T, 0, 16, offsetof(mavlink_openhd_core_status_t, wifi1_temp) }, \
         { "cpu_clock", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_openhd_core_status_t, cpu_clock) }, \
         { "isp_clock", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_openhd_core_status_t, isp_clock) }, \
         { "h264_clock", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_openhd_core_status_t, h264_clock) }, \
         { "core_clock", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_openhd_core_status_t, core_clock) }, \
         { "v3d_clock", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_openhd_core_status_t, v3d_clock) }, \
         { "storage_left_mb", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_openhd_core_status_t, storage_left_mb) }, \
         { "undervolt_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_openhd_core_status_t, undervolt_status) }, \
         { "platform_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_openhd_core_status_t, platform_type) }, \
         { "encryption_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_openhd_core_status_t, encryption_enabled) }, \
         { "fc_sys_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_openhd_core_status_t, fc_sys_id) }, \
         { "operating_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_openhd_core_status_t, operating_mode) }, \
         } \
}
#endif

/**
 * @brief Pack a openhd_core_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param cpu_temp [degC] CPU temperature
 * @param wifi0_temp [degC] Wifi card 0 temperature
 * @param wifi1_temp [degC] Wifi card 1 temperature
 * @param cpu_clock [MHz] CPU clock
 * @param isp_clock [MHz] ISP clock
 * @param h264_clock [MHz] H264 clock
 * @param core_clock [MHz] Core clock
 * @param v3d_clock [MHz] V3D clock
 * @param storage_left_mb [MiB] Storage space left
 * @param undervolt_status  Undervolt status (0=false, 1=true)
 * @param platform_type  Platform type
 * @param encryption_enabled  Encryption enabled (0=false, 1=true)
 * @param fc_sys_id  Flight controller system ID
 * @param operating_mode  Operating mode
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_core_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int8_t cpu_temp, int8_t wifi0_temp, int8_t wifi1_temp, uint16_t cpu_clock, uint16_t isp_clock, uint16_t h264_clock, uint16_t core_clock, uint16_t v3d_clock, uint32_t storage_left_mb, uint8_t undervolt_status, uint8_t platform_type, uint8_t encryption_enabled, uint8_t fc_sys_id, uint8_t operating_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_CORE_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, storage_left_mb);
    _mav_put_uint16_t(buf, 4, cpu_clock);
    _mav_put_uint16_t(buf, 6, isp_clock);
    _mav_put_uint16_t(buf, 8, h264_clock);
    _mav_put_uint16_t(buf, 10, core_clock);
    _mav_put_uint16_t(buf, 12, v3d_clock);
    _mav_put_int8_t(buf, 14, cpu_temp);
    _mav_put_int8_t(buf, 15, wifi0_temp);
    _mav_put_int8_t(buf, 16, wifi1_temp);
    _mav_put_uint8_t(buf, 17, undervolt_status);
    _mav_put_uint8_t(buf, 18, platform_type);
    _mav_put_uint8_t(buf, 19, encryption_enabled);
    _mav_put_uint8_t(buf, 20, fc_sys_id);
    _mav_put_uint8_t(buf, 21, operating_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_LEN);
#else
    mavlink_openhd_core_status_t packet;
    packet.storage_left_mb = storage_left_mb;
    packet.cpu_clock = cpu_clock;
    packet.isp_clock = isp_clock;
    packet.h264_clock = h264_clock;
    packet.core_clock = core_clock;
    packet.v3d_clock = v3d_clock;
    packet.cpu_temp = cpu_temp;
    packet.wifi0_temp = wifi0_temp;
    packet.wifi1_temp = wifi1_temp;
    packet.undervolt_status = undervolt_status;
    packet.platform_type = platform_type;
    packet.encryption_enabled = encryption_enabled;
    packet.fc_sys_id = fc_sys_id;
    packet.operating_mode = operating_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_CORE_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_CRC);
}

/**
 * @brief Pack a openhd_core_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cpu_temp [degC] CPU temperature
 * @param wifi0_temp [degC] Wifi card 0 temperature
 * @param wifi1_temp [degC] Wifi card 1 temperature
 * @param cpu_clock [MHz] CPU clock
 * @param isp_clock [MHz] ISP clock
 * @param h264_clock [MHz] H264 clock
 * @param core_clock [MHz] Core clock
 * @param v3d_clock [MHz] V3D clock
 * @param storage_left_mb [MiB] Storage space left
 * @param undervolt_status  Undervolt status (0=false, 1=true)
 * @param platform_type  Platform type
 * @param encryption_enabled  Encryption enabled (0=false, 1=true)
 * @param fc_sys_id  Flight controller system ID
 * @param operating_mode  Operating mode
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_core_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int8_t cpu_temp,int8_t wifi0_temp,int8_t wifi1_temp,uint16_t cpu_clock,uint16_t isp_clock,uint16_t h264_clock,uint16_t core_clock,uint16_t v3d_clock,uint32_t storage_left_mb,uint8_t undervolt_status,uint8_t platform_type,uint8_t encryption_enabled,uint8_t fc_sys_id,uint8_t operating_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_CORE_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, storage_left_mb);
    _mav_put_uint16_t(buf, 4, cpu_clock);
    _mav_put_uint16_t(buf, 6, isp_clock);
    _mav_put_uint16_t(buf, 8, h264_clock);
    _mav_put_uint16_t(buf, 10, core_clock);
    _mav_put_uint16_t(buf, 12, v3d_clock);
    _mav_put_int8_t(buf, 14, cpu_temp);
    _mav_put_int8_t(buf, 15, wifi0_temp);
    _mav_put_int8_t(buf, 16, wifi1_temp);
    _mav_put_uint8_t(buf, 17, undervolt_status);
    _mav_put_uint8_t(buf, 18, platform_type);
    _mav_put_uint8_t(buf, 19, encryption_enabled);
    _mav_put_uint8_t(buf, 20, fc_sys_id);
    _mav_put_uint8_t(buf, 21, operating_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_LEN);
#else
    mavlink_openhd_core_status_t packet;
    packet.storage_left_mb = storage_left_mb;
    packet.cpu_clock = cpu_clock;
    packet.isp_clock = isp_clock;
    packet.h264_clock = h264_clock;
    packet.core_clock = core_clock;
    packet.v3d_clock = v3d_clock;
    packet.cpu_temp = cpu_temp;
    packet.wifi0_temp = wifi0_temp;
    packet.wifi1_temp = wifi1_temp;
    packet.undervolt_status = undervolt_status;
    packet.platform_type = platform_type;
    packet.encryption_enabled = encryption_enabled;
    packet.fc_sys_id = fc_sys_id;
    packet.operating_mode = operating_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_CORE_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_CRC);
}

/**
 * @brief Encode a openhd_core_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param openhd_core_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_core_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_openhd_core_status_t* openhd_core_status)
{
    return mavlink_msg_openhd_core_status_pack(system_id, component_id, msg, openhd_core_status->cpu_temp, openhd_core_status->wifi0_temp, openhd_core_status->wifi1_temp, openhd_core_status->cpu_clock, openhd_core_status->isp_clock, openhd_core_status->h264_clock, openhd_core_status->core_clock, openhd_core_status->v3d_clock, openhd_core_status->storage_left_mb, openhd_core_status->undervolt_status, openhd_core_status->platform_type, openhd_core_status->encryption_enabled, openhd_core_status->fc_sys_id, openhd_core_status->operating_mode);
}

/**
 * @brief Encode a openhd_core_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param openhd_core_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_core_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_openhd_core_status_t* openhd_core_status)
{
    return mavlink_msg_openhd_core_status_pack_chan(system_id, component_id, chan, msg, openhd_core_status->cpu_temp, openhd_core_status->wifi0_temp, openhd_core_status->wifi1_temp, openhd_core_status->cpu_clock, openhd_core_status->isp_clock, openhd_core_status->h264_clock, openhd_core_status->core_clock, openhd_core_status->v3d_clock, openhd_core_status->storage_left_mb, openhd_core_status->undervolt_status, openhd_core_status->platform_type, openhd_core_status->encryption_enabled, openhd_core_status->fc_sys_id, openhd_core_status->operating_mode);
}

/**
 * @brief Send a openhd_core_status message
 * @param chan MAVLink channel to send the message
 *
 * @param cpu_temp [degC] CPU temperature
 * @param wifi0_temp [degC] Wifi card 0 temperature
 * @param wifi1_temp [degC] Wifi card 1 temperature
 * @param cpu_clock [MHz] CPU clock
 * @param isp_clock [MHz] ISP clock
 * @param h264_clock [MHz] H264 clock
 * @param core_clock [MHz] Core clock
 * @param v3d_clock [MHz] V3D clock
 * @param storage_left_mb [MiB] Storage space left
 * @param undervolt_status  Undervolt status (0=false, 1=true)
 * @param platform_type  Platform type
 * @param encryption_enabled  Encryption enabled (0=false, 1=true)
 * @param fc_sys_id  Flight controller system ID
 * @param operating_mode  Operating mode
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_openhd_core_status_send(mavlink_channel_t chan, int8_t cpu_temp, int8_t wifi0_temp, int8_t wifi1_temp, uint16_t cpu_clock, uint16_t isp_clock, uint16_t h264_clock, uint16_t core_clock, uint16_t v3d_clock, uint32_t storage_left_mb, uint8_t undervolt_status, uint8_t platform_type, uint8_t encryption_enabled, uint8_t fc_sys_id, uint8_t operating_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_CORE_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, storage_left_mb);
    _mav_put_uint16_t(buf, 4, cpu_clock);
    _mav_put_uint16_t(buf, 6, isp_clock);
    _mav_put_uint16_t(buf, 8, h264_clock);
    _mav_put_uint16_t(buf, 10, core_clock);
    _mav_put_uint16_t(buf, 12, v3d_clock);
    _mav_put_int8_t(buf, 14, cpu_temp);
    _mav_put_int8_t(buf, 15, wifi0_temp);
    _mav_put_int8_t(buf, 16, wifi1_temp);
    _mav_put_uint8_t(buf, 17, undervolt_status);
    _mav_put_uint8_t(buf, 18, platform_type);
    _mav_put_uint8_t(buf, 19, encryption_enabled);
    _mav_put_uint8_t(buf, 20, fc_sys_id);
    _mav_put_uint8_t(buf, 21, operating_mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_CORE_STATUS, buf, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_CRC);
#else
    mavlink_openhd_core_status_t packet;
    packet.storage_left_mb = storage_left_mb;
    packet.cpu_clock = cpu_clock;
    packet.isp_clock = isp_clock;
    packet.h264_clock = h264_clock;
    packet.core_clock = core_clock;
    packet.v3d_clock = v3d_clock;
    packet.cpu_temp = cpu_temp;
    packet.wifi0_temp = wifi0_temp;
    packet.wifi1_temp = wifi1_temp;
    packet.undervolt_status = undervolt_status;
    packet.platform_type = platform_type;
    packet.encryption_enabled = encryption_enabled;
    packet.fc_sys_id = fc_sys_id;
    packet.operating_mode = operating_mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_CORE_STATUS, (const char *)&packet, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_CRC);
#endif
}

/**
 * @brief Send a openhd_core_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_openhd_core_status_send_struct(mavlink_channel_t chan, const mavlink_openhd_core_status_t* openhd_core_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_core_status_send(chan, openhd_core_status->cpu_temp, openhd_core_status->wifi0_temp, openhd_core_status->wifi1_temp, openhd_core_status->cpu_clock, openhd_core_status->isp_clock, openhd_core_status->h264_clock, openhd_core_status->core_clock, openhd_core_status->v3d_clock, openhd_core_status->storage_left_mb, openhd_core_status->undervolt_status, openhd_core_status->platform_type, openhd_core_status->encryption_enabled, openhd_core_status->fc_sys_id, openhd_core_status->operating_mode);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_CORE_STATUS, (const char *)openhd_core_status, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPENHD_CORE_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_openhd_core_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int8_t cpu_temp, int8_t wifi0_temp, int8_t wifi1_temp, uint16_t cpu_clock, uint16_t isp_clock, uint16_t h264_clock, uint16_t core_clock, uint16_t v3d_clock, uint32_t storage_left_mb, uint8_t undervolt_status, uint8_t platform_type, uint8_t encryption_enabled, uint8_t fc_sys_id, uint8_t operating_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, storage_left_mb);
    _mav_put_uint16_t(buf, 4, cpu_clock);
    _mav_put_uint16_t(buf, 6, isp_clock);
    _mav_put_uint16_t(buf, 8, h264_clock);
    _mav_put_uint16_t(buf, 10, core_clock);
    _mav_put_uint16_t(buf, 12, v3d_clock);
    _mav_put_int8_t(buf, 14, cpu_temp);
    _mav_put_int8_t(buf, 15, wifi0_temp);
    _mav_put_int8_t(buf, 16, wifi1_temp);
    _mav_put_uint8_t(buf, 17, undervolt_status);
    _mav_put_uint8_t(buf, 18, platform_type);
    _mav_put_uint8_t(buf, 19, encryption_enabled);
    _mav_put_uint8_t(buf, 20, fc_sys_id);
    _mav_put_uint8_t(buf, 21, operating_mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_CORE_STATUS, buf, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_CRC);
#else
    mavlink_openhd_core_status_t *packet = (mavlink_openhd_core_status_t *)msgbuf;
    packet->storage_left_mb = storage_left_mb;
    packet->cpu_clock = cpu_clock;
    packet->isp_clock = isp_clock;
    packet->h264_clock = h264_clock;
    packet->core_clock = core_clock;
    packet->v3d_clock = v3d_clock;
    packet->cpu_temp = cpu_temp;
    packet->wifi0_temp = wifi0_temp;
    packet->wifi1_temp = wifi1_temp;
    packet->undervolt_status = undervolt_status;
    packet->platform_type = platform_type;
    packet->encryption_enabled = encryption_enabled;
    packet->fc_sys_id = fc_sys_id;
    packet->operating_mode = operating_mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_CORE_STATUS, (const char *)packet, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE OPENHD_CORE_STATUS UNPACKING


/**
 * @brief Get field cpu_temp from openhd_core_status message
 *
 * @return [degC] CPU temperature
 */
static inline int8_t mavlink_msg_openhd_core_status_get_cpu_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  14);
}

/**
 * @brief Get field wifi0_temp from openhd_core_status message
 *
 * @return [degC] Wifi card 0 temperature
 */
static inline int8_t mavlink_msg_openhd_core_status_get_wifi0_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  15);
}

/**
 * @brief Get field wifi1_temp from openhd_core_status message
 *
 * @return [degC] Wifi card 1 temperature
 */
static inline int8_t mavlink_msg_openhd_core_status_get_wifi1_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  16);
}

/**
 * @brief Get field cpu_clock from openhd_core_status message
 *
 * @return [MHz] CPU clock
 */
static inline uint16_t mavlink_msg_openhd_core_status_get_cpu_clock(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field isp_clock from openhd_core_status message
 *
 * @return [MHz] ISP clock
 */
static inline uint16_t mavlink_msg_openhd_core_status_get_isp_clock(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field h264_clock from openhd_core_status message
 *
 * @return [MHz] H264 clock
 */
static inline uint16_t mavlink_msg_openhd_core_status_get_h264_clock(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field core_clock from openhd_core_status message
 *
 * @return [MHz] Core clock
 */
static inline uint16_t mavlink_msg_openhd_core_status_get_core_clock(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field v3d_clock from openhd_core_status message
 *
 * @return [MHz] V3D clock
 */
static inline uint16_t mavlink_msg_openhd_core_status_get_v3d_clock(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field storage_left_mb from openhd_core_status message
 *
 * @return [MiB] Storage space left
 */
static inline uint32_t mavlink_msg_openhd_core_status_get_storage_left_mb(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field undervolt_status from openhd_core_status message
 *
 * @return  Undervolt status (0=false, 1=true)
 */
static inline uint8_t mavlink_msg_openhd_core_status_get_undervolt_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field platform_type from openhd_core_status message
 *
 * @return  Platform type
 */
static inline uint8_t mavlink_msg_openhd_core_status_get_platform_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field encryption_enabled from openhd_core_status message
 *
 * @return  Encryption enabled (0=false, 1=true)
 */
static inline uint8_t mavlink_msg_openhd_core_status_get_encryption_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  19);
}

/**
 * @brief Get field fc_sys_id from openhd_core_status message
 *
 * @return  Flight controller system ID
 */
static inline uint8_t mavlink_msg_openhd_core_status_get_fc_sys_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field operating_mode from openhd_core_status message
 *
 * @return  Operating mode
 */
static inline uint8_t mavlink_msg_openhd_core_status_get_operating_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  21);
}

/**
 * @brief Decode a openhd_core_status message into a struct
 *
 * @param msg The message to decode
 * @param openhd_core_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_openhd_core_status_decode(const mavlink_message_t* msg, mavlink_openhd_core_status_t* openhd_core_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    openhd_core_status->storage_left_mb = mavlink_msg_openhd_core_status_get_storage_left_mb(msg);
    openhd_core_status->cpu_clock = mavlink_msg_openhd_core_status_get_cpu_clock(msg);
    openhd_core_status->isp_clock = mavlink_msg_openhd_core_status_get_isp_clock(msg);
    openhd_core_status->h264_clock = mavlink_msg_openhd_core_status_get_h264_clock(msg);
    openhd_core_status->core_clock = mavlink_msg_openhd_core_status_get_core_clock(msg);
    openhd_core_status->v3d_clock = mavlink_msg_openhd_core_status_get_v3d_clock(msg);
    openhd_core_status->cpu_temp = mavlink_msg_openhd_core_status_get_cpu_temp(msg);
    openhd_core_status->wifi0_temp = mavlink_msg_openhd_core_status_get_wifi0_temp(msg);
    openhd_core_status->wifi1_temp = mavlink_msg_openhd_core_status_get_wifi1_temp(msg);
    openhd_core_status->undervolt_status = mavlink_msg_openhd_core_status_get_undervolt_status(msg);
    openhd_core_status->platform_type = mavlink_msg_openhd_core_status_get_platform_type(msg);
    openhd_core_status->encryption_enabled = mavlink_msg_openhd_core_status_get_encryption_enabled(msg);
    openhd_core_status->fc_sys_id = mavlink_msg_openhd_core_status_get_fc_sys_id(msg);
    openhd_core_status->operating_mode = mavlink_msg_openhd_core_status_get_operating_mode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OPENHD_CORE_STATUS_LEN? msg->len : MAVLINK_MSG_ID_OPENHD_CORE_STATUS_LEN;
        memset(openhd_core_status, 0, MAVLINK_MSG_ID_OPENHD_CORE_STATUS_LEN);
    memcpy(openhd_core_status, _MAV_PAYLOAD(msg), len);
#endif
}
