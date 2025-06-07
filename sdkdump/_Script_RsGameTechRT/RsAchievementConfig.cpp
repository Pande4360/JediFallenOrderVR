#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAchievementConfig.hpp"
void* _Script_RsGameTechRT::RsAchievementConfig::get_AchievementMapPath() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_RsGameTechRT::RsAchievementConfig::get_StartIndex() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
void* _Script_RsGameTechRT::RsAchievementConfig::get_IgnoredAchievementIds() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAchievementConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAchievementConfig");
    return result;
}
