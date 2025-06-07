#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "EditableGameplayTagQuery.hpp"
#include "EditableGameplayTagQueryExpression.hpp"
void* _Script_GameplayTags::EditableGameplayTagQuery::get_UserDescription() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_GameplayTags::EditableGameplayTagQueryExpression*& _Script_GameplayTags::EditableGameplayTagQuery::get_RootExpression() {
    return *(_Script_GameplayTags::EditableGameplayTagQueryExpression**)((uintptr_t)this + 0x48);
}
void* _Script_GameplayTags::EditableGameplayTagQuery::get_TagQueryExportText_Helper() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_GameplayTags::EditableGameplayTagQuery::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayTags.EditableGameplayTagQuery");
    return result;
}
