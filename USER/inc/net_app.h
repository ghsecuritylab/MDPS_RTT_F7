#ifndef NET_APP_H
#define NET_APP_H

rt_err_t wifi_connect(void);
static int netdev_set_default_user(const char *name);
void get_default_mac(char *mac_buf);

#endif /* WLAN_APP_H */
