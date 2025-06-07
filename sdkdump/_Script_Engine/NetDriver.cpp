#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Package.hpp"
#include "..\_Script_CoreUObject\Property.hpp"
#include "NetConnection.hpp"
#include "NetDriver.hpp"
#include "ReplicationDriver.hpp"
#include "World.hpp"
float& _Script_Engine::NetDriver::get_ServerTravelPause() {
    return *(float*)((uintptr_t)this + 0x64);
}
bool _Script_Engine::NetDriver::get_bClampListenServerTickRate() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 1 != 0;
}
void* _Script_Engine::NetDriver::get_NetConnectionClassName() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::NetDriver::get_ReplicationDriverClassName() {
    return (void*)((uintptr_t)this + 0x40);
}
int32_t& _Script_Engine::NetDriver::get_MaxDownloadSize() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
float& _Script_Engine::NetDriver::get_KeepAliveTime() {
    return *(float*)((uintptr_t)this + 0x70);
}
void _Script_Engine::NetDriver::set_bClampListenServerTickRate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::NetDriver::get_NetServerMaxTickRate() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
int32_t& _Script_Engine::NetDriver::get_MaxInternetClientRate() {
    return *(int32_t*)((uintptr_t)this + 0x5c);
}
int32_t& _Script_Engine::NetDriver::get_MaxClientRate() {
    return *(int32_t*)((uintptr_t)this + 0x60);
}
float& _Script_Engine::NetDriver::get_SpawnPrioritySeconds() {
    return *(float*)((uintptr_t)this + 0x68);
}
_Script_Engine::ReplicationDriver*& _Script_Engine::NetDriver::get_ReplicationDriver() {
    return *(_Script_Engine::ReplicationDriver**)((uintptr_t)this + 0x670);
}
float& _Script_Engine::NetDriver::get_RelevantTimeout() {
    return *(float*)((uintptr_t)this + 0x6c);
}
float& _Script_Engine::NetDriver::get_InitialConnectTimeout() {
    return *(float*)((uintptr_t)this + 0x74);
}
float& _Script_Engine::NetDriver::get_ConnectionTimeout() {
    return *(float*)((uintptr_t)this + 0x78);
}
float& _Script_Engine::NetDriver::get_TimeoutMultiplierForUnoptimizedBuilds() {
    return *(float*)((uintptr_t)this + 0x7c);
}
_Script_Engine::World*& _Script_Engine::NetDriver::get_World() {
    return *(_Script_Engine::World**)((uintptr_t)this + 0x128);
}
bool _Script_Engine::NetDriver::get_bNoTimeouts() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void _Script_Engine::NetDriver::set_bNoTimeouts(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::NetDriver::get_ActorChannelPool() {
    return (void*)((uintptr_t)this + 0x1c0);
}
_Script_Engine::NetConnection*& _Script_Engine::NetDriver::get_ServerConnection() {
    return *(_Script_Engine::NetConnection**)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Package*& _Script_Engine::NetDriver::get_WorldPackage() {
    return *(_Script_CoreUObject::Package**)((uintptr_t)this + 0x130);
}
void* _Script_Engine::NetDriver::get_ClientConnections() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::NetDriver::get_NetConnectionClass() {
    return (void*)((uintptr_t)this + 0x158);
}
void* _Script_Engine::NetDriver::get_ReplicationDriverClass() {
    return (void*)((uintptr_t)this + 0x160);
}
_Script_CoreUObject::Property*& _Script_Engine::NetDriver::get_RoleProperty() {
    return *(_Script_CoreUObject::Property**)((uintptr_t)this + 0x168);
}
_Script_CoreUObject::Property*& _Script_Engine::NetDriver::get_RemoteRoleProperty() {
    return *(_Script_CoreUObject::Property**)((uintptr_t)this + 0x170);
}
void* _Script_Engine::NetDriver::get_NetDriverName() {
    return (void*)((uintptr_t)this + 0x178);
}
float& _Script_Engine::NetDriver::get_Time() {
    return *(float*)((uintptr_t)this + 0x1d8);
}
_Script_CoreUObject::Class* _Script_Engine::NetDriver::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NetDriver");
    return result;
}
