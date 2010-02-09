asset *add_asset(int af, struct in6_addr ip_addr);
void del_asset(asset * passet, asset ** bucket_ptr);
void del_os_asset(os_asset ** prev_os, os_asset * passet);
void del_serv_asset(serv_asset ** prev_service, serv_asset * passet);
asset *update_asset(int af, struct in6_addr ip_addr);
short update_asset_os(packetinfo *pi, uint8_t detection, bstring raw_fp, int uptime);
//short update_asset_os(packetinfo *pi, struct in6_addr ip_addr,
//                      u_int16_t port, uint8_t detection,
//                      bstring raw_fp, int af, int uptime);
short update_asset_service(packetinfo *pi, bstring service, bstring application);
short update_asset_arp(u_int8_t arp_sha[MAC_ADDR_LEN], struct in6_addr ip_addr);
void clear_asset_list();
void update_asset_list();
void update_service_stats(int role, uint16_t proto);
asset *asset_lookup(struct in6_addr ip, int af);
