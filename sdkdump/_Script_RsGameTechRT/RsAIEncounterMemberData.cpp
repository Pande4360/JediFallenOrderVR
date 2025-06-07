#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAICharacter.hpp"
#include "RsAIEncounterMemberData.hpp"
_Script_RsGameTechRT::RsAICharacter*& _Script_RsGameTechRT::RsAIEncounterMemberData::get_AICharacter() {
    return *(_Script_RsGameTechRT::RsAICharacter**)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsAIEncounterMemberData::get_MemberClassPath() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_RsGameTechRT::RsAIEncounterMemberData::get_MemberState() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_RsGameTechRT::RsAIEncounterMemberData::get_DeathTransform() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIEncounterMemberData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIEncounterMemberData");
    return result;
}
