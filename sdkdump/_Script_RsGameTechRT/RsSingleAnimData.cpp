#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsDirectionalAnimData.hpp"
#include "RsSingleAnimData.hpp"
void* _Script_RsGameTechRT::RsSingleAnimData::get_AnimationData() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSingleAnimData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsSingleAnimData");
    return result;
}
