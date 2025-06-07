#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AtmospherePrecomputeParameters.hpp"
float& _Script_Engine::AtmospherePrecomputeParameters::get_DensityHeight() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::AtmospherePrecomputeParameters::get_DecayHeight() {
    return *(float*)((uintptr_t)this + 0x4);
}
int32_t& _Script_Engine::AtmospherePrecomputeParameters::get_MaxScatteringOrder() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::AtmospherePrecomputeParameters::get_TransmittanceTexWidth() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
int32_t& _Script_Engine::AtmospherePrecomputeParameters::get_IrradianceTexWidth() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
int32_t& _Script_Engine::AtmospherePrecomputeParameters::get_TransmittanceTexHeight() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Engine::AtmospherePrecomputeParameters::get_IrradianceTexHeight() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
int32_t& _Script_Engine::AtmospherePrecomputeParameters::get_InscatterMuNum() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
int32_t& _Script_Engine::AtmospherePrecomputeParameters::get_InscatterAltitudeSampleNum() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
int32_t& _Script_Engine::AtmospherePrecomputeParameters::get_InscatterMuSNum() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
int32_t& _Script_Engine::AtmospherePrecomputeParameters::get_InscatterNuNum() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::AtmospherePrecomputeParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AtmospherePrecomputeParameters");
    return result;
}
