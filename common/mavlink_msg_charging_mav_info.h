#pragma once
// MESSAGE CHARGING_MAV_INFO PACKING

#define MAVLINK_MSG_ID_CHARGING_MAV_INFO 220

MAVPACKED(
typedef struct __mavlink_charging_mav_info_t {
 float AvgVCell_V; /*< average cell voltage (V)*/
 float AvgCell3_V; /*< cell 3 voltage (V)*/
 float AvgCell2_V; /*< cell 2 voltage (V)*/
 float AvgCell1_V; /*< cell 1 voltage (V)*/
 float RepCap_mAh; /*< reported capacity (mAh)*/
 float Current_mA; /*< current (mA)*/
 float AvgCurrent_mA; /*< average current (mA)*/
 float TTE_hr; /*< time to empty (hr)*/
 float TTF_hr; /*< time to full (hr)*/
 float RepSOC_Pourcent; /*< reported state of charge (%)*/
}) mavlink_charging_mav_info_t;

#define MAVLINK_MSG_ID_CHARGING_MAV_INFO_LEN 40
#define MAVLINK_MSG_ID_CHARGING_MAV_INFO_MIN_LEN 40
#define MAVLINK_MSG_ID_220_LEN 40
#define MAVLINK_MSG_ID_220_MIN_LEN 40

#define MAVLINK_MSG_ID_CHARGING_MAV_INFO_CRC 77
#define MAVLINK_MSG_ID_220_CRC 77



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CHARGING_MAV_INFO { \
    220, \
    "CHARGING_MAV_INFO", \
    10, \
    {  { "AvgVCell_V", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_charging_mav_info_t, AvgVCell_V) }, \
         { "AvgCell3_V", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_charging_mav_info_t, AvgCell3_V) }, \
         { "AvgCell2_V", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_charging_mav_info_t, AvgCell2_V) }, \
         { "AvgCell1_V", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_charging_mav_info_t, AvgCell1_V) }, \
         { "RepCap_mAh", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_charging_mav_info_t, RepCap_mAh) }, \
         { "Current_mA", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_charging_mav_info_t, Current_mA) }, \
         { "AvgCurrent_mA", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_charging_mav_info_t, AvgCurrent_mA) }, \
         { "TTE_hr", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_charging_mav_info_t, TTE_hr) }, \
         { "TTF_hr", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_charging_mav_info_t, TTF_hr) }, \
         { "RepSOC_Pourcent", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_charging_mav_info_t, RepSOC_Pourcent) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CHARGING_MAV_INFO { \
    "CHARGING_MAV_INFO", \
    10, \
    {  { "AvgVCell_V", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_charging_mav_info_t, AvgVCell_V) }, \
         { "AvgCell3_V", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_charging_mav_info_t, AvgCell3_V) }, \
         { "AvgCell2_V", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_charging_mav_info_t, AvgCell2_V) }, \
         { "AvgCell1_V", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_charging_mav_info_t, AvgCell1_V) }, \
         { "RepCap_mAh", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_charging_mav_info_t, RepCap_mAh) }, \
         { "Current_mA", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_charging_mav_info_t, Current_mA) }, \
         { "AvgCurrent_mA", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_charging_mav_info_t, AvgCurrent_mA) }, \
         { "TTE_hr", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_charging_mav_info_t, TTE_hr) }, \
         { "TTF_hr", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_charging_mav_info_t, TTF_hr) }, \
         { "RepSOC_Pourcent", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_charging_mav_info_t, RepSOC_Pourcent) }, \
         } \
}
#endif

