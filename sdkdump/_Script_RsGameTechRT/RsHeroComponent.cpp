#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "RsHero.hpp"
#include "RsHeroComponent.hpp"
#include "RsPlayerAnimInstance.hpp"
_Script_RsGameTechRT::RsHero*& _Script_RsGameTechRT::RsHeroComponent::get_Hero() {
    return *(_Script_RsGameTechRT::RsHero**)((uintptr_t)this + 0x178);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsHeroComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsHeroComponent");
    return result;
}
_Script_RsGameTechRT::RsPlayerAnimInstance* _Script_RsGameTechRT::RsHeroComponent::GetPlayerAnimInstance() {
    return;
}
bool _Script_RsGameTechRT::RsHeroComponent::DebugGetHeroComponentInfo(void*& ComponentInfoString) {
    return;
}
