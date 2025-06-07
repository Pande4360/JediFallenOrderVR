#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimLinkableElement.hpp"
#include "CompositeSection.hpp"
void* _Script_Engine::CompositeSection::get_SectionName() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_Engine::CompositeSection::set_bIsRandomized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::CompositeSection::get_bIsRandomized() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
float& _Script_Engine::CompositeSection::get_StartTime() {
    return *(float*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::CompositeSection::get_NextSectionName() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::CompositeSection::get_MetaData() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Engine::CompositeSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CompositeSection");
    return result;
}
