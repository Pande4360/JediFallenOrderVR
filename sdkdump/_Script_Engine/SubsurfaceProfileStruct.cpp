#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SubsurfaceProfileStruct.hpp"
float& _Script_Engine::SubsurfaceProfileStruct::get_ScatterRadius() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::SubsurfaceProfileStruct::get_SubsurfaceColor() {
    return (void*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::SubsurfaceProfileStruct::get_ScatteringDistribution() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_Engine::SubsurfaceProfileStruct::get_FalloffColor() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_Engine::SubsurfaceProfileStruct::get_BoundaryColorBleed() {
    return (void*)((uintptr_t)this + 0x24);
}
float& _Script_Engine::SubsurfaceProfileStruct::get_ExtinctionScale() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_Engine::SubsurfaceProfileStruct::get_NormalScale() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_Engine::SubsurfaceProfileStruct::get_IOR() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_Engine::SubsurfaceProfileStruct::get_Roughness0() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_Engine::SubsurfaceProfileStruct::get_Roughness1() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_Engine::SubsurfaceProfileStruct::get_LobeMix() {
    return *(float*)((uintptr_t)this + 0x4c);
}
void* _Script_Engine::SubsurfaceProfileStruct::get_TransmittanceColor() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Engine::SubsurfaceProfileStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SubsurfaceProfileStruct");
    return result;
}
