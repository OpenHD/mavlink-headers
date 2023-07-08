#pragma once
// MESSAGE OPENHD_STATS_WB_VIDEO_AIR PACKING

#define MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR 1214


typedef struct __mavlink_openhd_stats_wb_video_air_t {
 uint64_t dummy3; /*<  for future use*/
 int32_t curr_recommended_bitrate; /*<  curr_recommended_bitrate*/
 int32_t curr_measured_encoder_bitrate; /*<  curr_measured_encoder_bitrate*/
 int32_t curr_injected_bitrate; /*<  curr_injected_bitrate (+FEC overhead)*/
 int32_t curr_injected_pps; /*<  curr_injected_pps*/
 int32_t curr_dropped_packets; /*<  curr_dropped_packets*/
 uint32_t curr_fec_encode_time_avg_us; /*<  curr_fec_encode_time_avg_us*/
 uint32_t curr_fec_encode_time_min_us; /*<  curr_fec_encode_time_min_us*/
 uint32_t curr_fec_encode_time_max_us; /*<  curr_fec_encode_time_max_us*/
 int32_t dummy1; /*<  for future use*/
 int32_t dummy2; /*<  for future use*/
 uint16_t curr_fec_block_size_avg; /*<  curr_fec_block_size_avg*/
 uint16_t curr_fec_block_size_min; /*<  curr_fec_block_size_min*/
 uint16_t curr_fec_block_size_max; /*<  curr_fec_block_size_max*/
 int16_t curr_fec_percentage; /*<  curr_fec_percentage*/
 int16_t curr_keyframe_interval; /*<  curr_keyframe_interval*/
 uint8_t link_index; /*<  link_index*/
 uint8_t curr_video_codec; /*<  curr_video_codec*/
 uint8_t recording_active; /*<  recording_active*/
 int8_t dummy0; /*<  for future use*/
} mavlink_openhd_stats_wb_video_air_t;

#define MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN 62
#define MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_MIN_LEN 62
#define MAVLINK_MSG_ID_1214_LEN 62
#define MAVLINK_MSG_ID_1214_MIN_LEN 62

#define MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_CRC 15
#define MAVLINK_MSG_ID_1214_CRC 15



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPENHD_STATS_WB_VIDEO_AIR { \
    1214, \
    "OPENHD_STATS_WB_VIDEO_AIR", \
    20, \
    {  { "link_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 58, offsetof(mavlink_openhd_stats_wb_video_air_t, link_index) }, \
         { "curr_video_codec", NULL, MAVLINK_TYPE_UINT8_T, 0, 59, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_video_codec) }, \
         { "curr_recommended_bitrate", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_recommended_bitrate) }, \
         { "curr_measured_encoder_bitrate", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_measured_encoder_bitrate) }, \
         { "curr_injected_bitrate", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_injected_bitrate) }, \
         { "curr_injected_pps", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_injected_pps) }, \
         { "curr_dropped_packets", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_dropped_packets) }, \
         { "curr_fec_encode_time_avg_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 28, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_fec_encode_time_avg_us) }, \
         { "curr_fec_encode_time_min_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 32, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_fec_encode_time_min_us) }, \
         { "curr_fec_encode_time_max_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 36, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_fec_encode_time_max_us) }, \
         { "curr_fec_block_size_avg", NULL, MAVLINK_TYPE_UINT16_T, 0, 48, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_fec_block_size_avg) }, \
         { "curr_fec_block_size_min", NULL, MAVLINK_TYPE_UINT16_T, 0, 50, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_fec_block_size_min) }, \
         { "curr_fec_block_size_max", NULL, MAVLINK_TYPE_UINT16_T, 0, 52, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_fec_block_size_max) }, \
         { "curr_fec_percentage", NULL, MAVLINK_TYPE_INT16_T, 0, 54, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_fec_percentage) }, \
         { "curr_keyframe_interval", NULL, MAVLINK_TYPE_INT16_T, 0, 56, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_keyframe_interval) }, \
         { "recording_active", NULL, MAVLINK_TYPE_UINT8_T, 0, 60, offsetof(mavlink_openhd_stats_wb_video_air_t, recording_active) }, \
         { "dummy0", NULL, MAVLINK_TYPE_INT8_T, 0, 61, offsetof(mavlink_openhd_stats_wb_video_air_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT32_T, 0, 40, offsetof(mavlink_openhd_stats_wb_video_air_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 44, offsetof(mavlink_openhd_stats_wb_video_air_t, dummy2) }, \
         { "dummy3", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_openhd_stats_wb_video_air_t, dummy3) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPENHD_STATS_WB_VIDEO_AIR { \
    "OPENHD_STATS_WB_VIDEO_AIR", \
    20, \
    {  { "link_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 58, offsetof(mavlink_openhd_stats_wb_video_air_t, link_index) }, \
         { "curr_video_codec", NULL, MAVLINK_TYPE_UINT8_T, 0, 59, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_video_codec) }, \
         { "curr_recommended_bitrate", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_recommended_bitrate) }, \
         { "curr_measured_encoder_bitrate", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_measured_encoder_bitrate) }, \
         { "curr_injected_bitrate", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_injected_bitrate) }, \
         { "curr_injected_pps", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_injected_pps) }, \
         { "curr_dropped_packets", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_dropped_packets) }, \
         { "curr_fec_encode_time_avg_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 28, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_fec_encode_time_avg_us) }, \
         { "curr_fec_encode_time_min_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 32, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_fec_encode_time_min_us) }, \
         { "curr_fec_encode_time_max_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 36, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_fec_encode_time_max_us) }, \
         { "curr_fec_block_size_avg", NULL, MAVLINK_TYPE_UINT16_T, 0, 48, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_fec_block_size_avg) }, \
         { "curr_fec_block_size_min", NULL, MAVLINK_TYPE_UINT16_T, 0, 50, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_fec_block_size_min) }, \
         { "curr_fec_block_size_max", NULL, MAVLINK_TYPE_UINT16_T, 0, 52, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_fec_block_size_max) }, \
         { "curr_fec_percentage", NULL, MAVLINK_TYPE_INT16_T, 0, 54, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_fec_percentage) }, \
         { "curr_keyframe_interval", NULL, MAVLINK_TYPE_INT16_T, 0, 56, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_keyframe_interval) }, \
         { "recording_active", NULL, MAVLINK_TYPE_UINT8_T, 0, 60, offsetof(mavlink_openhd_stats_wb_video_air_t, recording_active) }, \
         { "dummy0", NULL, MAVLINK_TYPE_INT8_T, 0, 61, offsetof(mavlink_openhd_stats_wb_video_air_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT32_T, 0, 40, offsetof(mavlink_openhd_stats_wb_video_air_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 44, offsetof(mavlink_openhd_stats_wb_video_air_t, dummy2) }, \
         { "dummy3", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_openhd_stats_wb_video_air_t, dummy3) }, \
         } \
}
#endif

