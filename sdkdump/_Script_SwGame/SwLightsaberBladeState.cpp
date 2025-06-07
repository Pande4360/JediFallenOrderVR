#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwLightsaberBladeState.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwLightsaberBladeState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwLightsaberBladeState");
    return result;
}
void* _Script_SwGame::SwLightsaberBladeState::get_PosWs() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SwGame::SwLightsaberBladeState::get_DirWs() {
    return (void*)((uintptr_t)this + 0xc);
}
float& _Script_SwGame::SwLightsaberBladeState::get_Length() {
    return *(float*)((uintptr_t)this + 0x18);
}
bool _Script_SwGame::SwLightsaberBladeState::get_bExtended() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
void _Script_SwGame::SwLightsaberBladeState::set_bExtended(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
