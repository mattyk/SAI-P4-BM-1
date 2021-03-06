// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "switch_sai_rpc.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

using namespace  ::switch_sai;

class switch_sai_rpcHandler : virtual public switch_sai_rpcIf {
 public:
  switch_sai_rpcHandler() {
    // Your initialization goes here
  }

  sai_thrift_status_t sai_thrift_set_port_attribute(const sai_thrift_object_id_t port_id, const sai_thrift_attribute_t& thrift_attr) {
    // Your implementation goes here
    printf("sai_thrift_set_port_attribute\n");
  }

  void sai_thrift_get_port_attribute(sai_thrift_attribute_list_t& _return, const sai_thrift_object_id_t port_id, const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_get_port_attribute\n");
  }

  void sai_thrift_get_port_stats(std::vector<int64_t> & _return, const sai_thrift_object_id_t port_id, const std::vector<sai_thrift_port_stat_counter_t> & counter_ids, const int32_t number_of_counters) {
    // Your implementation goes here
    printf("sai_thrift_get_port_stats\n");
  }

  sai_thrift_status_t sai_thrift_clear_port_all_stats(const sai_thrift_object_id_t port_id) {
    // Your implementation goes here
    printf("sai_thrift_clear_port_all_stats\n");
  }

  sai_thrift_status_t sai_thrift_remove_port(const sai_thrift_object_id_t port_id) {
    // Your implementation goes here
    printf("sai_thrift_remove_port\n");
  }

  sai_thrift_object_id_t sai_thrift_create_port(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_port\n");
  }

  sai_thrift_object_id_t sai_thrift_create_bridge(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_bridge\n");
  }

  sai_thrift_status_t sai_thrift_remove_bridge(const sai_thrift_object_id_t bridge_id) {
    // Your implementation goes here
    printf("sai_thrift_remove_bridge\n");
  }

  void sai_thirft_get_bridge_attribute(sai_thrift_attribute_list_t& _return, const sai_thrift_object_id_t bridge_id, const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thirft_get_bridge_attribute\n");
  }

  sai_thrift_object_id_t sai_thrift_create_bridge_port(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_bridge_port\n");
  }

  sai_thrift_status_t sai_thrift_remove_bridge_port(const sai_thrift_object_id_t bridge_port_id) {
    // Your implementation goes here
    printf("sai_thrift_remove_bridge_port\n");
  }

  void sai_thirft_get_bridge_port_attribute(sai_thrift_attribute_list_t& _return, const sai_thrift_object_id_t bridge_port_id, const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thirft_get_bridge_port_attribute\n");
  }

  sai_thrift_status_t sai_thrift_set_bridge_port_attribute(const sai_thrift_object_id_t bridge_port_id, const sai_thrift_attribute_t& thrift_attr) {
    // Your implementation goes here
    printf("sai_thrift_set_bridge_port_attribute\n");
  }

  sai_thrift_status_t sai_thrift_create_fdb_entry(const sai_thrift_fdb_entry_t& thrift_fdb_entry, const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_fdb_entry\n");
  }

  sai_thrift_status_t sai_thrift_delete_fdb_entry(const sai_thrift_fdb_entry_t& thrift_fdb_entry) {
    // Your implementation goes here
    printf("sai_thrift_delete_fdb_entry\n");
  }

  sai_thrift_status_t sai_thrift_flush_fdb_entries(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_flush_fdb_entries\n");
  }

  sai_thrift_object_id_t sai_thrift_create_vlan(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_vlan\n");
  }

  sai_thrift_status_t sai_thrift_delete_vlan(const sai_thrift_object_id_t vlan_id) {
    // Your implementation goes here
    printf("sai_thrift_delete_vlan\n");
  }

  void sai_thrift_get_vlan_stats(std::vector<int64_t> & _return, const sai_thrift_vlan_id_t vlan_id, const std::vector<sai_thrift_vlan_stat_counter_t> & counter_ids, const int32_t number_of_counters) {
    // Your implementation goes here
    printf("sai_thrift_get_vlan_stats\n");
  }

  sai_thrift_object_id_t sai_thrift_create_vlan_member(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_vlan_member\n");
  }

