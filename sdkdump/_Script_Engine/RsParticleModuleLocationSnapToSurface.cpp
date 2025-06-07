#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleLocationBase.hpp"
#include "RsParticleModuleLocationSnapToSurface.hpp"
float& _Script_Engine::RsParticleModuleLocationSnapToSurface::get_DepthThreshold() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_Engine::RsParticleModuleLocationSnapToSurface::get_NormalThreshold() {
    return *(float*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_Engine::RsParticleModuleLocationSnapToSurface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsParticleModuleLocationSnapToSurface");
    return result;
}
