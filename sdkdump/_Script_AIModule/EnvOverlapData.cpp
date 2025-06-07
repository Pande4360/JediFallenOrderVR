#include "..\FUObjectArray.hpp"
#include "EnvOverlapData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_AIModule::EnvOverlapData::set_bOnlyBlockingHits(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AIModule::EnvOverlapData::get_ExtentX() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_AIModule::EnvOverlapData::get_ExtentY() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_AIModule::EnvOverlapData::get_ExtentZ() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_AIModule::EnvOverlapData::get_ShapeOffset() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_AIModule::EnvOverlapData::get_OverlapChannel() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_AIModule::EnvOverlapData::get_OverlapShape() {
    return (void*)((uintptr_t)this + 0x19);
}
bool _Script_AIModule::EnvOverlapData::get_bOnlyBlockingHits() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
bool _Script_AIModule::EnvOverlapData::get_bOverlapComplex() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 2 != 0;
}
void _Script_AIModule::EnvOverlapData::set_bOverlapComplex(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvOverlapData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.EnvOverlapData");
    return result;
}