  sai_thrift_status_t sai_thrift_remove_vlan_member(const sai_thrift_object_id_t vlan_member_id) {
    // Your implementation goes here
    printf("sai_thrift_remove_vlan_member\n");
  }

  void sai_thrift_get_vlan_attribute(sai_thrift_attribute_list_t& _return, const sai_thrift_object_id_t vlan_id) {
    // Your implementation goes here
    printf("sai_thrift_get_vlan_attribute\n");
  }

  sai_thrift_object_id_t sai_thrift_create_virtual_router(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_virtual_router\n");
  }

  sai_thrift_status_t sai_thrift_remove_virtual_router(const sai_thrift_object_id_t vr_id) {
    // Your implementation goes here
    printf("sai_thrift_remove_virtual_router\n");
  }

  sai_thrift_status_t sai_thrift_create_route(const sai_thrift_unicast_route_entry_t& thrift_unicast_route_entry, const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_route\n");
  }

  sai_thrift_status_t sai_thrift_remove_route(const sai_thrift_unicast_route_entry_t& thrift_unicast_route_entry) {
    // Your implementation goes here
    printf("sai_thrift_remove_route\n");
  }

  sai_thrift_object_id_t sai_thrift_create_router_interface(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_router_interface\n");
  }

  sai_thrift_status_t sai_thrift_remove_router_interface(const sai_thrift_object_id_t rif_id) {
    // Your implementation goes here
    printf("sai_thrift_remove_router_interface\n");
  }

  sai_thrift_object_id_t sai_thrift_create_next_hop(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_next_hop\n");
  }

  sai_thrift_status_t sai_thrift_remove_next_hop(const sai_thrift_object_id_t next_hop_id) {
    // Your implementation goes here
    printf("sai_thrift_remove_next_hop\n");
  }

  sai_thrift_object_id_t sai_thrift_create_next_hop_group(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_next_hop_group\n");
  }

  sai_thrift_status_t sai_thrift_remove_next_hop_group(const sai_thrift_object_id_t next_hop_group_id) {
    // Your implementation goes here
    printf("sai_thrift_remove_next_hop_group\n");
  }

  sai_thrift_status_t sai_thrift_add_next_hop_to_group(const sai_thrift_object_id_t next_hop_group_id, const std::vector<sai_thrift_object_id_t> & thrift_nexthops) {
    // Your implementation goes here
    printf("sai_thrift_add_next_hop_to_group\n");
  }

  sai_thrift_status_t sai_thrift_remove_next_hop_from_group(const sai_thrift_object_id_t next_hop_group_id, const std::vector<sai_thrift_object_id_t> & thrift_nexthops) {
    // Your implementation goes here
    printf("sai_thrift_remove_next_hop_from_group\n");
  }

  sai_thrift_object_id_t sai_thrift_create_lag(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_lag\n");
  }

  sai_thrift_status_t sai_thrift_remove_lag(const sai_thrift_object_id_t lag_id) {
    // Your implementation goes here
    printf("sai_thrift_remove_lag\n");
  }

  sai_thrift_object_id_t sai_thrift_create_lag_member(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_lag_member\n");
  }

  sai_thrift_status_t sai_thrift_remove_lag_member(const sai_thrift_object_id_t lag_member_id) {
    // Your implementation goes here
    printf("sai_thrift_remove_lag_member\n");
  }

  sai_thrift_object_id_t sai_thrift_create_stp_entry(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_stp_entry\n");
  }

  sai_thrift_status_t sai_thrift_remove_stp_entry(const sai_thrift_object_id_t stp_id) {
    // Your implementation goes here
    printf("sai_thrift_remove_stp_entry\n");
  }

  sai_thrift_status_t sai_thrift_set_stp_port_state(const sai_thrift_object_id_t stp_id, const sai_thrift_object_id_t port_id, const sai_thrift_port_stp_port_state_t stp_port_state) {
    // Your implementation goes here
    printf("sai_thrift_set_stp_port_state\n");
  }

  sai_thrift_port_stp_port_state_t sai_thrift_get_stp_port_state(const sai_thrift_object_id_t stp_id, const sai_thrift_object_id_t port_id) {
    // Your implementation goes here
    printf("sai_thrift_get_stp_port_state\n");
  }

