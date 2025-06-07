#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ObjectLibrary.hpp"
void* _Script_Engine::ObjectLibrary::get_ObjectBaseClass() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_Engine::ObjectLibrary::get_bHasBlueprintClasses() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_Engine::ObjectLibrary::set_bHasBlueprintClasses(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ObjectLibrary::get_bUseWeakReferences() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void* _Script_Engine::ObjectLibrary::get_Objects() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::ObjectLibrary::get_WeakObjects() {
    return (void*)((uintptr_t)this + 0x48);
}
void _Script_Engine::ObjectLibrary::set_bUseWeakReferences(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ObjectLibrary::get_bIsFullyLoaded() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 1 != 0;
}
void _Script_Engine::ObjectLibrary::set_bIsFullyLoaded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ObjectLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ObjectLibrary");
    return result;
}
