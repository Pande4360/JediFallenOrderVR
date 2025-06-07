#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNotify_PlayParticleEffect.hpp"
#include "AnimNotify_PlayParticleEffectWithParams.hpp"
void* _Script_Engine::AnimNotify_PlayParticleEffectWithParams::get_ColorParam() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_Engine::AnimNotify_PlayParticleEffectWithParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimNotify_PlayParticleEffectWithParams");
    return result;
}
