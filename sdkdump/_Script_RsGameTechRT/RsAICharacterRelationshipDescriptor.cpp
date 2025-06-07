#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAICharacterRelationshipDescriptor.hpp"
void* _Script_RsGameTechRT::RsAICharacterRelationshipDescriptor::get_RelationshipTag() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_RsGameTechRT::RsAICharacterRelationshipDescriptor::get_Alignment() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAICharacterRelationshipDescriptor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAICharacterRelationshipDescriptor");
    return result;
}
