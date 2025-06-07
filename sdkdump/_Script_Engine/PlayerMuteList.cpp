#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PlayerMuteList.hpp"
bool _Script_Engine::PlayerMuteList::get_bHasVoiceHandshakeCompleted() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_Engine::PlayerMuteList::set_bHasVoiceHandshakeCompleted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::PlayerMuteList::get_VoiceChannelIdx() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_Engine::PlayerMuteList::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PlayerMuteList");
    return result;
}
