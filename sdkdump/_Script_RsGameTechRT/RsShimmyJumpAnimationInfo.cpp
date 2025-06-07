#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsShimmyJumpAnimationInfo.hpp"
void* _Script_RsGameTechRT::RsShimmyJumpAnimationInfo::get_AnimDistanceRanges() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsShimmyJumpAnimationInfo::get_DurationRanges() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsShimmyJumpAnimationInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsShimmyJumpAnimationInfo");
    return result;
}
