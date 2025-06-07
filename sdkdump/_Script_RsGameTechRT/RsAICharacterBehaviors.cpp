#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAICharacterBehaviors.hpp"
void* _Script_RsGameTechRT::RsAICharacterBehaviors::get_FightBehaviors() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsAICharacterBehaviors::get_GoalBehaviors() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_RsGameTechRT::RsAICharacterBehaviors::get_OverrideBehaviors() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAICharacterBehaviors::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAICharacterBehaviors");
    return result;
}
void* _Script_RsGameTechRT::RsAICharacterBehaviors::get_RoleBehaviors() {
    return (void*)((uintptr_t)this + 0x30);
}
