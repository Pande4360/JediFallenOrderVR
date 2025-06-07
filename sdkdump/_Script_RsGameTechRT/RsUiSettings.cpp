#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DeveloperSettings.hpp"
#include "RsUiSettings.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsUiSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsUiSettings");
    return result;
}
void* _Script_RsGameTechRT::RsUiSettings::get_LeftStickActionPrefix() {
    return (void*)((uintptr_t)this + 0x38);
}
float& _Script_RsGameTechRT::RsUiSettings::get_LeftStickPressThreshold() {
    return *(float*)((uintptr_t)this + 0x48);
}
void* _Script_RsGameTechRT::RsUiSettings::get_RightStickActionPrefix() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_RsGameTechRT::RsUiSettings::get_RightStickPressThreshold() {
    return *(float*)((uintptr_t)this + 0x60);
}
void* _Script_RsGameTechRT::RsUiSettings::get_DisableInputHeroStateModifierAssetRef() {
    return (void*)((uintptr_t)this + 0x68);
}