/**
 * @brief Pack a openhd_stats_wb_video_air message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param link_index  link_index
 * @param curr_video_codec  curr_video_codec
 * @param curr_recommended_bitrate  curr_recommended_bitrate
 * @param curr_measured_encoder_bitrate  curr_measured_encoder_bitrate
 * @param curr_injected_bitrate  curr_injected_bitrate (+FEC overhead)
 * @param curr_injected_pps  curr_injected_pps
 * @param curr_dropped_packets  curr_dropped_packets
 * @param curr_fec_encode_time_avg_us  curr_fec_encode_time_avg_us
 * @param curr_fec_encode_time_min_us  curr_fec_encode_time_min_us
 * @param curr_fec_encode_time_max_us  curr_fec_encode_time_max_us
 * @param curr_fec_block_size_avg  curr_fec_block_size_avg
 * @param curr_fec_block_size_min  curr_fec_block_size_min
 * @param curr_fec_block_size_max  curr_fec_block_size_max
 * @param curr_fec_percentage  curr_fec_percentage
 * @param curr_keyframe_interval  curr_keyframe_interval
 * @param recording_active  recording_active
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 * @param dummy3  for future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_stats_wb_video_air_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t link_index, uint8_t curr_video_codec, int32_t curr_recommended_bitrate, int32_t curr_measured_encoder_bitrate, int32_t curr_injected_bitrate, int32_t curr_injected_pps, int32_t curr_dropped_packets, uint32_t curr_fec_encode_time_avg_us, uint32_t curr_fec_encode_time_min_us, uint32_t curr_fec_encode_time_max_us, uint16_t curr_fec_block_size_avg, uint16_t curr_fec_block_size_min, uint16_t curr_fec_block_size_max, int16_t curr_fec_percentage, int16_t curr_keyframe_interval, uint8_t recording_active, int8_t dummy0, int32_t dummy1, int32_t dummy2, uint64_t dummy3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN];
    _mav_put_uint64_t(buf, 0, dummy3);
    _mav_put_int32_t(buf, 8, curr_recommended_bitrate);
    _mav_put_int32_t(buf, 12, curr_measured_encoder_bitrate);
    _mav_put_int32_t(buf, 16, curr_injected_bitrate);
    _mav_put_int32_t(buf, 20, curr_injected_pps);
    _mav_put_int32_t(buf, 24, curr_dropped_packets);
    _mav_put_uint32_t(buf, 28, curr_fec_encode_time_avg_us);
    _mav_put_uint32_t(buf, 32, curr_fec_encode_time_min_us);
    _mav_put_uint32_t(buf, 36, curr_fec_encode_time_max_us);
    _mav_put_int32_t(buf, 40, dummy1);
    _mav_put_int32_t(buf, 44, dummy2);
    _mav_put_uint16_t(buf, 48, curr_fec_block_size_avg);
    _mav_put_uint16_t(buf, 50, curr_fec_block_size_min);
    _mav_put_uint16_t(buf, 52, curr_fec_block_size_max);
    _mav_put_int16_t(buf, 54, curr_fec_percentage);
    _mav_put_int16_t(buf, 56, curr_keyframe_interval);
    _mav_put_uint8_t(buf, 58, link_index);
    _mav_put_uint8_t(buf, 59, curr_video_codec);
    _mav_put_uint8_t(buf, 60, recording_active);
    _mav_put_int8_t(buf, 61, dummy0);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN);
#else
    mavlink_openhd_stats_wb_video_air_t packet;
    packet.dummy3 = dummy3;
    packet.curr_recommended_bitrate = curr_recommended_bitrate;
    packet.curr_measured_encoder_bitrate = curr_measured_encoder_bitrate;
    packet.curr_injected_bitrate = curr_injected_bitrate;
    packet.curr_injected_pps = curr_injected_pps;
    packet.curr_dropped_packets = curr_dropped_packets;
    packet.curr_fec_encode_time_avg_us = curr_fec_encode_time_avg_us;
    packet.curr_fec_encode_time_min_us = curr_fec_encode_time_min_us;
    packet.curr_fec_encode_time_max_us = curr_fec_encode_time_max_us;
    packet.dummy1 = dummy1;
    packet.dummy2 = dummy2;
    packet.curr_fec_block_size_avg = curr_fec_block_size_avg;
    packet.curr_fec_block_size_min = curr_fec_block_size_min;
    packet.curr_fec_block_size_max = curr_fec_block_size_max;
    packet.curr_fec_percentage = curr_fec_percentage;
    packet.curr_keyframe_interval = curr_keyframe_interval;
    packet.link_index = link_index;
    packet.curr_video_codec = curr_video_codec;
    packet.recording_active = recording_active;
    packet.dummy0 = dummy0;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_CRC);
}

/**
 * @brief Pack a openhd_stats_wb_video_air message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param link_index  link_index
 * @param curr_video_codec  curr_video_codec
 * @param curr_recommended_bitrate  curr_recommended_bitrate
 * @param curr_measured_encoder_bitrate  curr_measured_encoder_bitrate
 * @param curr_injected_bitrate  curr_injected_bitrate (+FEC overhead)
 * @param curr_injected_pps  curr_injected_pps
 * @param curr_dropped_packets  curr_dropped_packets
 * @param curr_fec_encode_time_avg_us  curr_fec_encode_time_avg_us
 * @param curr_fec_encode_time_min_us  curr_fec_encode_time_min_us
 * @param curr_fec_encode_time_max_us  curr_fec_encode_time_max_us
 * @param curr_fec_block_size_avg  curr_fec_block_size_avg
 * @param curr_fec_block_size_min  curr_fec_block_size_min
 * @param curr_fec_block_size_max  curr_fec_block_size_max
 * @param curr_fec_percentage  curr_fec_percentage
 * @param curr_keyframe_interval  curr_keyframe_interval
 * @param recording_active  recording_active
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 * @param dummy3  for future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_stats_wb_video_air_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t link_index,uint8_t curr_video_codec,int32_t curr_recommended_bitrate,int32_t curr_measured_encoder_bitrate,int32_t curr_injected_bitrate,int32_t curr_injected_pps,int32_t curr_dropped_packets,uint32_t curr_fec_encode_time_avg_us,uint32_t curr_fec_encode_time_min_us,uint32_t curr_fec_encode_time_max_us,uint16_t curr_fec_block_size_avg,uint16_t curr_fec_block_size_min,uint16_t curr_fec_block_size_max,int16_t curr_fec_percentage,int16_t curr_keyframe_interval,uint8_t recording_active,int8_t dummy0,int32_t dummy1,int32_t dummy2,uint64_t dummy3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN];
    _mav_put_uint64_t(buf, 0, dummy3);
    _mav_put_int32_t(buf, 8, curr_recommended_bitrate);
    _mav_put_int32_t(buf, 12, curr_measured_encoder_bitrate);
    _mav_put_int32_t(buf, 16, curr_injected_bitrate);
    _mav_put_int32_t(buf, 20, curr_injected_pps);
    _mav_put_int32_t(buf, 24, curr_dropped_packets);
    _mav_put_uint32_t(buf, 28, curr_fec_encode_time_avg_us);
    _mav_put_uint32_t(buf, 32, curr_fec_encode_time_min_us);
    _mav_put_uint32_t(buf, 36, curr_fec_encode_time_max_us);
    _mav_put_int32_t(buf, 40, dummy1);
    _mav_put_int32_t(buf, 44, dummy2);
    _mav_put_uint16_t(buf, 48, curr_fec_block_size_avg);
    _mav_put_uint16_t(buf, 50, curr_fec_block_size_min);
    _mav_put_uint16_t(buf, 52, curr_fec_block_size_max);
    _mav_put_int16_t(buf, 54, curr_fec_percentage);
    _mav_put_int16_t(buf, 56, curr_keyframe_interval);
    _mav_put_uint8_t(buf, 58, link_index);
    _mav_put_uint8_t(buf, 59, curr_video_codec);
    _mav_put_uint8_t(buf, 60, recording_active);
    _mav_put_int8_t(buf, 61, dummy0);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN);
#else
    mavlink_openhd_stats_wb_video_air_t packet;
    packet.dummy3 = dummy3;
    packet.curr_recommended_bitrate = curr_recommended_bitrate;
    packet.curr_measured_encoder_bitrate = curr_measured_encoder_bitrate;
    packet.curr_injected_bitrate = curr_injected_bitrate;
    packet.curr_injected_pps = curr_injected_pps;
    packet.curr_dropped_packets = curr_dropped_packets;
    packet.curr_fec_encode_time_avg_us = curr_fec_encode_time_avg_us;
    packet.curr_fec_encode_time_min_us = curr_fec_encode_time_min_us;
    packet.curr_fec_encode_time_max_us = curr_fec_encode_time_max_us;
    packet.dummy1 = dummy1;
    packet.dummy2 = dummy2;
    packet.curr_fec_block_size_avg = curr_fec_block_size_avg;
    packet.curr_fec_block_size_min = curr_fec_block_size_min;
    packet.curr_fec_block_size_max = curr_fec_block_size_max;
    packet.curr_fec_percentage = curr_fec_percentage;
    packet.curr_keyframe_interval = curr_keyframe_interval;
    packet.link_index = link_index;
    packet.curr_video_codec = curr_video_codec;
    packet.recording_active = recording_active;
    packet.dummy0 = dummy0;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_CRC);
}

/**
 * @brief Encode a openhd_stats_wb_video_air struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param openhd_stats_wb_video_air C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_stats_wb_video_air_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_openhd_stats_wb_video_air_t* openhd_stats_wb_video_air)
{
    return mavlink_msg_openhd_stats_wb_video_air_pack(system_id, component_id, msg, openhd_stats_wb_video_air->link_index, openhd_stats_wb_video_air->curr_video_codec, openhd_stats_wb_video_air->curr_recommended_bitrate, openhd_stats_wb_video_air->curr_measured_encoder_bitrate, openhd_stats_wb_video_air->curr_injected_bitrate, openhd_stats_wb_video_air->curr_injected_pps, openhd_stats_wb_video_air->curr_dropped_packets, openhd_stats_wb_video_air->curr_fec_encode_time_avg_us, openhd_stats_wb_video_air->curr_fec_encode_time_min_us, openhd_stats_wb_video_air->curr_fec_encode_time_max_us, openhd_stats_wb_video_air->curr_fec_block_size_avg, openhd_stats_wb_video_air->curr_fec_block_size_min, openhd_stats_wb_video_air->curr_fec_block_size_max, openhd_stats_wb_video_air->curr_fec_percentage, openhd_stats_wb_video_air->curr_keyframe_interval, openhd_stats_wb_video_air->recording_active, openhd_stats_wb_video_air->dummy0, openhd_stats_wb_video_air->dummy1, openhd_stats_wb_video_air->dummy2, openhd_stats_wb_video_air->dummy3);
}

/**
 * @brief Encode a openhd_stats_wb_video_air struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param openhd_stats_wb_video_air C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_stats_wb_video_air_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_openhd_stats_wb_video_air_t* openhd_stats_wb_video_air)
{
    return mavlink_msg_openhd_stats_wb_video_air_pack_chan(system_id, component_id, chan, msg, openhd_stats_wb_video_air->link_index, openhd_stats_wb_video_air->curr_video_codec, openhd_stats_wb_video_air->curr_recommended_bitrate, openhd_stats_wb_video_air->curr_measured_encoder_bitrate, openhd_stats_wb_video_air->curr_injected_bitrate, openhd_stats_wb_video_air->curr_injected_pps, openhd_stats_wb_video_air->curr_dropped_packets, openhd_stats_wb_video_air->curr_fec_encode_time_avg_us, openhd_stats_wb_video_air->curr_fec_encode_time_min_us, openhd_stats_wb_video_air->curr_fec_encode_time_max_us, openhd_stats_wb_video_air->curr_fec_block_size_avg, openhd_stats_wb_video_air->curr_fec_block_size_min, openhd_stats_wb_video_air->curr_fec_block_size_max, openhd_stats_wb_video_air->curr_fec_percentage, openhd_stats_wb_video_air->curr_keyframe_interval, openhd_stats_wb_video_air->recording_active, openhd_stats_wb_video_air->dummy0, openhd_stats_wb_video_air->dummy1, openhd_stats_wb_video_air->dummy2, openhd_stats_wb_video_air->dummy3);
}

/**
 * @brief Send a openhd_stats_wb_video_air message
 * @param chan MAVLink channel to send the message
 *
 * @param link_index  link_index
 * @param curr_video_codec  curr_video_codec
 * @param curr_recommended_bitrate  curr_recommended_bitrate
 * @param curr_measured_encoder_bitrate  curr_measured_encoder_bitrate
 * @param curr_injected_bitrate  curr_injected_bitrate (+FEC overhead)
 * @param curr_injected_pps  curr_injected_pps
 * @param curr_dropped_packets  curr_dropped_packets
 * @param curr_fec_encode_time_avg_us  curr_fec_encode_time_avg_us
 * @param curr_fec_encode_time_min_us  curr_fec_encode_time_min_us
 * @param curr_fec_encode_time_max_us  curr_fec_encode_time_max_us
 * @param curr_fec_block_size_avg  curr_fec_block_size_avg
 * @param curr_fec_block_size_min  curr_fec_block_size_min
 * @param curr_fec_block_size_max  curr_fec_block_size_max
 * @param curr_fec_percentage  curr_fec_percentage
 * @param curr_keyframe_interval  curr_keyframe_interval
 * @param recording_active  recording_active
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 * @param dummy3  for future use
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_openhd_stats_wb_video_air_send(mavlink_channel_t chan, uint8_t link_index, uint8_t curr_video_codec, int32_t curr_recommended_bitrate, int32_t curr_measured_encoder_bitrate, int32_t curr_injected_bitrate, int32_t curr_injected_pps, int32_t curr_dropped_packets, uint32_t curr_fec_encode_time_avg_us, uint32_t curr_fec_encode_time_min_us, uint32_t curr_fec_encode_time_max_us, uint16_t curr_fec_block_size_avg, uint16_t curr_fec_block_size_min, uint16_t curr_fec_block_size_max, int16_t curr_fec_percentage, int16_t curr_keyframe_interval, uint8_t recording_active, int8_t dummy0, int32_t dummy1, int32_t dummy2, uint64_t dummy3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN];
    _mav_put_uint64_t(buf, 0, dummy3);
    _mav_put_int32_t(buf, 8, curr_recommended_bitrate);
    _mav_put_int32_t(buf, 12, curr_measured_encoder_bitrate);
    _mav_put_int32_t(buf, 16, curr_injected_bitrate);
    _mav_put_int32_t(buf, 20, curr_injected_pps);
    _mav_put_int32_t(buf, 24, curr_dropped_packets);
    _mav_put_uint32_t(buf, 28, curr_fec_encode_time_avg_us);
    _mav_put_uint32_t(buf, 32, curr_fec_encode_time_min_us);
    _mav_put_uint32_t(buf, 36, curr_fec_encode_time_max_us);
    _mav_put_int32_t(buf, 40, dummy1);
    _mav_put_int32_t(buf, 44, dummy2);
    _mav_put_uint16_t(buf, 48, curr_fec_block_size_avg);
    _mav_put_uint16_t(buf, 50, curr_fec_block_size_min);
    _mav_put_uint16_t(buf, 52, curr_fec_block_size_max);
    _mav_put_int16_t(buf, 54, curr_fec_percentage);
    _mav_put_int16_t(buf, 56, curr_keyframe_interval);
    _mav_put_uint8_t(buf, 58, link_index);
    _mav_put_uint8_t(buf, 59, curr_video_codec);
    _mav_put_uint8_t(buf, 60, recording_active);
    _mav_put_int8_t(buf, 61, dummy0);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR, buf, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_CRC);
#else
    mavlink_openhd_stats_wb_video_air_t packet;
    packet.dummy3 = dummy3;
    packet.curr_recommended_bitrate = curr_recommended_bitrate;
    packet.curr_measured_encoder_bitrate = curr_measured_encoder_bitrate;
    packet.curr_injected_bitrate = curr_injected_bitrate;
    packet.curr_injected_pps = curr_injected_pps;
    packet.curr_dropped_packets = curr_dropped_packets;
    packet.curr_fec_encode_time_avg_us = curr_fec_encode_time_avg_us;
    packet.curr_fec_encode_time_min_us = curr_fec_encode_time_min_us;
    packet.curr_fec_encode_time_max_us = curr_fec_encode_time_max_us;
    packet.dummy1 = dummy1;
    packet.dummy2 = dummy2;
    packet.curr_fec_block_size_avg = curr_fec_block_size_avg;
    packet.curr_fec_block_size_min = curr_fec_block_size_min;
    packet.curr_fec_block_size_max = curr_fec_block_size_max;
    packet.curr_fec_percentage = curr_fec_percentage;
    packet.curr_keyframe_interval = curr_keyframe_interval;
    packet.link_index = link_index;
    packet.curr_video_codec = curr_video_codec;
    packet.recording_active = recording_active;
    packet.dummy0 = dummy0;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR, (const char *)&packet, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_CRC);
#endif
}

/**
 * @brief Send a openhd_stats_wb_video_air message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_openhd_stats_wb_video_air_send_struct(mavlink_channel_t chan, const mavlink_openhd_stats_wb_video_air_t* openhd_stats_wb_video_air)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_stats_wb_video_air_send(chan, openhd_stats_wb_video_air->link_index, openhd_stats_wb_video_air->curr_video_codec, openhd_stats_wb_video_air->curr_recommended_bitrate, openhd_stats_wb_video_air->curr_measured_encoder_bitrate, openhd_stats_wb_video_air->curr_injected_bitrate, openhd_stats_wb_video_air->curr_injected_pps, openhd_stats_wb_video_air->curr_dropped_packets, openhd_stats_wb_video_air->curr_fec_encode_time_avg_us, openhd_stats_wb_video_air->curr_fec_encode_time_min_us, openhd_stats_wb_video_air->curr_fec_encode_time_max_us, openhd_stats_wb_video_air->curr_fec_block_size_avg, openhd_stats_wb_video_air->curr_fec_block_size_min, openhd_stats_wb_video_air->curr_fec_block_size_max, openhd_stats_wb_video_air->curr_fec_percentage, openhd_stats_wb_video_air->curr_keyframe_interval, openhd_stats_wb_video_air->recording_active, openhd_stats_wb_video_air->dummy0, openhd_stats_wb_video_air->dummy1, openhd_stats_wb_video_air->dummy2, openhd_stats_wb_video_air->dummy3);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR, (const char *)openhd_stats_wb_video_air, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_openhd_stats_wb_video_air_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t link_index, uint8_t curr_video_codec, int32_t curr_recommended_bitrate, int32_t curr_measured_encoder_bitrate, int32_t curr_injected_bitrate, int32_t curr_injected_pps, int32_t curr_dropped_packets, uint32_t curr_fec_encode_time_avg_us, uint32_t curr_fec_encode_time_min_us, uint32_t curr_fec_encode_time_max_us, uint16_t curr_fec_block_size_avg, uint16_t curr_fec_block_size_min, uint16_t curr_fec_block_size_max, int16_t curr_fec_percentage, int16_t curr_keyframe_interval, uint8_t recording_active, int8_t dummy0, int32_t dummy1, int32_t dummy2, uint64_t dummy3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, dummy3);
    _mav_put_int32_t(buf, 8, curr_recommended_bitrate);
    _mav_put_int32_t(buf, 12, curr_measured_encoder_bitrate);
    _mav_put_int32_t(buf, 16, curr_injected_bitrate);
    _mav_put_int32_t(buf, 20, curr_injected_pps);
    _mav_put_int32_t(buf, 24, curr_dropped_packets);
    _mav_put_uint32_t(buf, 28, curr_fec_encode_time_avg_us);
    _mav_put_uint32_t(buf, 32, curr_fec_encode_time_min_us);
    _mav_put_uint32_t(buf, 36, curr_fec_encode_time_max_us);
    _mav_put_int32_t(buf, 40, dummy1);
    _mav_put_int32_t(buf, 44, dummy2);
    _mav_put_uint16_t(buf, 48, curr_fec_block_size_avg);
    _mav_put_uint16_t(buf, 50, curr_fec_block_size_min);
    _mav_put_uint16_t(buf, 52, curr_fec_block_size_max);
    _mav_put_int16_t(buf, 54, curr_fec_percentage);
    _mav_put_int16_t(buf, 56, curr_keyframe_interval);
    _mav_put_uint8_t(buf, 58, link_index);
    _mav_put_uint8_t(buf, 59, curr_video_codec);
    _mav_put_uint8_t(buf, 60, recording_active);
    _mav_put_int8_t(buf, 61, dummy0);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR, buf, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_CRC);
#else
    mavlink_openhd_stats_wb_video_air_t *packet = (mavlink_openhd_stats_wb_video_air_t *)msgbuf;
    packet->dummy3 = dummy3;
    packet->curr_recommended_bitrate = curr_recommended_bitrate;
    packet->curr_measured_encoder_bitrate = curr_measured_encoder_bitrate;
    packet->curr_injected_bitrate = curr_injected_bitrate;
    packet->curr_injected_pps = curr_injected_pps;
    packet->curr_dropped_packets = curr_dropped_packets;
    packet->curr_fec_encode_time_avg_us = curr_fec_encode_time_avg_us;
    packet->curr_fec_encode_time_min_us = curr_fec_encode_time_min_us;
    packet->curr_fec_encode_time_max_us = curr_fec_encode_time_max_us;
    packet->dummy1 = dummy1;
    packet->dummy2 = dummy2;
    packet->curr_fec_block_size_avg = curr_fec_block_size_avg;
    packet->curr_fec_block_size_min = curr_fec_block_size_min;
    packet->curr_fec_block_size_max = curr_fec_block_size_max;
    packet->curr_fec_percentage = curr_fec_percentage;
    packet->curr_keyframe_interval = curr_keyframe_interval;
    packet->link_index = link_index;
    packet->curr_video_codec = curr_video_codec;
    packet->recording_active = recording_active;
    packet->dummy0 = dummy0;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR, (const char *)packet, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_CRC);
#endif
}
#endif

#endif

// MESSAGE OPENHD_STATS_WB_VIDEO_AIR UNPACKING


/**
 * @brief Get field link_index from openhd_stats_wb_video_air message
 *
 * @return  link_index
 */
