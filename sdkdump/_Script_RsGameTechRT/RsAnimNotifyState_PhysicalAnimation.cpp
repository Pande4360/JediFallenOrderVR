#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "RsAnimNotifyState_PhysicalAnimation.hpp"
#include "RsPhysicalAnimationProfile.hpp"
bool _Script_RsGameTechRT::RsAnimNotifyState_PhysicalAnimation::get_DoNotActivate() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAnimNotifyState_PhysicalAnimation::set_DoNotActivate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsPhysicalAnimationProfile*& _Script_RsGameTechRT::RsAnimNotifyState_PhysicalAnimation::get_PhysicalAnimationProfile() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationProfile**)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RsAnimNotifyState_PhysicalAnimation::get_PhysicalAnimationOperationParameters() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAnimNotifyState_PhysicalAnimation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAnimNotifyState_PhysicalAnimation");
    return result;
}
