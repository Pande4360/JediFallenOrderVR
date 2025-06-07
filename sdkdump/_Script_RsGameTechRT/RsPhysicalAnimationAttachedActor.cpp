#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "RsPhysicalAnimationAttachedActor.hpp"
#include "RsPhysicalAnimationComponent.hpp"
#include "RsPhysicalMotionAnalyzerComponent.hpp"
_Script_Engine::Actor*& _Script_RsGameTechRT::RsPhysicalAnimationAttachedActor::get_m_AttachedActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x0);
}
_Script_RsGameTechRT::RsPhysicalMotionAnalyzerComponent*& _Script_RsGameTechRT::RsPhysicalAnimationAttachedActor::get_m_AttachedActorRsPhysicalMotionAnalyzerComponent() {
    return *(_Script_RsGameTechRT::RsPhysicalMotionAnalyzerComponent**)((uintptr_t)this + 0x8);
}
_Script_RsGameTechRT::RsPhysicalAnimationComponent*& _Script_RsGameTechRT::RsPhysicalAnimationAttachedActor::get_m_AttachedActorRsPhysicalAnimationComponent() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationComponent**)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPhysicalAnimationAttachedActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsPhysicalAnimationAttachedActor");
    return result;
}
