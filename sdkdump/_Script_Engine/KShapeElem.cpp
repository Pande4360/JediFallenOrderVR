#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "KShapeElem.hpp"
float& _Script_Engine::KShapeElem::get_RestOffset() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::KShapeElem::get_Name() {
    return (void*)((uintptr_t)this + 0x10);
}
bool _Script_Engine::KShapeElem::get_bContributeToMass() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
void _Script_Engine::KShapeElem::set_bContributeToMass(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::KShapeElem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.KShapeElem");
    return result;
}