/**
 * @brief Pack a charging_mav_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param AvgVCell_V average cell voltage (V)
 * @param AvgCell3_V cell 3 voltage (V)
 * @param AvgCell2_V cell 2 voltage (V)
 * @param AvgCell1_V cell 1 voltage (V)
 * @param RepCap_mAh reported capacity (mAh)
 * @param Current_mA current (mA)
 * @param AvgCurrent_mA average current (mA)
 * @param TTE_hr time to empty (hr)
 * @param TTF_hr time to full (hr)
 * @param RepSOC_Pourcent reported state of charge (%)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_charging_mav_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float AvgVCell_V, float AvgCell3_V, float AvgCell2_V, float AvgCell1_V, float RepCap_mAh, float Current_mA, float AvgCurrent_mA, float TTE_hr, float TTF_hr, float RepSOC_Pourcent)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CHARGING_MAV_INFO_LEN];
    _mav_put_float(buf, 0, AvgVCell_V);
    _mav_put_float(buf, 4, AvgCell3_V);
    _mav_put_float(buf, 8, AvgCell2_V);
    _mav_put_float(buf, 12, AvgCell1_V);
    _mav_put_float(buf, 16, RepCap_mAh);
    _mav_put_float(buf, 20, Current_mA);
    _mav_put_float(buf, 24, AvgCurrent_mA);
    _mav_put_float(buf, 28, TTE_hr);
    _mav_put_float(buf, 32, TTF_hr);
    _mav_put_float(buf, 36, RepSOC_Pourcent);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CHARGING_MAV_INFO_LEN);
#else
    mavlink_charging_mav_info_t packet;
    packet.AvgVCell_V = AvgVCell_V;
    packet.AvgCell3_V = AvgCell3_V;
    packet.AvgCell2_V = AvgCell2_V;
    packet.AvgCell1_V = AvgCell1_V;
    packet.RepCap_mAh = RepCap_mAh;
    packet.Current_mA = Current_mA;
    packet.AvgCurrent_mA = AvgCurrent_mA;
    packet.TTE_hr = TTE_hr;
    packet.TTF_hr = TTF_hr;
    packet.RepSOC_Pourcent = RepSOC_Pourcent;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CHARGING_MAV_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CHARGING_MAV_INFO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CHARGING_MAV_INFO_MIN_LEN, MAVLINK_MSG_ID_CHARGING_MAV_INFO_LEN, MAVLINK_MSG_ID_CHARGING_MAV_INFO_CRC);
}

/**
 * @brief Pack a charging_mav_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param AvgVCell_V average cell voltage (V)
 * @param AvgCell3_V cell 3 voltage (V)
 * @param AvgCell2_V cell 2 voltage (V)
 * @param AvgCell1_V cell 1 voltage (V)
 * @param RepCap_mAh reported capacity (mAh)
 * @param Current_mA current (mA)
 * @param AvgCurrent_mA average current (mA)
 * @param TTE_hr time to empty (hr)
 * @param TTF_hr time to full (hr)
 * @param RepSOC_Pourcent reported state of charge (%)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_charging_mav_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float AvgVCell_V,float AvgCell3_V,float AvgCell2_V,float AvgCell1_V,float RepCap_mAh,float Current_mA,float AvgCurrent_mA,float TTE_hr,float TTF_hr,float RepSOC_Pourcent)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CHARGING_MAV_INFO_LEN];
    _mav_put_float(buf, 0, AvgVCell_V);
    _mav_put_float(buf, 4, AvgCell3_V);
    _mav_put_float(buf, 8, AvgCell2_V);
    _mav_put_float(buf, 12, AvgCell1_V);
    _mav_put_float(buf, 16, RepCap_mAh);
    _mav_put_float(buf, 20, Current_mA);
    _mav_put_float(buf, 24, AvgCurrent_mA);
    _mav_put_float(buf, 28, TTE_hr);
    _mav_put_float(buf, 32, TTF_hr);
    _mav_put_float(buf, 36, RepSOC_Pourcent);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CHARGING_MAV_INFO_LEN);
#else
    mavlink_charging_mav_info_t packet;
    packet.AvgVCell_V = AvgVCell_V;
    packet.AvgCell3_V = AvgCell3_V;
    packet.AvgCell2_V = AvgCell2_V;
    packet.AvgCell1_V = AvgCell1_V;
    packet.RepCap_mAh = RepCap_mAh;
    packet.Current_mA = Current_mA;
    packet.AvgCurrent_mA = AvgCurrent_mA;
    packet.TTE_hr = TTE_hr;
    packet.TTF_hr = TTF_hr;
    packet.RepSOC_Pourcent = RepSOC_Pourcent;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CHARGING_MAV_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CHARGING_MAV_INFO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CHARGING_MAV_INFO_MIN_LEN, MAVLINK_MSG_ID_CHARGING_MAV_INFO_LEN, MAVLINK_MSG_ID_CHARGING_MAV_INFO_CRC);
}

/**
 * @brief Encode a charging_mav_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param charging_mav_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_charging_mav_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_charging_mav_info_t* charging_mav_info)
{
    return mavlink_msg_charging_mav_info_pack(system_id, component_id, msg, charging_mav_info->AvgVCell_V, charging_mav_info->AvgCell3_V, charging_mav_info->AvgCell2_V, charging_mav_info->AvgCell1_V, charging_mav_info->RepCap_mAh, charging_mav_info->Current_mA, charging_mav_info->AvgCurrent_mA, charging_mav_info->TTE_hr, charging_mav_info->TTF_hr, charging_mav_info->RepSOC_Pourcent);
}

/**
 * @brief Encode a charging_mav_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param charging_mav_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_charging_mav_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_charging_mav_info_t* charging_mav_info)
{
    return mavlink_msg_charging_mav_info_pack_chan(system_id, component_id, chan, msg, charging_mav_info->AvgVCell_V, charging_mav_info->AvgCell3_V, charging_mav_info->AvgCell2_V, charging_mav_info->AvgCell1_V, charging_mav_info->RepCap_mAh, charging_mav_info->Current_mA, charging_mav_info->AvgCurrent_mA, charging_mav_info->TTE_hr, charging_mav_info->TTF_hr, charging_mav_info->RepSOC_Pourcent);
}

/**
 * @brief Send a charging_mav_info message
 * @param chan MAVLink channel to send the message
 *
 * @param AvgVCell_V average cell voltage (V)
 * @param AvgCell3_V cell 3 voltage (V)
 * @param AvgCell2_V cell 2 voltage (V)
 * @param AvgCell1_V cell 1 voltage (V)
 * @param RepCap_mAh reported capacity (mAh)
 * @param Current_mA current (mA)
 * @param AvgCurrent_mA average current (mA)
 * @param TTE_hr time to empty (hr)
 * @param TTF_hr time to full (hr)
 * @param RepSOC_Pourcent reported state of charge (%)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_charging_mav_info_send(mavlink_channel_t chan, float AvgVCell_V, float AvgCell3_V, float AvgCell2_V, float AvgCell1_V, float RepCap_mAh, float Current_mA, float AvgCurrent_mA, float TTE_hr, float TTF_hr, float RepSOC_Pourcent)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CHARGING_MAV_INFO_LEN];
    _mav_put_float(buf, 0, AvgVCell_V);
    _mav_put_float(buf, 4, AvgCell3_V);
    _mav_put_float(buf, 8, AvgCell2_V);
    _mav_put_float(buf, 12, AvgCell1_V);
    _mav_put_float(buf, 16, RepCap_mAh);
    _mav_put_float(buf, 20, Current_mA);
    _mav_put_float(buf, 24, AvgCurrent_mA);
    _mav_put_float(buf, 28, TTE_hr);
    _mav_put_float(buf, 32, TTF_hr);
    _mav_put_float(buf, 36, RepSOC_Pourcent);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CHARGING_MAV_INFO, buf, MAVLINK_MSG_ID_CHARGING_MAV_INFO_MIN_LEN, MAVLINK_MSG_ID_CHARGING_MAV_INFO_LEN, MAVLINK_MSG_ID_CHARGING_MAV_INFO_CRC);
#else
    mavlink_charging_mav_info_t packet;
    packet.AvgVCell_V = AvgVCell_V;
    packet.AvgCell3_V = AvgCell3_V;
    packet.AvgCell2_V = AvgCell2_V;
    packet.AvgCell1_V = AvgCell1_V;
    packet.RepCap_mAh = RepCap_mAh;
    packet.Current_mA = Current_mA;
    packet.AvgCurrent_mA = AvgCurrent_mA;
    packet.TTE_hr = TTE_hr;
    packet.TTF_hr = TTF_hr;
    packet.RepSOC_Pourcent = RepSOC_Pourcent;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CHARGING_MAV_INFO, (const char *)&packet, MAVLINK_MSG_ID_CHARGING_MAV_INFO_MIN_LEN, MAVLINK_MSG_ID_CHARGING_MAV_INFO_LEN, MAVLINK_MSG_ID_CHARGING_MAV_INFO_CRC);
#endif
}

/**
 * @brief Send a charging_mav_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_charging_mav_info_send_struct(mavlink_channel_t chan, const mavlink_charging_mav_info_t* charging_mav_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_charging_mav_info_send(chan, charging_mav_info->AvgVCell_V, charging_mav_info->AvgCell3_V, charging_mav_info->AvgCell2_V, charging_mav_info->AvgCell1_V, charging_mav_info->RepCap_mAh, charging_mav_info->Current_mA, charging_mav_info->AvgCurrent_mA, charging_mav_info->TTE_hr, charging_mav_info->TTF_hr, charging_mav_info->RepSOC_Pourcent);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CHARGING_MAV_INFO, (const char *)charging_mav_info, MAVLINK_MSG_ID_CHARGING_MAV_INFO_MIN_LEN, MAVLINK_MSG_ID_CHARGING_MAV_INFO_LEN, MAVLINK_MSG_ID_CHARGING_MAV_INFO_CRC);
#endif
}

#if MAVLINK_MSG_ID_CHARGING_MAV_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_charging_mav_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float AvgVCell_V, float AvgCell3_V, float AvgCell2_V, float AvgCell1_V, float RepCap_mAh, float Current_mA, float AvgCurrent_mA, float TTE_hr, float TTF_hr, float RepSOC_Pourcent)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, AvgVCell_V);
    _mav_put_float(buf, 4, AvgCell3_V);
    _mav_put_float(buf, 8, AvgCell2_V);
    _mav_put_float(buf, 12, AvgCell1_V);
    _mav_put_float(buf, 16, RepCap_mAh);
    _mav_put_float(buf, 20, Current_mA);
    _mav_put_float(buf, 24, AvgCurrent_mA);
    _mav_put_float(buf, 28, TTE_hr);
    _mav_put_float(buf, 32, TTF_hr);
    _mav_put_float(buf, 36, RepSOC_Pourcent);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CHARGING_MAV_INFO, buf, MAVLINK_MSG_ID_CHARGING_MAV_INFO_MIN_LEN, MAVLINK_MSG_ID_CHARGING_MAV_INFO_LEN, MAVLINK_MSG_ID_CHARGING_MAV_INFO_CRC);
#else
    mavlink_charging_mav_info_t *packet = (mavlink_charging_mav_info_t *)msgbuf;
    packet->AvgVCell_V = AvgVCell_V;
    packet->AvgCell3_V = AvgCell3_V;
    packet->AvgCell2_V = AvgCell2_V;
    packet->AvgCell1_V = AvgCell1_V;
    packet->RepCap_mAh = RepCap_mAh;
    packet->Current_mA = Current_mA;
    packet->AvgCurrent_mA = AvgCurrent_mA;
    packet->TTE_hr = TTE_hr;
    packet->TTF_hr = TTF_hr;
    packet->RepSOC_Pourcent = RepSOC_Pourcent;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CHARGING_MAV_INFO, (const char *)packet, MAVLINK_MSG_ID_CHARGING_MAV_INFO_MIN_LEN, MAVLINK_MSG_ID_CHARGING_MAV_INFO_LEN, MAVLINK_MSG_ID_CHARGING_MAV_INFO_CRC);
#endif
}
#endif

#endif

// MESSAGE CHARGING_MAV_INFO UNPACKING


/**
 * @brief Get field AvgVCell_V from charging_mav_info message
 *
 * @return average cell voltage (V)
 */
