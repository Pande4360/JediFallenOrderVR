#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EditableGameplayTagQueryExpression.hpp"
#include "EditableGameplayTagQueryExpression_AllExprMatch.hpp"
void* _Script_GameplayTags::EditableGameplayTagQueryExpression_AllExprMatch::get_Expressions() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_GameplayTags::EditableGameplayTagQueryExpression_AllExprMatch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch");
    return result;
}