static inline uint8_t mavlink_msg_openhd_stats_wb_video_air_get_link_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  58);
}

/**
 * @brief Get field curr_video_codec from openhd_stats_wb_video_air message
 *
 * @return  curr_video_codec
 */
static inline uint8_t mavlink_msg_openhd_stats_wb_video_air_get_curr_video_codec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  59);
}

/**
 * @brief Get field curr_recommended_bitrate from openhd_stats_wb_video_air message
 *
 * @return  curr_recommended_bitrate
 */
static inline int32_t mavlink_msg_openhd_stats_wb_video_air_get_curr_recommended_bitrate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field curr_measured_encoder_bitrate from openhd_stats_wb_video_air message
 *
 * @return  curr_measured_encoder_bitrate
 */
static inline int32_t mavlink_msg_openhd_stats_wb_video_air_get_curr_measured_encoder_bitrate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field curr_injected_bitrate from openhd_stats_wb_video_air message
 *
 * @return  curr_injected_bitrate (+FEC overhead)
 */
static inline int32_t mavlink_msg_openhd_stats_wb_video_air_get_curr_injected_bitrate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field curr_injected_pps from openhd_stats_wb_video_air message
 *
 * @return  curr_injected_pps
 */
static inline int32_t mavlink_msg_openhd_stats_wb_video_air_get_curr_injected_pps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Get field curr_dropped_packets from openhd_stats_wb_video_air message
 *
 * @return  curr_dropped_packets
 */
