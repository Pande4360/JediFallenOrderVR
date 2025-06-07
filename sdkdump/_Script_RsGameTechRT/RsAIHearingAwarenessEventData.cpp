#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIHearingAwarenessEventData.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIHearingAwarenessEventData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIHearingAwarenessEventData");
    return result;
}
float& _Script_RsGameTechRT::RsAIHearingAwarenessEventData::get_AwarenessValue() {
    return *(float*)((uintptr_t)this + 0x0);
}
