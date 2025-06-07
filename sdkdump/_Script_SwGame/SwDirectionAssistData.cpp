#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwDirectionAssistData.hpp"
float& _Script_SwGame::SwDirectionAssistData::get_Radius() {
    return *(float*)((uintptr_t)this + 0x8);
}
bool _Script_SwGame::SwDirectionAssistData::get_bShouldOverrideDirectionAssistData() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
float& _Script_SwGame::SwDirectionAssistData::get_OffscreenPenalty() {
    return *(float*)((uintptr_t)this + 0x14);
}
void _Script_SwGame::SwDirectionAssistData::set_bShouldOverrideDirectionAssistData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwDirectionAssistData::get_HalfAngle() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_SwGame::SwDirectionAssistData::get_StartRadius() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_SwGame::SwDirectionAssistData::get_ProximityWeight() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SwGame::SwDirectionAssistData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwDirectionAssistData");
    return result;
}