  sai_thrift_status_t sai_thrift_create_neighbor_entry(const sai_thrift_neighbor_entry_t& thrift_neighbor_entry, const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_neighbor_entry\n");
  }

  sai_thrift_status_t sai_thrift_remove_neighbor_entry(const sai_thrift_neighbor_entry_t& thrift_neighbor_entry) {
    // Your implementation goes here
    printf("sai_thrift_remove_neighbor_entry\n");
  }

  sai_thrift_object_id_t sai_thrift_create_switch(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_switch\n");
  }

  void sai_thrift_get_switch_attribute(sai_thrift_attribute_list_t& _return, const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_get_switch_attribute\n");
  }

  void sai_thrift_get_port_list_by_front_port(sai_thrift_attribute_t& _return) {
    // Your implementation goes here
    printf("sai_thrift_get_port_list_by_front_port\n");
  }

  sai_thrift_object_id_t sai_thrift_get_cpu_port_id() {
    // Your implementation goes here
    printf("sai_thrift_get_cpu_port_id\n");
  }

  sai_thrift_object_id_t sai_thrift_get_default_trap_group() {
    // Your implementation goes here
    printf("sai_thrift_get_default_trap_group\n");
  }

  sai_thrift_object_id_t sai_thrift_get_default_router_id() {
    // Your implementation goes here
    printf("sai_thrift_get_default_router_id\n");
  }

  sai_thrift_object_id_t sai_thrift_get_port_id_by_front_port(const std::string& port_name) {
    // Your implementation goes here
    printf("sai_thrift_get_port_id_by_front_port\n");
  }

  sai_thrift_status_t sai_thrift_set_switch_attribute(const sai_thrift_attribute_t& attribute) {
    // Your implementation goes here
    printf("sai_thrift_set_switch_attribute\n");
  }

  sai_thrift_object_id_t sai_thrift_create_hostif(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_hostif\n");
  }

  sai_thrift_status_t sai_thrift_remove_hostif(const sai_thrift_object_id_t hif_id) {
    // Your implementation goes here
    printf("sai_thrift_remove_hostif\n");
  }

  sai_thrift_object_id_t sai_thrift_create_hostif_trap_group(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_hostif_trap_group\n");
  }

  sai_thrift_status_t sai_thrift_remove_hostif_trap_group(const sai_thrift_object_id_t trap_group_id) {
    // Your implementation goes here
    printf("sai_thrift_remove_hostif_trap_group\n");
  }

  sai_thrift_status_t sai_thrift_create_hostif_trap(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_hostif_trap\n");
  }

  sai_thrift_status_t sai_thrift_remove_hostif_trap(const sai_thrift_hostif_trap_id_t trap_id) {
    // Your implementation goes here
    printf("sai_thrift_remove_hostif_trap\n");
  }

  sai_thrift_status_t sai_thrift_set_hostif_trap(const sai_thrift_hostif_trap_id_t trap_id, const sai_thrift_attribute_t& thrift_attr) {
    // Your implementation goes here
    printf("sai_thrift_set_hostif_trap\n");
  }

  sai_thrift_status_t sai_thrift_set_hostif_trap_group(const sai_thrift_object_id_t trap_group_id, const sai_thrift_attribute_t& thrift_attr) {
    // Your implementation goes here
    printf("sai_thrift_set_hostif_trap_group\n");
  }

  sai_thrift_object_id_t sai_thrift_create_acl_table(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_acl_table\n");
  }

  sai_thrift_status_t sai_thrift_delete_acl_table(const sai_thrift_object_id_t acl_table_id) {
    // Your implementation goes here
    printf("sai_thrift_delete_acl_table\n");
  }

  sai_thrift_object_id_t sai_thrift_create_acl_entry(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_acl_entry\n");
  }

  sai_thrift_status_t sai_thrift_delete_acl_entry(const sai_thrift_object_id_t acl_entry) {
    // Your implementation goes here
    printf("sai_thrift_delete_acl_entry\n");
  }

  sai_thrift_object_id_t sai_thrift_create_acl_counter(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_acl_counter\n");
  }

  sai_thrift_status_t sai_thrift_delete_acl_counter(const sai_thrift_object_id_t acl_counter_id) {
    // Your implementation goes here
    printf("sai_thrift_delete_acl_counter\n");
  }

