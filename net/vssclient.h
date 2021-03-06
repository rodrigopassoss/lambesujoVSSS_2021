#ifndef VSSCLIENT_H
#define VSSCLIENT_H

//#include "util.h"
//#include "netraw.h"
#include "robocup_ssl_client.h"

#include <string>
#include <QMutex>

// firaSim packets
#include <net/pb/common.pb.h>
#include <net/pb/packet.pb.h>
#include <net/pb/command.pb.h>
#include <net/pb/replacement.pb.h>

// referee placement packets
#include <net/pb/vssref_placement.pb.h>
#include <net/pb/vssref_command.pb.h>

class VSSClient
{
protected:
    static const int MaxDatagramSize = 65536;
    char *in_buffer;

    // Multicast Client
    Net::UDP mc;
    int _port;
    std::string _net_address;
    std::string _net_interface;
    QMutex mutex;
public:
    VSSClient(int port                  = 10002,
              std::string net_address   = "224.5.23.2",
              std::string net_interface = "");
    ~VSSClient();

    // Commands for connection
    bool open(bool blocking = false);
    void close();

    // Receive packet
    bool receive(fira_message::sim_to_ref::Environment &packet);
    bool receive(VSSRef::team_to_ref::VSSRef_Placement &packet);
    bool receive(VSSRef::ref_to_team::VSSRef_Command &packet);
};

#endif // VSSCLIENT_H
