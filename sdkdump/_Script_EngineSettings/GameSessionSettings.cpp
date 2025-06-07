#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GameSessionSettings.hpp"
void _Script_EngineSettings::GameSessionSettings::set_bRequiresPushToTalk(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_EngineSettings::GameSessionSettings::get_MaxSpectators() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
int32_t& _Script_EngineSettings::GameSessionSettings::get_MaxPlayers() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
bool _Script_EngineSettings::GameSessionSettings::get_bRequiresPushToTalk() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_EngineSettings::GameSessionSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/EngineSettings.GameSessionSettings");
    return result;
}
