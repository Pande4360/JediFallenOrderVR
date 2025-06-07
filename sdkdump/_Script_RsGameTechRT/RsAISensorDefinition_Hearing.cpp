#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAISensorDefinition.hpp"
#include "RsAISensorDefinition_Hearing.hpp"
float& _Script_RsGameTechRT::RsAISensorDefinition_Hearing::get_HearingRange() {
    return *(float*)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RsAISensorDefinition_Hearing::get_SoundAwarenessValues() {
    return (void*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISensorDefinition_Hearing::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAISensorDefinition_Hearing");
    return result;
}
