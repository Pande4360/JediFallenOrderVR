#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EngineServicePong.hpp"
void* _Script_EngineMessages::EngineServicePong::get_CurrentLevel() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EngineMessages::EngineServicePong::get_SessionId() {
    return (void*)((uintptr_t)this + 0x38);
}
int32_t& _Script_EngineMessages::EngineServicePong::get_EngineVersion() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
bool _Script_EngineMessages::EngineServicePong::get_HasBegunPlay() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void _Script_EngineMessages::EngineServicePong::set_HasBegunPlay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_EngineMessages::EngineServicePong::get_InstanceId() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_EngineMessages::EngineServicePong::get_WorldTimeSeconds() {
    return *(float*)((uintptr_t)this + 0x48);
}
void* _Script_EngineMessages::EngineServicePong::get_InstanceType() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_EngineMessages::EngineServicePong::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EngineMessages.EngineServicePong");
    return result;
}
