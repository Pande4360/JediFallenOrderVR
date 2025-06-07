#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelSequenceObject.hpp"
void* _Script_LevelSequence::LevelSequenceObject::get_ObjectOrOwner() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_LevelSequence::LevelSequenceObject::get_ComponentName() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_LevelSequence::LevelSequenceObject::get_CachedComponent() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequenceObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LevelSequence.LevelSequenceObject");
    return result;
}
