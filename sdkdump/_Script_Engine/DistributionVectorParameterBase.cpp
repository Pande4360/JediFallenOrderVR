#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionVectorConstant.hpp"
#include "DistributionVectorParameterBase.hpp"
void* _Script_Engine::DistributionVectorParameterBase::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::DistributionVectorParameterBase::get_MinInput() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::DistributionVectorParameterBase::get_MaxInput() {
    return (void*)((uintptr_t)this + 0x64);
}
void* _Script_Engine::DistributionVectorParameterBase::get_MaxOutput() {
    return (void*)((uintptr_t)this + 0x7c);
}
void* _Script_Engine::DistributionVectorParameterBase::get_MinOutput() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::DistributionVectorParameterBase::get_ParamModes() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_Engine::DistributionVectorParameterBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DistributionVectorParameterBase");
    return result;
}
