#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleColorBase.hpp"
#include "RsParticleModuleGBufferColor.hpp"
void* _Script_Engine::RsParticleModuleGBufferColor::get_AlphaOverLife() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::RsParticleModuleGBufferColor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsParticleModuleGBufferColor");
    return result;
}