static inline int32_t mavlink_msg_openhd_stats_wb_video_air_get_curr_dropped_packets(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  24);
}

/**
 * @brief Get field curr_fec_encode_time_avg_us from openhd_stats_wb_video_air message
 *
 * @return  curr_fec_encode_time_avg_us
 */
static inline uint32_t mavlink_msg_openhd_stats_wb_video_air_get_curr_fec_encode_time_avg_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  28);
}

/**
 * @brief Get field curr_fec_encode_time_min_us from openhd_stats_wb_video_air message
 *
 * @return  curr_fec_encode_time_min_us
 */
static inline uint32_t mavlink_msg_openhd_stats_wb_video_air_get_curr_fec_encode_time_min_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  32);
}

/**
 * @brief Get field curr_fec_encode_time_max_us from openhd_stats_wb_video_air message
 *
 * @return  curr_fec_encode_time_max_us
 */
static inline uint32_t mavlink_msg_openhd_stats_wb_video_air_get_curr_fec_encode_time_max_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  36);
}

/**
 * @brief Get field curr_fec_block_size_avg from openhd_stats_wb_video_air message
 *
 * @return  curr_fec_block_size_avg
 */
static inline uint16_t mavlink_msg_openhd_stats_wb_video_air_get_curr_fec_block_size_avg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  48);
}