static inline float mavlink_msg_charging_mav_info_get_AvgVCell_V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field AvgCell3_V from charging_mav_info message
 *
 * @return cell 3 voltage (V)
 */
static inline float mavlink_msg_charging_mav_info_get_AvgCell3_V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field AvgCell2_V from charging_mav_info message
 *
 * @return cell 2 voltage (V)
 */
static inline float mavlink_msg_charging_mav_info_get_AvgCell2_V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field AvgCell1_V from charging_mav_info message
 *
 * @return cell 1 voltage (V)
 */
static inline float mavlink_msg_charging_mav_info_get_AvgCell1_V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field RepCap_mAh from charging_mav_info message
 *
 * @return reported capacity (mAh)
 */
static inline float mavlink_msg_charging_mav_info_get_RepCap_mAh(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field Current_mA from charging_mav_info message
 *
 * @return current (mA)
 */
static inline float mavlink_msg_charging_mav_info_get_Current_mA(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field AvgCurrent_mA from charging_mav_info message
 *
 * @return average current (mA)
 */
static inline float mavlink_msg_charging_mav_info_get_AvgCurrent_mA(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field TTE_hr from charging_mav_info message
 *
 * @return time to empty (hr)
 */
static inline float mavlink_msg_charging_mav_info_get_TTE_hr(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field TTF_hr from charging_mav_info message
 *
 * @return time to full (hr)
 */
static inline float mavlink_msg_charging_mav_info_get_TTF_hr(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field RepSOC_Pourcent from charging_mav_info message
 *
 * @return reported state of charge (%)
 */
static inline float mavlink_msg_charging_mav_info_get_RepSOC_Pourcent(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Decode a charging_mav_info message into a struct
 *
 * @param msg The message to decode
 * @param charging_mav_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_charging_mav_info_decode(const mavlink_message_t* msg, mavlink_charging_mav_info_t* charging_mav_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    charging_mav_info->AvgVCell_V = mavlink_msg_charging_mav_info_get_AvgVCell_V(msg);
    charging_mav_info->AvgCell3_V = mavlink_msg_charging_mav_info_get_AvgCell3_V(msg);
    charging_mav_info->AvgCell2_V = mavlink_msg_charging_mav_info_get_AvgCell2_V(msg);
    charging_mav_info->AvgCell1_V = mavlink_msg_charging_mav_info_get_AvgCell1_V(msg);
    charging_mav_info->RepCap_mAh = mavlink_msg_charging_mav_info_get_RepCap_mAh(msg);
    charging_mav_info->Current_mA = mavlink_msg_charging_mav_info_get_Current_mA(msg);
    charging_mav_info->AvgCurrent_mA = mavlink_msg_charging_mav_info_get_AvgCurrent_mA(msg);
    charging_mav_info->TTE_hr = mavlink_msg_charging_mav_info_get_TTE_hr(msg);
    charging_mav_info->TTF_hr = mavlink_msg_charging_mav_info_get_TTF_hr(msg);
    charging_mav_info->RepSOC_Pourcent = mavlink_msg_charging_mav_info_get_RepSOC_Pourcent(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CHARGING_MAV_INFO_LEN? msg->len : MAVLINK_MSG_ID_CHARGING_MAV_INFO_LEN;
        memset(charging_mav_info, 0, MAVLINK_MSG_ID_CHARGING_MAV_INFO_LEN);
    memcpy(charging_mav_info, _MAV_PAYLOAD(msg), len);
#endif
}
