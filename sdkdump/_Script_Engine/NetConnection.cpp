#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\PackageMap.hpp"
#include "Actor.hpp"
#include "NetConnection.hpp"
#include "NetDriver.hpp"
#include "Player.hpp"
void* _Script_Engine::NetConnection::get_SentTemporaries() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Engine::NetConnection::get_Children() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_Engine::NetDriver*& _Script_Engine::NetConnection::get_Driver() {
    return *(_Script_Engine::NetDriver**)((uintptr_t)this + 0x58);
}
void* _Script_Engine::NetConnection::get_PackageMapClass() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::PackageMap*& _Script_Engine::NetConnection::get_PackageMap() {
    return *(_Script_CoreUObject::PackageMap**)((uintptr_t)this + 0x68);
}
void* _Script_Engine::NetConnection::get_OpenChannels() {
    return (void*)((uintptr_t)this + 0x70);
}
int32_t& _Script_Engine::NetConnection::get_MaxPacket() {
    return *(int32_t*)((uintptr_t)this + 0xa0);
}
_Script_Engine::Actor*& _Script_Engine::NetConnection::get_OwningActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x98);
}
_Script_Engine::Actor*& _Script_Engine::NetConnection::get_ViewTarget() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x90);
}
bool _Script_Engine::NetConnection::get_InternalAck() {
    return (*(uint8_t*)((uintptr_t)this + 0xa4 + 0)) & 1 != 0;
}
void _Script_Engine::NetConnection::set_InternalAck(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::NetConnection::get_PlayerId() {
    return (void*)((uintptr_t)this + 0x158);
}
double& _Script_Engine::NetConnection::get_LastReceiveTime() {
    return *(double*)((uintptr_t)this + 0x1e8);
}
void* _Script_Engine::NetConnection::get_ChannelsToTick() {
    return (void*)((uintptr_t)this + 0x17c0);
}
_Script_CoreUObject::Class* _Script_Engine::NetConnection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NetConnection");
    return result;
}
