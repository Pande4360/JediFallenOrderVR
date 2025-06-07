#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsHeadTrackingTarget.hpp"
void* _Script_RsGameTechRT::RsHeadTrackingTarget::get_LookAtTargetActor() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsHeadTrackingTarget::get_LookAtTargetComponent() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsHeadTrackingTarget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsHeadTrackingTarget");
    return result;
}
void* _Script_RsGameTechRT::RsHeadTrackingTarget::get_LookAtTargetCharacter() {
    return (void*)((uintptr_t)this + 0x10);
}
