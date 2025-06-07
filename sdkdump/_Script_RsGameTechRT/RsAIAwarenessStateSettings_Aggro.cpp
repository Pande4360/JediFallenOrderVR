#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIAwarenessStateSettings_Aggro.hpp"
float& _Script_RsGameTechRT::RsAIAwarenessStateSettings_Aggro::get_MinCooldownTimeWhenThreatsPresent() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIAwarenessStateSettings_Aggro::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIAwarenessStateSettings_Aggro");
    return result;
}
float& _Script_RsGameTechRT::RsAIAwarenessStateSettings_Aggro::get_MaxCooldownTimeWhenThreatsPresent() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_RsGameTechRT::RsAIAwarenessStateSettings_Aggro::get_MinCooldownTimeWhenNoThreats() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_RsGameTechRT::RsAIAwarenessStateSettings_Aggro::get_MaxCooldownTimeWhenNoThreats() {
    return *(float*)((uintptr_t)this + 0xc);
}
