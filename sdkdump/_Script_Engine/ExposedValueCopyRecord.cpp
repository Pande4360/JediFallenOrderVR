#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Property.hpp"
#include "ExposedValueCopyRecord.hpp"
bool _Script_Engine::ExposedValueCopyRecord::get_bInstanceIsTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
_Script_CoreUObject::Property*& _Script_Engine::ExposedValueCopyRecord::get_SourceProperty() {
    return *(_Script_CoreUObject::Property**)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::ExposedValueCopyRecord::get_Size() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
void* _Script_Engine::ExposedValueCopyRecord::get_SourcePropertyName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::ExposedValueCopyRecord::get_SourceSubPropertyName() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Engine::ExposedValueCopyRecord::get_SourceArrayIndex() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Property*& _Script_Engine::ExposedValueCopyRecord::get_DestProperty() {
    return *(_Script_CoreUObject::Property**)((uintptr_t)this + 0x20);
}
int32_t& _Script_Engine::ExposedValueCopyRecord::get_DestArrayIndex() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
void _Script_Engine::ExposedValueCopyRecord::set_bInstanceIsTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ExposedValueCopyRecord::get_PostCopyOperation() {
    return (void*)((uintptr_t)this + 0x31);
}
void* _Script_Engine::ExposedValueCopyRecord::get_CopyType() {
    return (void*)((uintptr_t)this + 0x32);
}
_Script_CoreUObject::Property*& _Script_Engine::ExposedValueCopyRecord::get_CachedSourceProperty() {
    return *(_Script_CoreUObject::Property**)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Property*& _Script_Engine::ExposedValueCopyRecord::get_CachedSourceStructSubProperty() {
    return *(_Script_CoreUObject::Property**)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::ExposedValueCopyRecord::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ExposedValueCopyRecord");
    return result;
}
