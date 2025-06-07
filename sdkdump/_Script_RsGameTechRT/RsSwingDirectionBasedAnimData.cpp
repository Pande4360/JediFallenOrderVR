#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsDirectionalAnimData.hpp"
#include "RsSwingDirectionBasedAnimData.hpp"
void* _Script_RsGameTechRT::RsSwingDirectionBasedAnimData::get_DirectionalAnimationDataMapping() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSwingDirectionBasedAnimData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsSwingDirectionBasedAnimData");
    return result;
}
void* _Script_RsGameTechRT::RsSwingDirectionBasedAnimData::get_DefaultAnimation() {
    return (void*)((uintptr_t)this + 0x80);
}
