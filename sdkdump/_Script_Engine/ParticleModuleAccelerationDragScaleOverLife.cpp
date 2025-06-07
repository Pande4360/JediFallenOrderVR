#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionFloat.hpp"
#include "ParticleModuleAccelerationBase.hpp"
#include "ParticleModuleAccelerationDragScaleOverLife.hpp"
_Script_Engine::DistributionFloat*& _Script_Engine::ParticleModuleAccelerationDragScaleOverLife::get_DragScale() {
    return *(_Script_Engine::DistributionFloat**)((uintptr_t)this + 0x38);
}
void* _Script_Engine::ParticleModuleAccelerationDragScaleOverLife::get_DragScaleRaw() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleAccelerationDragScaleOverLife::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleAccelerationDragScaleOverLife");
    return result;
}
