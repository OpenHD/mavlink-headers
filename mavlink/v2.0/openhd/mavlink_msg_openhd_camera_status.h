#pragma once
// MESSAGE OPENHD_CAMERA_STATUS PACKING

#define MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS 1219


typedef struct __mavlink_openhd_camera_status_t {
 uint16_t encoding_bitrate_kbits; /*<  encoding_bitrate_kbits*/
 uint16_t stream_w; /*<  streamed video width*/
 uint16_t stream_h; /*<  streamed video height*/
 uint16_t stream_fps; /*<  streamed video fps*/
 uint16_t reserved1; /*<  reserved1*/
 uint16_t reserved2; /*<  reserved2*/
 uint8_t cam_index; /*<  0 for primary, 1 for secondary*/
 uint8_t cam_type; /*<  r.n only 0 for rpi csi cam mmal, 1 for rpi csi cam libcamera*/
 uint8_t air_recording_active; /*<  air_recording_active*/
 uint8_t encoding_format; /*<  0 for h264, 1 for h265, 2 for mjpeg*/
 uint8_t encoding_keyframe_interval; /*<  encoding_keyframe_interval*/
} mavlink_openhd_camera_status_t;

#define MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_LEN 17
#define MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_MIN_LEN 17
#define MAVLINK_MSG_ID_1219_LEN 17
#define MAVLINK_MSG_ID_1219_MIN_LEN 17

#define MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_CRC 82
#define MAVLINK_MSG_ID_1219_CRC 82



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPENHD_CAMERA_STATUS { \
    1219, \
    "OPENHD_CAMERA_STATUS", \
    11, \
    {  { "cam_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_openhd_camera_status_t, cam_index) }, \
         { "cam_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_openhd_camera_status_t, cam_type) }, \
         { "air_recording_active", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_openhd_camera_status_t, air_recording_active) }, \
         { "encoding_format", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_openhd_camera_status_t, encoding_format) }, \
         { "encoding_bitrate_kbits", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_openhd_camera_status_t, encoding_bitrate_kbits) }, \
         { "encoding_keyframe_interval", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_openhd_camera_status_t, encoding_keyframe_interval) }, \
         { "stream_w", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_openhd_camera_status_t, stream_w) }, \
         { "stream_h", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_openhd_camera_status_t, stream_h) }, \
         { "stream_fps", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_openhd_camera_status_t, stream_fps) }, \
         { "reserved1", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_openhd_camera_status_t, reserved1) }, \
         { "reserved2", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_openhd_camera_status_t, reserved2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPENHD_CAMERA_STATUS { \
    "OPENHD_CAMERA_STATUS", \
    11, \
    {  { "cam_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_openhd_camera_status_t, cam_index) }, \
         { "cam_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_openhd_camera_status_t, cam_type) }, \
         { "air_recording_active", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_openhd_camera_status_t, air_recording_active) }, \
         { "encoding_format", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_openhd_camera_status_t, encoding_format) }, \
         { "encoding_bitrate_kbits", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_openhd_camera_status_t, encoding_bitrate_kbits) }, \
         { "encoding_keyframe_interval", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_openhd_camera_status_t, encoding_keyframe_interval) }, \
         { "stream_w", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_openhd_camera_status_t, stream_w) }, \
         { "stream_h", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_openhd_camera_status_t, stream_h) }, \
         { "stream_fps", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_openhd_camera_status_t, stream_fps) }, \
         { "reserved1", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_openhd_camera_status_t, reserved1) }, \
         { "reserved2", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_openhd_camera_status_t, reserved2) }, \
         } \
}
#endif

