#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "RsAICharacterAttributes.hpp"
void* _Script_RsGameTechRT::RsAICharacterAttributes::get_Class() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_RsGameTechRT::RsAICharacterAttributes::get_FightPoints() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
float& _Script_RsGameTechRT::RsAICharacterAttributes::get_Strength() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAICharacterAttributes::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAICharacterAttributes");
    return result;
}
float& _Script_RsGameTechRT::RsAICharacterAttributes::get_FleeDistance() {
    return *(float*)((uintptr_t)this + 0x14);
}
