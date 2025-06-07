#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionCustomOutput.hpp"
#include "MaterialExpressionTangentOutput.hpp"
void* _Script_Engine::MaterialExpressionTangentOutput::get_Input() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionTangentOutput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionTangentOutput");
    return result;
}