/**
 * @brief Pack a openhd_camera_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param cam_index  0 for primary, 1 for secondary
 * @param cam_type  r.n only 0 for rpi csi cam mmal, 1 for rpi csi cam libcamera
 * @param air_recording_active  air_recording_active
 * @param encoding_format  0 for h264, 1 for h265, 2 for mjpeg
 * @param encoding_bitrate_kbits  encoding_bitrate_kbits
 * @param encoding_keyframe_interval  encoding_keyframe_interval
 * @param stream_w  streamed video width
 * @param stream_h  streamed video height
 * @param stream_fps  streamed video fps
 * @param reserved1  reserved1
 * @param reserved2  reserved2
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_camera_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t cam_index, uint8_t cam_type, uint8_t air_recording_active, uint8_t encoding_format, uint16_t encoding_bitrate_kbits, uint8_t encoding_keyframe_interval, uint16_t stream_w, uint16_t stream_h, uint16_t stream_fps, uint16_t reserved1, uint16_t reserved2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, encoding_bitrate_kbits);
    _mav_put_uint16_t(buf, 2, stream_w);
    _mav_put_uint16_t(buf, 4, stream_h);
    _mav_put_uint16_t(buf, 6, stream_fps);
    _mav_put_uint16_t(buf, 8, reserved1);
    _mav_put_uint16_t(buf, 10, reserved2);
    _mav_put_uint8_t(buf, 12, cam_index);
    _mav_put_uint8_t(buf, 13, cam_type);
    _mav_put_uint8_t(buf, 14, air_recording_active);
    _mav_put_uint8_t(buf, 15, encoding_format);
    _mav_put_uint8_t(buf, 16, encoding_keyframe_interval);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_LEN);
#else
    mavlink_openhd_camera_status_t packet;
    packet.encoding_bitrate_kbits = encoding_bitrate_kbits;
    packet.stream_w = stream_w;
    packet.stream_h = stream_h;
    packet.stream_fps = stream_fps;
    packet.reserved1 = reserved1;
    packet.reserved2 = reserved2;
    packet.cam_index = cam_index;
    packet.cam_type = cam_type;
    packet.air_recording_active = air_recording_active;
    packet.encoding_format = encoding_format;
    packet.encoding_keyframe_interval = encoding_keyframe_interval;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_CRC);
}

/**
 * @brief Pack a openhd_camera_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cam_index  0 for primary, 1 for secondary
 * @param cam_type  r.n only 0 for rpi csi cam mmal, 1 for rpi csi cam libcamera
 * @param air_recording_active  air_recording_active
 * @param encoding_format  0 for h264, 1 for h265, 2 for mjpeg
 * @param encoding_bitrate_kbits  encoding_bitrate_kbits
 * @param encoding_keyframe_interval  encoding_keyframe_interval
 * @param stream_w  streamed video width
 * @param stream_h  streamed video height
 * @param stream_fps  streamed video fps
 * @param reserved1  reserved1
 * @param reserved2  reserved2
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_camera_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t cam_index,uint8_t cam_type,uint8_t air_recording_active,uint8_t encoding_format,uint16_t encoding_bitrate_kbits,uint8_t encoding_keyframe_interval,uint16_t stream_w,uint16_t stream_h,uint16_t stream_fps,uint16_t reserved1,uint16_t reserved2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, encoding_bitrate_kbits);
    _mav_put_uint16_t(buf, 2, stream_w);
    _mav_put_uint16_t(buf, 4, stream_h);
    _mav_put_uint16_t(buf, 6, stream_fps);
    _mav_put_uint16_t(buf, 8, reserved1);
    _mav_put_uint16_t(buf, 10, reserved2);
    _mav_put_uint8_t(buf, 12, cam_index);
    _mav_put_uint8_t(buf, 13, cam_type);
    _mav_put_uint8_t(buf, 14, air_recording_active);
    _mav_put_uint8_t(buf, 15, encoding_format);
    _mav_put_uint8_t(buf, 16, encoding_keyframe_interval);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_LEN);
#else
    mavlink_openhd_camera_status_t packet;
    packet.encoding_bitrate_kbits = encoding_bitrate_kbits;
    packet.stream_w = stream_w;
    packet.stream_h = stream_h;
    packet.stream_fps = stream_fps;
    packet.reserved1 = reserved1;
    packet.reserved2 = reserved2;
    packet.cam_index = cam_index;
    packet.cam_type = cam_type;
    packet.air_recording_active = air_recording_active;
    packet.encoding_format = encoding_format;
    packet.encoding_keyframe_interval = encoding_keyframe_interval;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_CRC);
}

/**
 * @brief Encode a openhd_camera_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param openhd_camera_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_camera_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_openhd_camera_status_t* openhd_camera_status)
{
    return mavlink_msg_openhd_camera_status_pack(system_id, component_id, msg, openhd_camera_status->cam_index, openhd_camera_status->cam_type, openhd_camera_status->air_recording_active, openhd_camera_status->encoding_format, openhd_camera_status->encoding_bitrate_kbits, openhd_camera_status->encoding_keyframe_interval, openhd_camera_status->stream_w, openhd_camera_status->stream_h, openhd_camera_status->stream_fps, openhd_camera_status->reserved1, openhd_camera_status->reserved2);
}

/**
 * @brief Encode a openhd_camera_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param openhd_camera_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_camera_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_openhd_camera_status_t* openhd_camera_status)
{
    return mavlink_msg_openhd_camera_status_pack_chan(system_id, component_id, chan, msg, openhd_camera_status->cam_index, openhd_camera_status->cam_type, openhd_camera_status->air_recording_active, openhd_camera_status->encoding_format, openhd_camera_status->encoding_bitrate_kbits, openhd_camera_status->encoding_keyframe_interval, openhd_camera_status->stream_w, openhd_camera_status->stream_h, openhd_camera_status->stream_fps, openhd_camera_status->reserved1, openhd_camera_status->reserved2);
}

/**
 * @brief Send a openhd_camera_status message
 * @param chan MAVLink channel to send the message
 *
 * @param cam_index  0 for primary, 1 for secondary
 * @param cam_type  r.n only 0 for rpi csi cam mmal, 1 for rpi csi cam libcamera
 * @param air_recording_active  air_recording_active
 * @param encoding_format  0 for h264, 1 for h265, 2 for mjpeg
 * @param encoding_bitrate_kbits  encoding_bitrate_kbits
 * @param encoding_keyframe_interval  encoding_keyframe_interval
 * @param stream_w  streamed video width
 * @param stream_h  streamed video height
 * @param stream_fps  streamed video fps
 * @param reserved1  reserved1
 * @param reserved2  reserved2
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_openhd_camera_status_send(mavlink_channel_t chan, uint8_t cam_index, uint8_t cam_type, uint8_t air_recording_active, uint8_t encoding_format, uint16_t encoding_bitrate_kbits, uint8_t encoding_keyframe_interval, uint16_t stream_w, uint16_t stream_h, uint16_t stream_fps, uint16_t reserved1, uint16_t reserved2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, encoding_bitrate_kbits);
    _mav_put_uint16_t(buf, 2, stream_w);
    _mav_put_uint16_t(buf, 4, stream_h);
    _mav_put_uint16_t(buf, 6, stream_fps);
    _mav_put_uint16_t(buf, 8, reserved1);
    _mav_put_uint16_t(buf, 10, reserved2);
    _mav_put_uint8_t(buf, 12, cam_index);
    _mav_put_uint8_t(buf, 13, cam_type);
    _mav_put_uint8_t(buf, 14, air_recording_active);
    _mav_put_uint8_t(buf, 15, encoding_format);
    _mav_put_uint8_t(buf, 16, encoding_keyframe_interval);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS, buf, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_CRC);
#else
    mavlink_openhd_camera_status_t packet;
    packet.encoding_bitrate_kbits = encoding_bitrate_kbits;
    packet.stream_w = stream_w;
    packet.stream_h = stream_h;
    packet.stream_fps = stream_fps;
    packet.reserved1 = reserved1;
    packet.reserved2 = reserved2;
    packet.cam_index = cam_index;
    packet.cam_type = cam_type;
    packet.air_recording_active = air_recording_active;
    packet.encoding_format = encoding_format;
    packet.encoding_keyframe_interval = encoding_keyframe_interval;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS, (const char *)&packet, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_CRC);
#endif
}

/**
 * @brief Send a openhd_camera_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_openhd_camera_status_send_struct(mavlink_channel_t chan, const mavlink_openhd_camera_status_t* openhd_camera_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_camera_status_send(chan, openhd_camera_status->cam_index, openhd_camera_status->cam_type, openhd_camera_status->air_recording_active, openhd_camera_status->encoding_format, openhd_camera_status->encoding_bitrate_kbits, openhd_camera_status->encoding_keyframe_interval, openhd_camera_status->stream_w, openhd_camera_status->stream_h, openhd_camera_status->stream_fps, openhd_camera_status->reserved1, openhd_camera_status->reserved2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS, (const char *)openhd_camera_status, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_openhd_camera_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t cam_index, uint8_t cam_type, uint8_t air_recording_active, uint8_t encoding_format, uint16_t encoding_bitrate_kbits, uint8_t encoding_keyframe_interval, uint16_t stream_w, uint16_t stream_h, uint16_t stream_fps, uint16_t reserved1, uint16_t reserved2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, encoding_bitrate_kbits);
    _mav_put_uint16_t(buf, 2, stream_w);
    _mav_put_uint16_t(buf, 4, stream_h);
    _mav_put_uint16_t(buf, 6, stream_fps);
    _mav_put_uint16_t(buf, 8, reserved1);
    _mav_put_uint16_t(buf, 10, reserved2);
    _mav_put_uint8_t(buf, 12, cam_index);
    _mav_put_uint8_t(buf, 13, cam_type);
    _mav_put_uint8_t(buf, 14, air_recording_active);
    _mav_put_uint8_t(buf, 15, encoding_format);
    _mav_put_uint8_t(buf, 16, encoding_keyframe_interval);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS, buf, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_CRC);
#else
    mavlink_openhd_camera_status_t *packet = (mavlink_openhd_camera_status_t *)msgbuf;
    packet->encoding_bitrate_kbits = encoding_bitrate_kbits;
    packet->stream_w = stream_w;
    packet->stream_h = stream_h;
    packet->stream_fps = stream_fps;
    packet->reserved1 = reserved1;
    packet->reserved2 = reserved2;
    packet->cam_index = cam_index;
    packet->cam_type = cam_type;
    packet->air_recording_active = air_recording_active;
    packet->encoding_format = encoding_format;
    packet->encoding_keyframe_interval = encoding_keyframe_interval;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS, (const char *)packet, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE OPENHD_CAMERA_STATUS UNPACKING


/**
 * @brief Get field cam_index from openhd_camera_status message
 *
 * @return  0 for primary, 1 for secondary
 */