/**
 * @brief Get field curr_fec_block_size_min from openhd_stats_wb_video_air message
 *
 * @return  curr_fec_block_size_min
 */
static inline uint16_t mavlink_msg_openhd_stats_wb_video_air_get_curr_fec_block_size_min(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  50);
}

/**
 * @brief Get field curr_fec_block_size_max from openhd_stats_wb_video_air message
 *
 * @return  curr_fec_block_size_max
 */
static inline uint16_t mavlink_msg_openhd_stats_wb_video_air_get_curr_fec_block_size_max(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  52);
}

/**
 * @brief Get field curr_fec_percentage from openhd_stats_wb_video_air message
 *
 * @return  curr_fec_percentage
 */
static inline int16_t mavlink_msg_openhd_stats_wb_video_air_get_curr_fec_percentage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  54);
}

/**
 * @brief Get field curr_keyframe_interval from openhd_stats_wb_video_air message
 *
 * @return  curr_keyframe_interval
 */
static inline int16_t mavlink_msg_openhd_stats_wb_video_air_get_curr_keyframe_interval(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  56);
}

/**
 * @brief Get field recording_active from openhd_stats_wb_video_air message
 *
 * @return  recording_active
 */
static inline uint8_t mavlink_msg_openhd_stats_wb_video_air_get_recording_active(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  60);
}

