#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EditableGameplayTagQueryExpression.hpp"
#include "EditableGameplayTagQueryExpression_AnyTagsMatch.hpp"
void* _Script_GameplayTags::EditableGameplayTagQueryExpression_AnyTagsMatch::get_Tags() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_GameplayTags::EditableGameplayTagQueryExpression_AnyTagsMatch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch");
    return result;
}
