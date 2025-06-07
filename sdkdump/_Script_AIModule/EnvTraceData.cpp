#include "..\FUObjectArray.hpp"
#include "EnvTraceData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AIModule::EnvTraceData::get_ExtentZ() {
    return *(float*)((uintptr_t)this + 0x20);
}
int32_t& _Script_AIModule::EnvTraceData::get_VersionNum() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
bool _Script_AIModule::EnvTraceData::get_bOnlyBlockingHits() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 2 != 0;
}
float& _Script_AIModule::EnvTraceData::get_PostProjectionVerticalOffset() {
    return *(float*)((uintptr_t)this + 0x24);
}
void* _Script_AIModule::EnvTraceData::get_NavigationFilter() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_AIModule::EnvTraceData::get_ProjectDown() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_AIModule::EnvTraceData::get_ExtentY() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_AIModule::EnvTraceData::get_ProjectUp() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_AIModule::EnvTraceData::get_ExtentX() {
    return *(float*)((uintptr_t)this + 0x18);
}
void* _Script_AIModule::EnvTraceData::get_TraceChannel() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_AIModule::EnvTraceData::get_SerializedChannel() {
    return (void*)((uintptr_t)this + 0x29);
}
void* _Script_AIModule::EnvTraceData::get_TraceShape() {
    return (void*)((uintptr_t)this + 0x2a);
}
void* _Script_AIModule::EnvTraceData::get_TraceMode() {
    return (void*)((uintptr_t)this + 0x2b);
}
bool _Script_AIModule::EnvTraceData::get_bTraceComplex() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 1 != 0;
}
void _Script_AIModule::EnvTraceData::set_bTraceComplex(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AIModule::EnvTraceData::set_bOnlyBlockingHits(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_AIModule::EnvTraceData::get_bCanTraceOnNavMesh() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 4 != 0;
}
void _Script_AIModule::EnvTraceData::set_bCanTraceOnNavMesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_AIModule::EnvTraceData::get_bCanTraceOnGeometry() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 8 != 0;
}
void _Script_AIModule::EnvTraceData::set_bCanTraceOnGeometry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_AIModule::EnvTraceData::get_bCanDisableTrace() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 16 != 0;
}
void _Script_AIModule::EnvTraceData::set_bCanDisableTrace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_AIModule::EnvTraceData::get_bCanProjectDown() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 32 != 0;
}
void _Script_AIModule::EnvTraceData::set_bCanProjectDown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvTraceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.EnvTraceData");
    return result;
}
