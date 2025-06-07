#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameSession.hpp"
#include "Info.hpp"
void _Script_Engine::GameSession::set_bRequiresPushToTalk(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x36d + 0);
    *(uint8_t*)((uintptr_t)this + 0x36d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::GameSession::get_MaxSpectators() {
    return *(int32_t*)((uintptr_t)this + 0x360);
}
int32_t& _Script_Engine::GameSession::get_MaxPlayers() {
    return *(int32_t*)((uintptr_t)this + 0x364);
}
int32_t& _Script_Engine::GameSession::get_MaxPartySize() {
    return *(int32_t*)((uintptr_t)this + 0x368);
}
void* _Script_Engine::GameSession::get_MaxSplitscreensPerConnection() {
    return (void*)((uintptr_t)this + 0x36c);
}
void* _Script_Engine::GameSession::get_SessionName() {
    return (void*)((uintptr_t)this + 0x370);
}
bool _Script_Engine::GameSession::get_bRequiresPushToTalk() {
    return (*(uint8_t*)((uintptr_t)this + 0x36d + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::GameSession::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.GameSession");
    return result;
}
