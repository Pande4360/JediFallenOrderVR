#include "..\FUObjectArray.hpp"
#include "BTAuxiliaryNode.hpp"
#include "BTService.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_AIModule::BTService::set_bRestartTimerOnEachActivation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_AIModule::BTService::get_interval() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_AIModule::BTService::get_RandomDeviation() {
    return *(float*)((uintptr_t)this + 0x64);
}
void _Script_AIModule::BTService::set_bCallTickOnSearchStart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AIModule::BTService::get_bCallTickOnSearchStart() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
bool _Script_AIModule::BTService::get_bRestartTimerOnEachActivation() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 2 != 0;
}
_Script_CoreUObject::Class* _Script_AIModule::BTService::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTService");
    return result;
}