/**
 * @brief Get field dummy0 from openhd_stats_wb_video_air message
 *
 * @return  for future use
 */
static inline int8_t mavlink_msg_openhd_stats_wb_video_air_get_dummy0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  61);
}

/**
 * @brief Get field dummy1 from openhd_stats_wb_video_air message
 *
 * @return  for future use
 */
static inline int32_t mavlink_msg_openhd_stats_wb_video_air_get_dummy1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  40);
}

/**
 * @brief Get field dummy2 from openhd_stats_wb_video_air message
 *
 * @return  for future use
 */
static inline int32_t mavlink_msg_openhd_stats_wb_video_air_get_dummy2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  44);
}

/**
 * @brief Get field dummy3 from openhd_stats_wb_video_air message
 *
 * @return  for future use
 */
static inline uint64_t mavlink_msg_openhd_stats_wb_video_air_get_dummy3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Decode a openhd_stats_wb_video_air message into a struct
 *
 * @param msg The message to decode
 * @param openhd_stats_wb_video_air C-struct to decode the message contents into
 */
static inline void mavlink_msg_openhd_stats_wb_video_air_decode(const mavlink_message_t* msg, mavlink_openhd_stats_wb_video_air_t* openhd_stats_wb_video_air)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    openhd_stats_wb_video_air->dummy3 = mavlink_msg_openhd_stats_wb_video_air_get_dummy3(msg);
    openhd_stats_wb_video_air->curr_recommended_bitrate = mavlink_msg_openhd_stats_wb_video_air_get_curr_recommended_bitrate(msg);
    openhd_stats_wb_video_air->curr_measured_encoder_bitrate = mavlink_msg_openhd_stats_wb_video_air_get_curr_measured_encoder_bitrate(msg);
    openhd_stats_wb_video_air->curr_injected_bitrate = mavlink_msg_openhd_stats_wb_video_air_get_curr_injected_bitrate(msg);
    openhd_stats_wb_video_air->curr_injected_pps = mavlink_msg_openhd_stats_wb_video_air_get_curr_injected_pps(msg);
    openhd_stats_wb_video_air->curr_dropped_packets = mavlink_msg_openhd_stats_wb_video_air_get_curr_dropped_packets(msg);
    openhd_stats_wb_video_air->curr_fec_encode_time_avg_us = mavlink_msg_openhd_stats_wb_video_air_get_curr_fec_encode_time_avg_us(msg);
    openhd_stats_wb_video_air->curr_fec_encode_time_min_us = mavlink_msg_openhd_stats_wb_video_air_get_curr_fec_encode_time_min_us(msg);
    openhd_stats_wb_video_air->curr_fec_encode_time_max_us = mavlink_msg_openhd_stats_wb_video_air_get_curr_fec_encode_time_max_us(msg);
    openhd_stats_wb_video_air->dummy1 = mavlink_msg_openhd_stats_wb_video_air_get_dummy1(msg);
    openhd_stats_wb_video_air->dummy2 = mavlink_msg_openhd_stats_wb_video_air_get_dummy2(msg);
    openhd_stats_wb_video_air->curr_fec_block_size_avg = mavlink_msg_openhd_stats_wb_video_air_get_curr_fec_block_size_avg(msg);
    openhd_stats_wb_video_air->curr_fec_block_size_min = mavlink_msg_openhd_stats_wb_video_air_get_curr_fec_block_size_min(msg);
    openhd_stats_wb_video_air->curr_fec_block_size_max = mavlink_msg_openhd_stats_wb_video_air_get_curr_fec_block_size_max(msg);
    openhd_stats_wb_video_air->curr_fec_percentage = mavlink_msg_openhd_stats_wb_video_air_get_curr_fec_percentage(msg);
    openhd_stats_wb_video_air->curr_keyframe_interval = mavlink_msg_openhd_stats_wb_video_air_get_curr_keyframe_interval(msg);
    openhd_stats_wb_video_air->link_index = mavlink_msg_openhd_stats_wb_video_air_get_link_index(msg);
    openhd_stats_wb_video_air->curr_video_codec = mavlink_msg_openhd_stats_wb_video_air_get_curr_video_codec(msg);
    openhd_stats_wb_video_air->recording_active = mavlink_msg_openhd_stats_wb_video_air_get_recording_active(msg);
    openhd_stats_wb_video_air->dummy0 = mavlink_msg_openhd_stats_wb_video_air_get_dummy0(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN? msg->len : MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN;
        memset(openhd_stats_wb_video_air, 0, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN);
    memcpy(openhd_stats_wb_video_air, _MAV_PAYLOAD(msg), len);
#endif
}
