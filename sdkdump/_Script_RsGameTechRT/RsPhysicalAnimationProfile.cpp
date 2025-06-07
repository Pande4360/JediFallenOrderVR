#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsPhysicalAnimationProfile.hpp"
void* _Script_RsGameTechRT::RsPhysicalAnimationProfile::get_PhysicalAnimationParameters() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPhysicalAnimationProfile::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsPhysicalAnimationProfile");
    return result;
}
