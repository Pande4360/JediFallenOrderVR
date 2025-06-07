#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAttackerDirectionBasedAnimData.hpp"
#include "RsDirectionalAnimData.hpp"
void* _Script_RsGameTechRT::RsAttackerDirectionBasedAnimData::get_DirectionalAnimationDataMapping() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsAttackerDirectionBasedAnimData::get_DefaultAnimation() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAttackerDirectionBasedAnimData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAttackerDirectionBasedAnimData");
    return result;
}
