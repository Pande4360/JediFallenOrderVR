#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelSequenceBindingReferences.hpp"
void* _Script_LevelSequence::LevelSequenceBindingReferences::get_BindingIdToReferences() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequenceBindingReferences::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LevelSequence.LevelSequenceBindingReferences");
    return result;
}
void* _Script_LevelSequence::LevelSequenceBindingReferences::get_AnimSequenceInstances() {
    return (void*)((uintptr_t)this + 0x50);
}
