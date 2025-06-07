#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "RsDynamicDeformerBase.hpp"
#include "RsDynamicDeformerParticleSystem.hpp"
_Script_Engine::ParticleSystemComponent*& _Script_RsTechRT::RsDynamicDeformerParticleSystem::get_ParticleSystem() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsDynamicDeformerParticleSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsDynamicDeformerParticleSystem");
    return result;
}
void _Script_RsTechRT::RsDynamicDeformerParticleSystem::OnParticleSystemFinished(_Script_Engine::ParticleSystemComponent* FinishedComponent) {
    return;
}
