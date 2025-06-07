#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionTemporalSobol.hpp"
void* _Script_Engine::MaterialExpressionTemporalSobol::get_Index() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionTemporalSobol::get_Seed() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::MaterialExpressionTemporalSobol::get_ConstIndex() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::MaterialExpressionTemporalSobol::get_ConstSeed() {
    return (void*)((uintptr_t)this + 0x74);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionTemporalSobol::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionTemporalSobol");
    return result;
}