static inline uint8_t mavlink_msg_openhd_camera_status_get_cam_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field cam_type from openhd_camera_status message
 *
 * @return  r.n only 0 for rpi csi cam mmal, 1 for rpi csi cam libcamera
 */
static inline uint8_t mavlink_msg_openhd_camera_status_get_cam_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field air_recording_active from openhd_camera_status message
 *
 * @return  air_recording_active
 */
static inline uint8_t mavlink_msg_openhd_camera_status_get_air_recording_active(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field encoding_format from openhd_camera_status message
 *
 * @return  0 for h264, 1 for h265, 2 for mjpeg
 */
static inline uint8_t mavlink_msg_openhd_camera_status_get_encoding_format(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  15);
}

/**
 * @brief Get field encoding_bitrate_kbits from openhd_camera_status message
 *
 * @return  encoding_bitrate_kbits
 */
static inline uint16_t mavlink_msg_openhd_camera_status_get_encoding_bitrate_kbits(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field encoding_keyframe_interval from openhd_camera_status message
 *
 * @return  encoding_keyframe_interval
 */
static inline uint8_t mavlink_msg_openhd_camera_status_get_encoding_keyframe_interval(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field stream_w from openhd_camera_status message
 *
 * @return  streamed video width
 */
static inline uint16_t mavlink_msg_openhd_camera_status_get_stream_w(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field stream_h from openhd_camera_status message
 *
 * @return  streamed video height
 */
static inline uint16_t mavlink_msg_openhd_camera_status_get_stream_h(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field stream_fps from openhd_camera_status message
 *
 * @return  streamed video fps
 */
static inline uint16_t mavlink_msg_openhd_camera_status_get_stream_fps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field reserved1 from openhd_camera_status message
 *
 * @return  reserved1
 */
static inline uint16_t mavlink_msg_openhd_camera_status_get_reserved1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field reserved2 from openhd_camera_status message
 *
 * @return  reserved2
 */
static inline uint16_t mavlink_msg_openhd_camera_status_get_reserved2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Decode a openhd_camera_status message into a struct
 *
 * @param msg The message to decode
 * @param openhd_camera_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_openhd_camera_status_decode(const mavlink_message_t* msg, mavlink_openhd_camera_status_t* openhd_camera_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    openhd_camera_status->encoding_bitrate_kbits = mavlink_msg_openhd_camera_status_get_encoding_bitrate_kbits(msg);
    openhd_camera_status->stream_w = mavlink_msg_openhd_camera_status_get_stream_w(msg);
    openhd_camera_status->stream_h = mavlink_msg_openhd_camera_status_get_stream_h(msg);
    openhd_camera_status->stream_fps = mavlink_msg_openhd_camera_status_get_stream_fps(msg);
    openhd_camera_status->reserved1 = mavlink_msg_openhd_camera_status_get_reserved1(msg);
    openhd_camera_status->reserved2 = mavlink_msg_openhd_camera_status_get_reserved2(msg);
    openhd_camera_status->cam_index = mavlink_msg_openhd_camera_status_get_cam_index(msg);
    openhd_camera_status->cam_type = mavlink_msg_openhd_camera_status_get_cam_type(msg);
    openhd_camera_status->air_recording_active = mavlink_msg_openhd_camera_status_get_air_recording_active(msg);
    openhd_camera_status->encoding_format = mavlink_msg_openhd_camera_status_get_encoding_format(msg);
    openhd_camera_status->encoding_keyframe_interval = mavlink_msg_openhd_camera_status_get_encoding_keyframe_interval(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_LEN? msg->len : MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_LEN;
        memset(openhd_camera_status, 0, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_LEN);
    memcpy(openhd_camera_status, _MAV_PAYLOAD(msg), len);
#endif
}
