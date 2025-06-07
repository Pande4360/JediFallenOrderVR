#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelSequenceBindingReference.hpp"
void* _Script_LevelSequence::LevelSequenceBindingReference::get_ExternalObjectPath() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_LevelSequence::LevelSequenceBindingReference::get_PackageName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_LevelSequence::LevelSequenceBindingReference::get_ObjectPath() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequenceBindingReference::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LevelSequence.LevelSequenceBindingReference");
    return result;
}
