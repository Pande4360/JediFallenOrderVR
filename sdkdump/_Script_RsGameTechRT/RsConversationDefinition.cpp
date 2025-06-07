#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsConversationDefinition.hpp"
void* _Script_RsGameTechRT::RsConversationDefinition::get_ConversationInfo() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsConversationDefinition::get_ActorNames() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_RsGameTechRT::RsConversationDefinition::get_ActorTypeNames() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsConversationDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsConversationDefinition");
    return result;
}
