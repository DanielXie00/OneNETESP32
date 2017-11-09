#ifndef __ONENET_H__
#define __ONENET_H__

#define ONENET_HOST         "183.230.40.39"
#define ONENET_PORT         (6002)

/* Here needs to be changed accoding to your oneONET configure. */
#define ONENET_DEVICE_ID    "20260591"                  // mqtt client id
#define ONENET_PROJECT_ID   "101343"                    // mqtt username
#define ONENET_AUTH_INFO    "espressif"   // mqtt password

/* Here needs to be changed accoding to your oneONET configure. */
#define ONENET_DATA_STREAM  "temperature"

#define ONENET_PUB_INTERVAL (60) // unit: s

/* Supported format when publish data point to oneNET */
enum mqtt_save_data_type {
    data_type_full_json = 0x01,
    data_type_bin = 0x02,
    data_type_simple_json_without_time = 0x03,
    data_type_simple_json_with_time = 0x04,
    data_type_string = 0x05,
    data_type_string_with_time = 0x06,
    data_type_float  = 0x07
};

void connected_cb(void *self, void *params);

void disconnected_cb(void *self, void *params);

void reconnect_cb(void *self, void *params);

void subscribe_cb(void *self, void *params);

void publish_cb(void *self, void *params);

void data_cb(void *self, void *params);

#endif /* __ONENET_H__ */
