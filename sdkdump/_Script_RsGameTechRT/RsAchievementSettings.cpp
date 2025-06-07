#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsAchievementSettings.hpp"
void* _Script_RsGameTechRT::RsAchievementSettings::get_AchievementEnumClass() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_RsGameTechRT::RsAchievementSettings::get_PS4Config() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_RsGameTechRT::RsAchievementSettings::get_XboxOneConfig() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_RsGameTechRT::RsAchievementSettings::get_OriginConfig() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAchievementSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAchievementSettings");
    return result;
}
void* _Script_RsGameTechRT::RsAchievementSettings::get_AchievementNames() {
    return (void*)((uintptr_t)this + 0xb8);
}
