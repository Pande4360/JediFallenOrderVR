#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsAISoundEvents.hpp"
void* _Script_RsGameTechRT::RsAISoundEvents::get_FootstepBig() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsAISoundEvents::get_FootstepSmall() {
    return (void*)((uintptr_t)this + 0x31);
}
float& _Script_RsGameTechRT::RsAISoundEvents::get_FootstepBigThresholdSpeed() {
    return *(float*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISoundEvents::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAISoundEvents");
    return result;
}
