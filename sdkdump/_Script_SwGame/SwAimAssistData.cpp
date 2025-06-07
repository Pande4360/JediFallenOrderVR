#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwAimAssistData.hpp"
float& _Script_SwGame::SwAimAssistData::get_PrimeStartRadius() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::SwAimAssistData::get_PrimeAngle() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_SwGame::SwAimAssistData::get_PrimeRadius() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_SwGame::SwAimAssistData::get_SecondaryAngle() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_SwGame::SwAimAssistData::get_SecondaryRadius() {
    return *(float*)((uintptr_t)this + 0x10);
}
bool _Script_SwGame::SwAimAssistData::get_bUseDoubleCone() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
float& _Script_SwGame::SwAimAssistData::get_ProximityWeight() {
    return *(float*)((uintptr_t)this + 0x18);
}
void _Script_SwGame::SwAimAssistData::set_bUseDoubleCone(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAimAssistData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwAimAssistData");
    return result;
}
