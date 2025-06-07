#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PacketSimulationSettings.hpp"
_Script_CoreUObject::Class* _Script_Engine::PacketSimulationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PacketSimulationSettings");
    return result;
}
int32_t& _Script_Engine::PacketSimulationSettings::get_PktLoss() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::PacketSimulationSettings::get_PktLagVariance() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Engine::PacketSimulationSettings::get_PktOrder() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_Engine::PacketSimulationSettings::get_PktDup() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::PacketSimulationSettings::get_PktLag() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
