#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionPreviousFrameSwitch.hpp"
void* _Script_Engine::MaterialExpressionPreviousFrameSwitch::get_CurrentFrame() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionPreviousFrameSwitch::get_PreviousFrame() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionPreviousFrameSwitch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionPreviousFrameSwitch");
    return result;
}
