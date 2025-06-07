#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameplayTagQuery.hpp"
int32_t& _Script_GameplayTags::GameplayTagQuery::get_TokenStreamVersion() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_GameplayTags::GameplayTagQuery::get_QueryTokenStream() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_GameplayTags::GameplayTagQuery::get_TagDictionary() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_GameplayTags::GameplayTagQuery::get_UserDescription() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_GameplayTags::GameplayTagQuery::get_AutoDescription() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_GameplayTags::GameplayTagQuery::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GameplayTags.GameplayTagQuery");
    return result;
}
