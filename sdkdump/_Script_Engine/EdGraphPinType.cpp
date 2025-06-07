#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EdGraphPinType.hpp"
void* _Script_Engine::EdGraphPinType::get_PinCategory() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::EdGraphPinType::get_ContainerType() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::EdGraphPinType::get_PinSubCategory() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::EdGraphPinType::get_PinSubCategoryObject() {
    return (void*)((uintptr_t)this + 0x10);
}
void _Script_Engine::EdGraphPinType::set_bIsArray(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::EdGraphPinType::get_PinSubCategoryMemberReference() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::EdGraphPinType::get_PinValueType() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_Engine::EdGraphPinType::get_bIsArray() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 1 != 0;
}
bool _Script_Engine::EdGraphPinType::get_bIsReference() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 2 != 0;
}
void _Script_Engine::EdGraphPinType::set_bIsReference(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::EdGraphPinType::get_bIsConst() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 4 != 0;
}
void _Script_Engine::EdGraphPinType::set_bIsConst(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::EdGraphPinType::get_bIsWeakPointer() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 8 != 0;
}
void _Script_Engine::EdGraphPinType::set_bIsWeakPointer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::EdGraphPinType::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.EdGraphPinType");
    return result;
}
