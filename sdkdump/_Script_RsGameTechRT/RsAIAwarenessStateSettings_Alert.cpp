#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIAwarenessStateSettings_Alert.hpp"
float& _Script_RsGameTechRT::RsAIAwarenessStateSettings_Alert::get_MaxDistanceDelayForDefaultReaction() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_RsGameTechRT::RsAIAwarenessStateSettings_Alert::get_MinCooldownTime() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_RsGameTechRT::RsAIAwarenessStateSettings_Alert::get_MaxCooldownTime() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_RsGameTechRT::RsAIAwarenessStateSettings_Alert::get_MaxBaseDelayForDefaultReaction() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_RsGameTechRT::RsAIAwarenessStateSettings_Alert::get_MinBaseDelayForDefaultReaction() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_RsGameTechRT::RsAIAwarenessStateSettings_Alert::get_MinDistanceDelayForDefaultReaction() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIAwarenessStateSettings_Alert::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIAwarenessStateSettings_Alert");
    return result;
}
