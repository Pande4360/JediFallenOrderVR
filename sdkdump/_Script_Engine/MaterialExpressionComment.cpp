#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionComment.hpp"
int32_t& _Script_Engine::MaterialExpressionComment::get_FontSize() {
    return *(int32_t*)((uintptr_t)this + 0x68);
}
int32_t& _Script_Engine::MaterialExpressionComment::get_SizeX() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
int32_t& _Script_Engine::MaterialExpressionComment::get_SizeY() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
void* _Script_Engine::MaterialExpressionComment::get_Text() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::MaterialExpressionComment::get_CommentColor() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionComment::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionComment");
    return result;
}
