#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleTypeDataAnimTrail.hpp"
#include "ParticleModuleTypeDataBase.hpp"
bool _Script_Engine::ParticleModuleTypeDataAnimTrail::get_bDeadTrailsOnDeactivate() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleTypeDataAnimTrail::set_bDeadTrailsOnDeactivate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::ParticleModuleTypeDataAnimTrail::get_TilingDistance() {
    return *(float*)((uintptr_t)this + 0x34);
}
void _Script_Engine::ParticleModuleTypeDataAnimTrail::set_bEnablePreviousTangentRecalculation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModuleTypeDataAnimTrail::get_bEnablePreviousTangentRecalculation() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 2 != 0;
}
bool _Script_Engine::ParticleModuleTypeDataAnimTrail::get_bTangentRecalculationEveryFrame() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 4 != 0;
}
void _Script_Engine::ParticleModuleTypeDataAnimTrail::set_bTangentRecalculationEveryFrame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::ParticleModuleTypeDataAnimTrail::get_DistanceTessellationStepSize() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_Engine::ParticleModuleTypeDataAnimTrail::get_TangentTessellationStepSize() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_Engine::ParticleModuleTypeDataAnimTrail::get_WidthTessellationStepSize() {
    return *(float*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleTypeDataAnimTrail::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleTypeDataAnimTrail");
    return result;
}