  void sai_thrift_get_acl_counter_attribute(std::vector<sai_thrift_attribute_value_t> & _return, const sai_thrift_object_id_t acl_counter_id, const std::vector<int32_t> & thrift_attr_ids) {
    // Your implementation goes here
    printf("sai_thrift_get_acl_counter_attribute\n");
  }

  sai_thrift_object_id_t sai_thrift_create_mirror_session(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_mirror_session\n");
  }

  sai_thrift_status_t sai_thrift_remove_mirror_session(const sai_thrift_object_id_t session_id) {
    // Your implementation goes here
    printf("sai_thrift_remove_mirror_session\n");
  }

  sai_thrift_object_id_t sai_thrift_create_policer(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_policer\n");
  }

  sai_thrift_status_t sai_thrift_remove_policer(const sai_thrift_object_id_t policer_id) {
    // Your implementation goes here
    printf("sai_thrift_remove_policer\n");
  }

  void sai_thrift_get_policer_stats(std::vector<int64_t> & _return, const sai_thrift_object_id_t policer_id, const std::vector<sai_thrift_policer_stat_counter_t> & counter_ids) {
    // Your implementation goes here
    printf("sai_thrift_get_policer_stats\n");
  }

  sai_thrift_object_id_t sai_thrift_create_scheduler_profile(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_scheduler_profile\n");
  }

  sai_thrift_status_t sai_thrift_remove_scheduler_profile(const sai_thrift_object_id_t scheduler_id) {
    // Your implementation goes here
    printf("sai_thrift_remove_scheduler_profile\n");
  }

  void sai_thrift_get_queue_stats(std::vector<int64_t> & _return, const sai_thrift_object_id_t queue_id, const std::vector<sai_thrift_queue_stat_counter_t> & counter_ids, const int32_t number_of_counters) {
    // Your implementation goes here
    printf("sai_thrift_get_queue_stats\n");
  }

  sai_thrift_status_t sai_thrift_clear_queue_stats(const sai_thrift_object_id_t queue_id, const std::vector<sai_thrift_queue_stat_counter_t> & counter_ids, const int32_t number_of_counters) {
    // Your implementation goes here
    printf("sai_thrift_clear_queue_stats\n");
  }

  sai_thrift_status_t sai_thrift_set_queue_attribute(const sai_thrift_object_id_t queue_id, const sai_thrift_attribute_t& thrift_attr) {
    // Your implementation goes here
    printf("sai_thrift_set_queue_attribute\n");
  }

  sai_thrift_object_id_t sai_thrift_create_buffer_profile(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_buffer_profile\n");
  }

  sai_thrift_object_id_t sai_thrift_create_pool_profile(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_pool_profile\n");
  }

  sai_thrift_status_t sai_thrift_set_priority_group_attribute(const sai_thrift_object_id_t pg_id, const sai_thrift_attribute_t& thrift_attr) {
    // Your implementation goes here
    printf("sai_thrift_set_priority_group_attribute\n");
  }

  void sai_thrift_get_pg_stats(std::vector<int64_t> & _return, const sai_thrift_object_id_t pg_id, const std::vector<sai_thrift_pg_stat_counter_t> & counter_ids, const int32_t number_of_counters) {
    // Your implementation goes here
    printf("sai_thrift_get_pg_stats\n");
  }

  sai_thrift_object_id_t sai_thrift_create_wred_profile(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_wred_profile\n");
  }

  sai_thrift_status_t sai_thrift_remove_wred_profile(const sai_thrift_object_id_t wred_id) {
    // Your implementation goes here
    printf("sai_thrift_remove_wred_profile\n");
  }

  sai_thrift_object_id_t sai_thrift_create_qos_map(const std::vector<sai_thrift_attribute_t> & thrift_attr_list) {
    // Your implementation goes here
    printf("sai_thrift_create_qos_map\n");
  }

  sai_thrift_status_t sai_thrift_remove_qos_map(const sai_thrift_object_id_t qos_map_id) {
    // Your implementation goes here
    printf("sai_thrift_remove_qos_map\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<switch_sai_rpcHandler> handler(new switch_sai_rpcHandler());
  shared_ptr<TProcessor> processor(new switch_sai_rpcProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

