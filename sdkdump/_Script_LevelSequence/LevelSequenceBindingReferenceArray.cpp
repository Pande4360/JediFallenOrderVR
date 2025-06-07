#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelSequenceBindingReferenceArray.hpp"
void* _Script_LevelSequence::LevelSequenceBindingReferenceArray::get_References() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequenceBindingReferenceArray::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LevelSequence.LevelSequenceBindingReferenceArray");
    return result;
}
